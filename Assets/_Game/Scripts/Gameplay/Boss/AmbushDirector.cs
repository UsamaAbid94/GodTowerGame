using System.Collections;
using System.Collections.Generic;
using System.Linq;
using GodTower.Core;
using GodTower.Data;
using GodTower.Gameplay.Hazards;
using GodTower.Gameplay.Powers;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using GodTower.UI;
using UnityEngine;

namespace GodTower.Gameplay.Boss
{
    /// <summary>
    /// Scripted monster ambushes (the reference's "Dragon" gift). When the climber passes a level's
    /// progress mark:
    ///  1. Announce – red gift banner, thunder; regular hazard waves pause.
    ///  2. Reveal  – the camera pans up the tower to the monsters circling it, who roar and breathe fire.
    ///  3. Return  – the camera glides back to the climber as the monsters dive down after it.
    ///  4. Grab    – they seize the climber and drag them down the tower (camera pulls far out);
    ///               tapping fast breaks free sooner.
    ///  5. Escape  – they fly off; the climber gets brief invulnerability and play resumes.
    /// A Super Saiyan rush or a Kamehameha during the reveal/dive repels them before they grab.
    /// </summary>
    public class AmbushDirector : MonoBehaviour
    {
        [SerializeField] private ClimberController climber;
        [SerializeField] private ClimberInput input;
        [SerializeField] private CameraRig rig;
        [SerializeField] private HazardSpawner hazards;
        [SerializeField] private KiBlast kiBlast;
        [SerializeField] private ParticleFx particles;
        [SerializeField] private EventBannerFeed banners;
        [SerializeField] private CenterMessage centerMessage;

        [Header("Staging")]
        [Tooltip("How far above the climber the monsters are revealed.")]
        [SerializeField] private float revealHeight = 11f;
        [SerializeField] private float revealZoom = 2.5f;
        [SerializeField] private float grabZoom = 5f;
        [SerializeField] private float orbitSpeed = 2.4f;
        [SerializeField] private float descendTime = 1.6f;
        [SerializeField] private float roarHold = 1f;
        [SerializeField] private float diveTime = 1.3f;
        [Tooltip("Horizontal distance of each monster from the climber while holding them.")]
        [SerializeField] private float grabSpread = 1.4f;

        [Header("Struggle")]
        [SerializeField] private float dragDuration = 2.6f;
        [SerializeField] private float maxGrabTime = 3.2f;
        [Tooltip("Each tap cancels this fraction of the total drag.")]
        [SerializeField, Range(0f, 0.5f)] private float tapBreakFraction = 0.09f;
        [SerializeField] private float strikeInterval = 0.6f;
        [SerializeField] private float releaseInvulnerability = 2f;

        private readonly List<MonsterActor> _actors = new List<MonsterActor>();
        private readonly List<MonsterProfile> _profiles = new List<MonsterProfile>();
        private readonly List<float> _angles = new List<float>();
        private readonly List<GameObject> _loops = new List<GameObject>();

        private LevelConfig _config;
        private float _goalY;
        private int _next;
        private bool _running;
        private bool _holdingClimber;
        private Coroutine _routine;

        /// <summary>True from the announcement until the monsters have left.</summary>
        public bool IsActive { get; private set; }

        public void Begin(LevelConfig config, float goalY)
        {
            _config = config;
            _goalY = goalY;
            _next = 0;
            _running = true;
        }

        public void Stop()
        {
            _running = false;
            if (_routine != null)
                StopCoroutine(_routine);
            Finish();
        }

        private void Update()
        {
            if (!_running || IsActive || _config.ambushes == null || _next >= _config.ambushes.Length)
                return;

            var state = climber.State;
            if (state != ClimberState.Hanging && state != ClimberState.Climbing)
                return;

            float progress = climber.transform.position.y / _goalY;
            if (progress >= _config.ambushes[_next].atProgress)
                _routine = StartCoroutine(Run(_config.ambushes[_next++]));
        }

        private IEnumerator Run(MonsterAmbush ambush)
        {
            IsActive = true;
            hazards.Paused = true;

            // 1. Announce.
            foreach (var group in ambush.monsters.GroupBy(m => m.displayName))
                banners.Push(BannerSide.Right, "???", $"{group.Key} x{group.Count()}");
            GameAudio.Play(Sfx.Thunder);
            GameAudio.Play(Sfx.Warning, 0.8f);
            rig.AddTrauma(0.3f);

            float lairY = climber.transform.position.y + revealHeight;
            Spawn(ambush.monsters, lairY + 8f);
            climber.SetInputEnabled(false); // The climber is off-screen during the reveal.

            // 2. Reveal: pan up to the lair while they spiral down around the tower, then roar.
            rig.FocusOn(lairY - 1f);
            rig.HoldZoom(revealZoom, descendTime + roarHold + diveTime);
            yield return Orbit(lairY + 8f, lairY, descendTime);
            if (!Repelling)
            {
                Roar();
                yield return Orbit(lairY, lairY, roarHold);
            }

            // 3. Return to the climber; the monsters dive after the camera.
            rig.ClearFocus();
            climber.SetInputEnabled(true);
            for (float t = 0f; t < diveTime && !Repelling; t += Time.deltaTime)
            {
                float k = Ease.InQuad(t / diveTime);
                PlaceOrbiting(Mathf.Lerp(lairY, climber.HitPoint.y, k), Mathf.Lerp(1f, 0.6f, k));
                yield return null;
            }

            if (Repelling)
            {
                yield return Repel();
                Finish();
                yield break;
            }

            // 4. Grab and drag.
            yield return Grab(ambush.dragMeters);

            // 5. Escape.
            yield return FlyAway(false);
            Finish();
        }

        private void Spawn(MonsterProfile[] monsters, float y)
        {
            for (int i = 0; i < monsters.Length; i++)
            {
                var profile = monsters[i];
                var actor = MonsterActor.Spawn(profile.prefab, new Vector3(0f, y, 0f), profile.scale, profile.artFacesRight, transform);
                actor.Play(MonsterAnim.Move);
                _actors.Add(actor);
                _profiles.Add(profile);
                _angles.Add(i * Mathf.PI + Random.Range(-0.3f, 0.3f));
            }
        }

        /// <summary>A Super Saiyan rush or a Kamehameha drives the monsters off before they grab.</summary>
        private bool Repelling => climber.IsBoosting || kiBlast.IsFiring;

        /// <summary>Monsters circle the tower between two heights, passing behind it on the far side.</summary>
        private IEnumerator Orbit(float fromY, float toY, float duration)
        {
            for (float t = 0f; t < duration && !Repelling; t += Time.deltaTime)
            {
                PlaceOrbiting(Mathf.Lerp(fromY, toY, Ease.OutCubic(t / duration)), 1f);
                yield return null;
            }
        }

        private void PlaceOrbiting(float centerY, float radiusScale)
        {
            for (int i = 0; i < _actors.Count; i++)
            {
                _angles[i] += orbitSpeed * Time.deltaTime;
                float angle = _angles[i];
                var profile = _profiles[i];
                float radius = profile.orbitRadius * radiusScale;

                // Real 3D orbit around the tower axis: the near side passes in front, the far side is hidden by the tower.
                var center = new Vector3(Mathf.Sin(angle) * radius, centerY + i * 0.9f + Mathf.Sin(Time.time * 3f + i) * 0.25f,
                    -Mathf.Cos(angle) * radius);
                var actor = _actors[i];
                actor.Face(Mathf.Cos(angle)); // Direction of travel around the tower.
                actor.transform.position = center - (Vector3)(profile.centerOffset * profile.scale);
                actor.SetSortingOrder(Mathf.Cos(angle) > 0f ? SortingOrders.Climber + 3 : SortingOrders.Tower - 3);
            }
        }

        private void Roar()
        {
            for (int i = 0; i < _actors.Count; i++)
            {
                _actors[i].Play(MonsterAnim.SpecialAttack);
                particles.Play(_profiles[i].attackEffect, AttackPoint(i), 1.4f);
            }
            rig.AddTrauma(0.6f);
            rig.KickZoom(1f);
            GameAudio.Play(Sfx.Thunder);
        }

        private IEnumerator Grab(int dragMeters)
        {
            climber.BeginStun();
            _holdingClimber = true;
            HitStop.Freeze(0.1f);
            rig.HoldZoom(grabZoom, maxGrabTime + 1f);
            GameAudio.Play(Sfx.Hit);

            foreach (var profile in _profiles.Distinct())
                _loops.Add(particles.Attach(profile.grabEffect, climber.transform,
                    climber.HitPoint - climber.transform.position, 1.2f, SortingOrders.Climber + 4));
            StartCoroutine(centerMessage.Show("BREAK FREE!", "Tap fast!", new Color(1f, 0.35f, 0.25f), 0.9f));

            float remaining = dragMeters;
            float speed = dragMeters / dragDuration;
            float nextStrike = 0f;

            for (float t = 0f; remaining > 0f && t < maxGrabTime && climber.State == ClimberState.Stunned; t += Time.deltaTime)
            {
                float step = speed * Time.deltaTime;
                remaining -= step;
                climber.DragTo(climber.transform.position.y - WorldScale.ToUnits(step));

                if (input.ClimbPressed)
                {
                    remaining -= dragMeters * tapBreakFraction;
                    climber.Jolt(Vector2.up);
                    rig.AddTrauma(0.15f);
                    GameAudio.Play(Sfx.Grab, 0.8f, 0.2f);
                }

                HoldPose();
                if (t >= nextStrike)
                {
                    nextStrike = t + strikeInterval;
                    Strike();
                }
                yield return null;
            }

            ReleaseClimber();
            GameAudio.Play(Sfx.Boost, 0.7f);
        }

        /// <summary>Monsters clamp the climber from either side, facing in.</summary>
        private void HoldPose()
        {
            var hit = climber.HitPoint;
            for (int i = 0; i < _actors.Count; i++)
            {
                float side = i % 2 == 0 ? -1f : 1f;
                var profile = _profiles[i];
                var center = hit + new Vector3(side * grabSpread, 0.4f + Mathf.Sin(Time.time * 8f + i) * 0.1f, -0.3f);
                var actor = _actors[i];
                actor.Face(-side);
                actor.transform.position = center - (Vector3)(profile.centerOffset * profile.scale);
                actor.SetSortingOrder(SortingOrders.Climber + 3);
            }
        }

        private void Strike()
        {
            for (int i = 0; i < _actors.Count; i++)
            {
                _actors[i].Play(i % 2 == 0 ? MonsterAnim.Attack : MonsterAnim.SpecialAttack);
                particles.Play(_profiles[i].attackEffect, climber.HitPoint, 1f);
            }
            climber.Jolt(Vector2.down);
            rig.AddTrauma(0.25f);
            GameAudio.Play(Sfx.Punch, 0.8f, 0.15f);
        }

        private IEnumerator Repel()
        {
            GameAudio.Play(Sfx.Thunder);
            rig.AddTrauma(0.7f);
            for (int i = 0; i < _actors.Count; i++)
            {
                var center = ActorCenter(i);
                particles.Play(particles.Library.kiBlast, center, 1.6f);
                particles.Play(particles.Library.barrageFinisherText, center + Vector3.up, 1.2f, SortingOrders.Warnings);
            }
            yield return FlyAway(true);
        }

        private IEnumerator FlyAway(bool stunned)
        {
            foreach (var actor in _actors)
                actor.Play(stunned ? MonsterAnim.Stunned : MonsterAnim.Move);

            var starts = _actors.Select(a => a.transform.position).ToArray();
            const float duration = 1.4f;
            for (float t = 0f; t < duration; t += Time.deltaTime)
            {
                float k = Ease.InQuad(t / duration);
                for (int i = 0; i < _actors.Count; i++)
                {
                    float side = i % 2 == 0 ? -1f : 1f;
                    _actors[i].Face(side);
                    _actors[i].transform.position = starts[i] + new Vector3(side * 7f * k, 14f * k, 0f);
                }
                yield return null;
            }
        }

        private Vector3 ActorCenter(int i) =>
            _actors[i].transform.position + (Vector3)(_profiles[i].centerOffset * _profiles[i].scale);

        private Vector3 AttackPoint(int i)
        {
            var offset = _profiles[i].attackPoint * _profiles[i].scale;
            if (!_actors[i].FacingRight)
                offset.x = -offset.x;
            return _actors[i].transform.position + (Vector3)offset;
        }

        private void ReleaseClimber()
        {
            if (!_holdingClimber)
                return;

            _holdingClimber = false;
            if (climber.State == ClimberState.Stunned)
                climber.ReleaseStun(0f);
            climber.GrantInvulnerability(releaseInvulnerability);

            foreach (var loop in _loops)
                ParticleFx.Release(loop);
            _loops.Clear();
        }

        private void Finish()
        {
            ReleaseClimber();
            foreach (var actor in _actors)
                if (actor != null)
                    Destroy(actor.gameObject);
            _actors.Clear();
            _profiles.Clear();
            _angles.Clear();

            rig.ClearFocus();
            hazards.Paused = false;
            IsActive = false;
            _routine = null;
        }
    }
}
