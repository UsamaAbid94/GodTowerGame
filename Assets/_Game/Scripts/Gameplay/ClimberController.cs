using System;
using GodTower.Core;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using UnityEngine;

namespace GodTower.Gameplay
{
    public enum ClimberState
    {
        Hanging,
        Climbing,
        Stunned,
        Falling,
        Boosting,
        Won,
        Lost
    }

    /// <summary>
    /// Hand-over-hand tower climber: stepped climbing, three lanes across the tower face,
    /// stun → knock-back fall → re-grab, jetpack boost, and win/lose poses.
    /// Poses are Animator states (Hang / Climb / Hit / Fall) on the body; lane lean and impact
    /// jolts are applied to the parent <see cref="visual"/> so they layer on top of the clips.
    /// </summary>
    public class ClimberController : MonoBehaviour
    {
        private static readonly int HangAnim = Animator.StringToHash("Hang");
        private static readonly int ClimbAnim = Animator.StringToHash("Climb");
        private static readonly int HitAnim = Animator.StringToHash("Hit");
        private static readonly int FallAnim = Animator.StringToHash("Fall");

        [Header("References")]
        [SerializeField] private ClimberInput input;
        [SerializeField] private Transform visual;
        [SerializeField] private SpriteRenderer body;
        [SerializeField] private Animator animator;
        [SerializeField] private SpriteRenderer boostAura;
        [SerializeField] private VfxPool vfx;

        [Header("Climbing")]
        [SerializeField] private float stepHeight = 0.55f;
        [SerializeField] private float stepDuration = 0.15f;
        [Tooltip("Minimum time between steps while the climb input is held.")]
        [SerializeField] private float holdCadence = 0.2f;
        [SerializeField] private float settleDelay = 0.3f;

        [Header("Lanes")]
        [SerializeField, Min(1)] private int laneCount = 3;
        [SerializeField] private float laneSpacing = 1.05f;
        [SerializeField] private float laneSmoothTime = 0.07f;

        [Header("Falling")]
        [SerializeField] private float gravity = 45f;
        [SerializeField] private float maxFallSpeed = 40f;
        [Tooltip("Lowest point on the tower the climber can be dragged to.")]
        [SerializeField] private float minY = 0.6f;

        [Header("Damage")]
        [Tooltip("Kept small enough that a hazard in a neighbouring lane can never touch the climber.")]
        [SerializeField] private float hitRadius = 0.35f;
        [SerializeField] private float invulnerableTime = 2f;

        [Header("Feel")]
        [Tooltip("Vertical stretch when a hand reaches up for the next grip.")]
        [SerializeField] private float stepStretch = 0.1f;
        [Tooltip("Squash when re-grabbing the tower after a fall.")]
        [SerializeField] private float landSquash = 0.2f;
        [SerializeField] private float squashRecovery = 12f;
        [Tooltip("Grip dust puff offset above the hit point.")]
        [SerializeField] private float gripHeight = 1.2f;

        [Header("Boost")]
        [SerializeField] private float boostSpeed = 12f;

        private ClimberState _state = ClimberState.Hanging;
        private bool _inputEnabled;

        private float _stepFromY;
        private float _stepToY;
        private float _stepTimer;
        private float _lastStepStart = -10f;
        private float _settleTimer;
        private bool _stepQueued;

        private int _lane;
        private float _laneVelocity;

        private float _velocityY;
        private float _fallTargetY;
        private float _stunTimer;
        private float _pendingKnockbackMeters;
        private float _invulnerableTimer;
        private float _boostTimer;
        private float _ceilingY = float.PositiveInfinity;

        private Vector3 _joltOffset;
        private int _currentAnim;
        private float _squash; // > 0 stretch, < 0 squash.

        /// <summary>Raised when a hazard connects and costs a heart.</summary>
        public event Action Damaged;

        /// <summary>Raised when the climber re-grabs the tower after a fall.</summary>
        public event Action Landed;

        /// <summary>Raised when a power boost (Super Saiyan rush) starts and when it ends or is interrupted.</summary>
        public event Action BoostStarted;
        public event Action BoostEnded;

        public ClimberState State => _state;
        public float CurrentMeters => Mathf.Max(0f, WorldScale.ToMeters(transform.position.y));
        public float VerticalSpeed => _state == ClimberState.Falling || _state == ClimberState.Lost ? _velocityY : 0f;
        public bool IsBoosting => _state == ClimberState.Boosting;
        public Vector3 HitPoint => body.bounds.center;
        public int LaneCount => laneCount;

        public bool CanBeHit =>
            _invulnerableTimer <= 0f && (_state == ClimberState.Hanging || _state == ClimberState.Climbing);

        private void Awake()
        {
            _lane = laneCount / 2;
            boostAura.enabled = false;
        }

        public float GetLaneX(int lane) => (lane - (laneCount - 1) * 0.5f) * laneSpacing;

        public void SetInputEnabled(bool value) => _inputEnabled = value;

        public void SetCeiling(float worldY) => _ceilingY = worldY;

        public bool Overlaps(Vector3 point, float radius) =>
            ((Vector2)(point - HitPoint)).sqrMagnitude < (radius + hitRadius) * (radius + hitRadius); // Depth ignored: lanes share a plane.

        /// <summary>Hazard hit: short stun, costs a heart, then knock-back fall.</summary>
        public void TakeHit(float knockbackMeters, Vector3 from)
        {
            if (!CanBeHit)
                return;

            Stun(0.35f, knockbackMeters);
            Jolt((HitPoint - from).normalized);
            vfx.Impact(HitPoint, 1f);
            GameAudio.Play(Sfx.Hit, 1f, 0.1f);
            Damaged?.Invoke();
        }

        /// <summary>Open-ended stun used by the webhook glove barrage; end it with <see cref="ReleaseStun"/>.</summary>
        public void BeginStun()
        {
            if (_state == ClimberState.Won || _state == ClimberState.Lost)
                return;
            Stun(float.PositiveInfinity, 0f);
        }

        public void ReleaseStun(float knockbackMeters)
        {
            if (_state != ClimberState.Stunned)
                return;
            _pendingKnockbackMeters = knockbackMeters;
            _stunTimer = 0f;
        }

        /// <summary>Brief immunity (with blink) after being released by a monster.</summary>
        public void GrantInvulnerability(float seconds) => _invulnerableTimer = Mathf.Max(_invulnerableTimer, seconds);

        /// <summary>Moves the climber while something else holds it (monster drag). Clamped to the tower base.</summary>
        public void DragTo(float worldY) => SetY(Mathf.Max(minY, worldY));

        /// <summary>Visual shove, e.g. from a glove impact.</summary>
        public void Jolt(Vector2 direction)
        {
            _joltOffset += (Vector3)(direction * 0.35f);
            body.flipX = direction.x < 0f;
        }

        public void StartBoost(float duration)
        {
            if (_state != ClimberState.Hanging && _state != ClimberState.Climbing && _state != ClimberState.Boosting)
                return;

            _state = ClimberState.Boosting;
            _boostTimer = duration;
            SetBoosting(true);
            GameAudio.Play(Sfx.Boost);
        }

        public void PlayWin(float standY)
        {
            _state = ClimberState.Won;
            _inputEnabled = false;
            SetBoosting(false);
            _stepFromY = transform.position.y;
            _stepToY = standY;
            _stepTimer = 0f;
        }

        public void PlayLose()
        {
            _state = ClimberState.Lost;
            _inputEnabled = false;
            SetBoosting(false);
            _velocityY = 4f;
            GameAudio.Play(Sfx.Whoosh);
        }

        private void Update()
        {
            float dt = Time.deltaTime;
            if (dt <= 0f)
                return;

            _invulnerableTimer -= dt;

            switch (_state)
            {
                case ClimberState.Hanging:
                case ClimberState.Climbing:
                    UpdateClimbing(dt);
                    UpdateLane(dt);
                    break;
                case ClimberState.Boosting:
                    UpdateBoost(dt);
                    UpdateLane(dt);
                    break;
                case ClimberState.Stunned:
                    UpdateStun(dt);
                    break;
                case ClimberState.Falling:
                    UpdateFall(dt);
                    break;
                case ClimberState.Won:
                    UpdateWin(dt);
                    break;
                case ClimberState.Lost:
                    _velocityY = Mathf.Max(_velocityY - gravity * dt, -maxFallSpeed);
                    transform.position += Vector3.up * (_velocityY * dt);
                    break;
            }

            UpdateVisuals(dt);
        }

        private void UpdateClimbing(float dt)
        {
            if (_inputEnabled && (input.ClimbPressed || (input.ClimbHeld && Time.time - _lastStepStart >= holdCadence)))
            {
                if (_state == ClimberState.Climbing)
                    _stepQueued = true;
                else
                    StartStep();
            }

            if (_state != ClimberState.Climbing)
                return;

            _stepTimer += dt;
            float t = Mathf.Clamp01(_stepTimer / stepDuration);
            SetY(Mathf.Lerp(_stepFromY, _stepToY, Ease.OutCubic(t)));

            if (t < 1f)
                return;

            if (_stepQueued && _inputEnabled)
            {
                StartStep();
                return;
            }

            _settleTimer += dt;
            if (_settleTimer >= settleDelay)
                _state = ClimberState.Hanging;
        }

        private void StartStep()
        {
            _state = ClimberState.Climbing;
            _stepQueued = false;
            _stepTimer = 0f;
            _settleTimer = 0f;
            _lastStepStart = Time.time;
            _stepFromY = transform.position.y;
            _stepToY = Mathf.Min(_stepFromY + stepHeight, _ceilingY);
            GameAudio.Play(Sfx.Grab, 0.35f, 0.15f);
            _squash = stepStretch;
            vfx.Puff(HitPoint + new Vector3(UnityEngine.Random.Range(-0.3f, 0.3f), gripHeight, -0.1f), 0.35f);
        }

        private void UpdateLane(float dt)
        {
            if (_inputEnabled && input.LaneDelta != 0)
            {
                int next = Mathf.Clamp(_lane + input.LaneDelta, 0, laneCount - 1);
                if (next != _lane)
                {
                    _lane = next;
                    GameAudio.Play(Sfx.Whoosh, 0.35f, 0.1f);
                }
            }

            var p = transform.position;
            p.x = Mathf.SmoothDamp(p.x, GetLaneX(_lane), ref _laneVelocity, laneSmoothTime);
            transform.position = p;
        }

        private void UpdateBoost(float dt)
        {
            _boostTimer -= dt;
            SetY(Mathf.Min(transform.position.y + boostSpeed * dt, _ceilingY));
            if (_boostTimer > 0f)
                return;

            SetBoosting(false);
            _invulnerableTimer = 0.5f;
            _state = ClimberState.Hanging;
        }

        private void SetBoosting(bool active)
        {
            if (boostAura.enabled == active)
                return;

            boostAura.enabled = active;
            if (active)
                BoostStarted?.Invoke();
            else
                BoostEnded?.Invoke();
        }

        private void Stun(float duration, float knockbackMeters)
        {
            _state = ClimberState.Stunned;
            _stunTimer = duration;
            _pendingKnockbackMeters = knockbackMeters;
            _stepQueued = false;
            SetBoosting(false);
        }

        private void UpdateStun(float dt)
        {
            _stunTimer -= dt;
            if (_stunTimer > 0f)
                return;

            if (_pendingKnockbackMeters <= 0f)
            {
                _state = ClimberState.Hanging;
                return;
            }

            _state = ClimberState.Falling;
            _velocityY = 3f;
            _fallTargetY = Mathf.Max(0f, transform.position.y - WorldScale.ToUnits(_pendingKnockbackMeters));
            GameAudio.Play(Sfx.Whoosh, 0.8f);
        }

        private void UpdateFall(float dt)
        {
            _velocityY = Mathf.Max(_velocityY - gravity * dt, -maxFallSpeed);
            float y = transform.position.y + _velocityY * dt;
            if (y > _fallTargetY)
            {
                SetY(y);
                return;
            }

            SetY(_fallTargetY);
            _velocityY = 0f;
            _state = ClimberState.Hanging;
            _invulnerableTimer = invulnerableTime;
            _joltOffset = new Vector3(0f, -0.25f, 0f);
            vfx.Puff(HitPoint + Vector3.up * 0.8f, 1.1f);
            _squash = -landSquash;
            GameAudio.Play(Sfx.Grab, 1f);
            Landed?.Invoke();
        }

        private void UpdateWin(float dt)
        {
            _stepTimer += dt;
            float t = Mathf.Clamp01(_stepTimer / 0.6f);
            float hop = Mathf.Abs(Mathf.Sin(_stepTimer * 6f)) * 0.25f * t;
            SetY(Mathf.Lerp(_stepFromY, _stepToY, Ease.OutBack(t)) + hop);
            var p = transform.position;
            p.x = Mathf.Lerp(p.x, 0f, dt * 6f);
            transform.position = p;
        }

        /// <summary>Switches pose clip only on change, so looping clips aren't restarted every frame.</summary>
        private void PlayAnim(int stateHash)
        {
            if (_currentAnim == stateHash)
                return;
            _currentAnim = stateHash;
            animator.Play(stateHash, 0, 0f);
        }

        private void SetY(float y)
        {
            var p = transform.position;
            p.y = y;
            transform.position = p;
        }

        private void UpdateVisuals(float dt)
        {
            _joltOffset = Vector3.Lerp(_joltOffset, Vector3.zero, dt * 10f);

            switch (_state)
            {
                case ClimberState.Hanging:
                case ClimberState.Won:
                    PlayAnim(HangAnim);
                    body.flipX = false;
                    break;
                case ClimberState.Climbing:
                case ClimberState.Boosting:
                    PlayAnim(ClimbAnim);
                    body.flipX = false;
                    break;
                case ClimberState.Stunned:
                    PlayAnim(HitAnim);
                    break;
                case ClimberState.Falling:
                case ClimberState.Lost:
                    PlayAnim(FallAnim);
                    break;
            }

            // Lean into lane changes; the clips own the body's own sway / shake / tumble.
            visual.localPosition = _joltOffset;
            visual.localRotation = Quaternion.Euler(0f, 0f, -_laneVelocity * 4f);

            // Squash & stretch, volume-preserving-ish, springing back to rest.
            _squash = Mathf.Lerp(_squash, 0f, 1f - Mathf.Exp(-squashRecovery * dt));
            visual.localScale = new Vector3(1f - _squash * 0.6f, 1f + _squash, 1f);

            bool blink = _invulnerableTimer > 0f && (_state == ClimberState.Hanging || _state == ClimberState.Climbing);
            var c = body.color;
            c.a = blink && Mathf.Repeat(Time.time * 12f, 1f) < 0.5f ? 0.45f : 1f;
            body.color = c;

            if (boostAura.enabled)
            {
                boostAura.transform.localScale = Vector3.one * (2.2f + Mathf.Sin(Time.time * 30f) * 0.15f);
                boostAura.transform.Rotate(0f, 0f, 360f * dt);
            }
        }
    }
}
