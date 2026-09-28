using System;
using System.Collections;
using System.Collections.Generic;
using GodTower.Data;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using GodTower.UI;
using UnityEngine;
using Random = UnityEngine.Random;

namespace GodTower.Gameplay.Hazards
{
    /// <summary>
    /// Drives the "live gift" waves seen in the reference: a red banner announces an attack
    /// (picked from the level's weighted <see cref="HazardProfile"/>s), warning icons flash over the
    /// threatened lanes (top or bottom edge), the camera pulls back for big threats, then the
    /// projectiles fly down (or up) those lanes. Blue banners announce power-up orbs (Super Saiyan, Kamehameha).
    /// </summary>
    public class HazardSpawner : MonoBehaviour
    {
        private static readonly string[] Viewers =
        {
            "SkyWatcher", "TowerFan99", "CloudKid", "Zenko", "MiraLive", "RoboRyu", "PeakPanda", "NimbusNina"
        };

        [SerializeField] private GameArt art;
        [SerializeField] private ClimberController climber;
        [SerializeField] private CameraRig rig;
        [SerializeField] private VfxPool vfx;
        [SerializeField] private ParticleFx particles;
        [SerializeField] private EventBannerFeed banners;
        [SerializeField] private LaneProjectile projectilePrefab;
        [SerializeField] private SpriteRenderer warningPrefab;

        [Header("Timing")]
        [SerializeField] private float firstWaveDelay = 2.5f;
        [SerializeField] private float powerUpFallSpeed = 4.5f;
        [Tooltip("Share of power-up drops that are a Kamehameha rather than a Super Saiyan rush.")]
        [SerializeField, Range(0f, 1f)] private float kamehamehaChance = 0.4f;
        [Tooltip("Stop spawning when the climber is this close (world units) to the summit.")]
        [SerializeField] private float summitSafeZone = 8f;
        [Tooltip("Distance beyond the screen edge where projectiles appear.")]
        [SerializeField] private float spawnMargin = 2.5f;

        private readonly List<LaneProjectile> _pool = new List<LaneProjectile>();
        private readonly List<SpriteRenderer> _warnings = new List<SpriteRenderer>();
        private readonly List<int> _laneBuffer = new List<int>();

        private LevelConfig _config;
        private float _goalY;
        private float _timer;
        private bool _running;

        /// <summary>Holds new waves (e.g. during a monster ambush); projectiles already in flight carry on.</summary>
        public bool Paused { get; set; }

        /// <summary>Raised when the climber catches a power-up orb.</summary>
        public event Action<PowerUp> PowerUpCollected;

        public void NotifyPowerUpCollected(PowerUp powerUp) => PowerUpCollected?.Invoke(powerUp);

        /// <summary>Shatters every hazard currently in flight (ki blast).</summary>
        public void BlastAll()
        {
            foreach (var projectile in _pool)
                if (projectile.IsHazard)
                    projectile.Blast();
        }

        public void Begin(LevelConfig config, float goalY)
        {
            _config = config;
            _goalY = goalY;
            _timer = firstWaveDelay;
            _running = true;
        }

        public void Stop()
        {
            _running = false;
            StopAllCoroutines();
            rig.ReleaseZoom();
            foreach (var warning in _warnings)
                warning.gameObject.SetActive(false);
        }

        private void Update()
        {
            if (!_running || Paused)
                return;

            // Hold the clock while the climber is recovering so waves never stack on a helpless player.
            var state = climber.State;
            if (state != ClimberState.Hanging && state != ClimberState.Climbing)
                return;

            if (climber.transform.position.y > _goalY - summitSafeZone)
                return;

            _timer -= Time.deltaTime;
            if (_timer > 0f)
                return;

            float progress = Mathf.Clamp01(climber.transform.position.y / _goalY);
            _timer = _config.GetHazardInterval(progress) * Random.Range(0.85f, 1.15f);
            StartCoroutine(RunWave(progress));
        }

        private IEnumerator RunWave(float progress)
        {
            var hazard = _config.PickHazard();

            int laneCount = climber.LaneCount;
            _laneBuffer.Clear();
            for (int i = 0; i < laneCount; i++)
                _laneBuffer.Add(i);
            Shuffle(_laneBuffer);

            // Always leave at least one lane open.
            int cap = Mathf.Min(_config.maxHazardsPerWave, hazard.maxPerWave);
            int count = Mathf.Clamp(Random.Range(1, cap + 1), 1, laneCount - 1);
            bool spawnPowerUp = Random.value < _config.helperChance;
            var powerUp = Random.value < kamehamehaChance ? PowerUp.Kamehameha : PowerUp.SuperSaiyan;

            banners.Push(BannerSide.Right, RandomViewer(), $"{hazard.giftName} x{count}");
            if (spawnPowerUp)
                banners.Push(BannerSide.Left, RandomViewer(), powerUp == PowerUp.Kamehameha ? "Kamehameha x1" : "Super Saiyan x1");

            float speed = _config.hazardFallSpeed * hazard.speedMultiplier;
            if (hazard.zoomOut > 0f)
            {
                float flightTime = (rig.ViewSize.y + hazard.zoomOut * 2f + spawnMargin * 2f) / speed;
                rig.HoldZoom(hazard.zoomOut, hazard.warningDuration + flightTime);
            }

            GameAudio.Play(Sfx.Warning, 0.6f);
            yield return ShowWarnings(count, hazard);

            float halfView = rig.ViewSize.y * 0.5f;
            float camY = rig.FocusY;
            float edgeY = hazard.fromBelow ? camY - halfView - spawnMargin : camY + halfView + spawnMargin;
            float stagger = hazard.fromBelow ? -0.8f : 0.8f;
            for (int i = 0; i < count; i++)
            {
                var position = new Vector3(climber.GetLaneX(_laneBuffer[i]), edgeY + i * stagger, LaneZ);
                Acquire().LaunchHazard(hazard, position, _config.hazardFallSpeed * Random.Range(0.9f, 1.1f), _config.knockbackMeters);
            }

            if (spawnPowerUp)
            {
                var position = new Vector3(climber.GetLaneX(_laneBuffer[laneCount - 1]), camY + halfView + 2f, LaneZ);
                var sprite = powerUp == PowerUp.Kamehameha ? art.energyFlash : art.impactStar;
                Acquire().LaunchPowerUp(powerUp, sprite, position, powerUpFallSpeed);
            }
        }

        private IEnumerator ShowWarnings(int count, HazardProfile hazard)
        {
            while (_warnings.Count < count)
            {
                var w = Instantiate(warningPrefab, transform);
                w.sortingOrder = SortingOrders.Warnings;
                _warnings.Add(w);
            }

            for (int i = 0; i < count; i++)
                _warnings[i].gameObject.SetActive(true);

            for (float t = 0f; t < hazard.warningDuration; t += Time.deltaTime)
            {
                float halfView = rig.ViewSize.y * 0.5f - 1.6f;
                float y = rig.FocusY + (hazard.fromBelow ? -halfView : halfView);
                float pulse = 0.9f + Mathf.PingPong(t * 6f, 0.3f);
                for (int i = 0; i < count; i++)
                {
                    var w = _warnings[i];
                    w.transform.position = new Vector3(climber.GetLaneX(_laneBuffer[i]), y, LaneZ - 0.2f);
                    w.transform.localScale = Vector3.one * pulse;
                    w.color = Mathf.Repeat(t * 5f, 1f) < 0.7f ? Color.white : new Color(1f, 1f, 1f, 0.3f);
                }
                yield return null;
            }

            for (int i = 0; i < count; i++)
                _warnings[i].gameObject.SetActive(false);
        }

        private LaneProjectile Acquire()
        {
            foreach (var item in _pool)
                if (!item.IsActive)
                    return item;

            var created = Instantiate(projectilePrefab, transform);
            created.gameObject.SetActive(false);
            created.Init(this, climber, rig, vfx, particles);
            _pool.Add(created);
            return created;
        }

        /// <summary>Depth of the lanes: just in front of the climber, on the tower face.</summary>
        private float LaneZ => climber.transform.position.z - 0.15f;

        private static string RandomViewer() => Viewers[Random.Range(0, Viewers.Length)];

        private static void Shuffle(List<int> list)
        {
            for (int i = list.Count - 1; i > 0; i--)
            {
                int j = Random.Range(0, i + 1);
                (list[i], list[j]) = (list[j], list[i]);
            }
        }
    }
}
