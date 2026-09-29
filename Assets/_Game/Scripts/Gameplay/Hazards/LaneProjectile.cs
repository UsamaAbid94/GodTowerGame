using GodTower.Core;
using GodTower.Data;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using UnityEngine;

namespace GodTower.Gameplay.Hazards
{
    /// <summary>Power-up orbs announced by the blue "gift" banners.</summary>
    public enum PowerUp
    {
        SuperSaiyan,
        Kamehameha
    }

    /// <summary>
    /// Something travelling along a lane of the tower: a hazard described by a <see cref="HazardProfile"/>
    /// (glove, uppercut, race car) or a power-up orb. Pooled by <see cref="HazardSpawner"/>.
    /// A powered-up climber shatters hazards instead of being hit by them.
    /// </summary>
    [RequireComponent(typeof(SpriteRenderer))]
    public class LaneProjectile : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer spriteRenderer;
        [SerializeField] private float powerUpRadius = 0.5f;
        [Tooltip("Seconds to grow from the background to full size (fake depth approach).")]
        [SerializeField] private float approachTime = 0.45f;

        private HazardProfile _hazard; // null = power-up orb
        private PowerUp _powerUp;
        private float _velocityY;
        private float _spin;
        private float _radius;
        private float _knockbackMeters;
        private float _baseScale;
        private float _age;
        private bool _passedClimber;
        private GameObject _trail;

        private HazardSpawner _owner;
        private ClimberController _climber;
        private CameraRig _rig;
        private VfxPool _vfx;
        private ParticleFx _particles;

        public bool IsActive => gameObject.activeSelf;
        public bool IsHazard => IsActive && _hazard != null;

        private void Reset() => spriteRenderer = GetComponent<SpriteRenderer>();

        public void Init(HazardSpawner owner, ClimberController climber, CameraRig rig, VfxPool vfx, ParticleFx particles)
        {
            _owner = owner;
            _climber = climber;
            _rig = rig;
            _vfx = vfx;
            _particles = particles;
        }

        public void LaunchHazard(HazardProfile hazard, Vector3 position, float speed, float knockbackMeters)
        {
            _hazard = hazard;
            _knockbackMeters = knockbackMeters * hazard.knockbackMultiplier;
            _radius = hazard.hitRadius;
            _spin = hazard.spinSpeed * (Random.value > 0.5f ? 1f : -1f);
            _velocityY = (hazard.fromBelow ? 1f : -1f) * speed * hazard.speedMultiplier;

            var sprite = hazard.sprites[Random.Range(0, hazard.sprites.Length)];
            Launch(sprite, position, hazard.scale, SortingOrders.Hazards);

            _trail = _particles.Attach(hazard.trailEffect, transform, hazard.trailOffset, hazard.trailScale,
                SortingOrders.Hazards - 1, worldSpaceTrail: true);
            GameAudio.Play(hazard.launchSfx, 0.7f, 0.1f);
        }

        public void LaunchPowerUp(PowerUp powerUp, Sprite sprite, Vector3 position, float speed)
        {
            _hazard = null;
            _powerUp = powerUp;
            _radius = powerUpRadius;
            _spin = 90f;
            _velocityY = -speed;
            Launch(sprite, position, 1.1f, SortingOrders.Pickups);
            _trail = _particles.Attach(_particles.Library.helperGlow, transform, Vector3.zero, 0.8f, SortingOrders.Pickups - 1);
        }

        /// <summary>Shatters a hazard (powered-up climber, ki blast).</summary>
        public void Blast()
        {
            _particles.Play(_particles.Library.hazardSmash, transform.position, 1.3f);
            _vfx.Impact(transform.position, 1.2f);
            HitStop.Freeze(0.03f);
            _rig.AddTrauma(0.25f);
            GameAudio.Play(Sfx.Punch, 0.8f, 0.2f);
            Despawn();
        }

        private void Launch(Sprite sprite, Vector3 position, float scale, int sortingOrder)
        {
            spriteRenderer.sprite = sprite;
            spriteRenderer.sortingOrder = sortingOrder;
            _baseScale = scale;
            _age = 0f;
            _passedClimber = false;
            transform.SetPositionAndRotation(position, Quaternion.identity);
            transform.localScale = Vector3.one * scale;
            gameObject.SetActive(true);
        }

        private void Update()
        {
            float dt = Time.deltaTime;
            transform.position += Vector3.up * (_velocityY * dt);
            transform.Rotate(0f, 0f, _spin * dt);

            // 2.5D: projectiles fly in out of the depth, growing to full size as they reach the tower plane.
            _age += dt;
            float approach = Mathf.Lerp(0.45f, 1f, Ease.OutCubic(Mathf.Clamp01(_age / approachTime)));
            float pulse = _hazard == null ? Mathf.Sin(Time.time * 10f) * 0.1f : 0f;
            transform.localScale = Vector3.one * ((_baseScale + pulse) * approach);

            float camY = _rig.FocusY;
            float halfView = _rig.ViewSize.y * 0.5f + 3f;
            bool leftView = _velocityY < 0f ? transform.position.y < camY - halfView : transform.position.y > camY + halfView;

            if (_climber.Overlaps(transform.position, _radius))
            {
                if (_hazard != null && _climber.IsBoosting)
                {
                    Blast();
                    return;
                }
                if (TryAffectClimber())
                {
                    Despawn();
                    return;
                }
            }

            if (_hazard != null && !_passedClimber)
                CheckNearMiss();

            if (leftView)
                Despawn();
        }

        /// <summary>The moment a hazard crosses the climber's height in a neighbouring lane, it may count as a dodge.</summary>
        private void CheckNearMiss()
        {
            var climberPoint = _climber.HitPoint;
            float dy = transform.position.y - climberPoint.y;
            if (_velocityY < 0f ? dy > 0f : dy < 0f)
                return;

            _passedClimber = true;
            float dx = Mathf.Abs(transform.position.x - climberPoint.x);
            float spacing = _climber.LaneSpacing;
            if (dx > spacing * 0.5f && dx < spacing * 1.5f)
                _climber.RegisterNearMiss(transform.position);
        }

        private bool TryAffectClimber()
        {
            if (_hazard != null)
            {
                if (!_climber.CanBeHit)
                    return false;

                _climber.TakeHit(_knockbackMeters, transform.position);
                HitStop.Freeze(0.04f + 0.08f * _hazard.impactTrauma);
                _rig.AddTrauma(_hazard.impactTrauma);
                _rig.KickZoom(_hazard.impactZoomKick);
                _particles.Play(_hazard.impactEffect, _climber.HitPoint, _hazard.impactEffectScale);
                _particles.Play(_hazard.impactText, _climber.HitPoint + Vector3.up * 1.2f, 1f, SortingOrders.Warnings);
                GameAudio.Play(_hazard.impactSfx, 1f, 0.1f);
                return true;
            }

            var state = _climber.State;
            if (state != ClimberState.Hanging && state != ClimberState.Climbing && state != ClimberState.Boosting)
                return false;

            _vfx.Sparkles(transform.position, 8, 0.8f);
            _particles.Play(_particles.Library.boostBurst, transform.position, 1.2f);
            _owner.NotifyPowerUpCollected(_powerUp);
            return true;
        }

        private void Despawn()
        {
            ParticleFx.Release(_trail);
            _trail = null;
            gameObject.SetActive(false);
        }
    }
}
