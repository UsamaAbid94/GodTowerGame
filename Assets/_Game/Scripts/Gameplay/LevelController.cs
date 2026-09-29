using System.Collections;
using GodTower.Core;
using GodTower.Data;
using GodTower.Gameplay.Boss;
using GodTower.Gameplay.Environment;
using GodTower.Gameplay.Hazards;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using GodTower.UI;
using GodTower.Webhook;
using UnityEngine;
using UnityEngine.InputSystem;

namespace GodTower.Gameplay
{
    /// <summary>
    /// Owns one level run: builds the stage from the selected <see cref="LevelConfig"/>,
    /// runs the intro countdown, tracks hearts and height, and resolves win / lose / pause.
    /// </summary>
    public class LevelController : MonoBehaviour
    {
        private enum Phase
        {
            Intro,
            Playing,
            Paused,
            Won,
            Lost
        }

        [SerializeField] private LevelDatabase database;
        [SerializeField] private ClimberController climber;
        [SerializeField] private TowerBuilder tower;
        [SerializeField] private HazardSpawner hazards;
        [SerializeField] private AmbushDirector ambushes;
        [SerializeField] private CameraRig cameraRig;
        [SerializeField] private SkyBackground sky;
        [SerializeField] private CloudField clouds;
        [SerializeField] private VfxPool vfx;
        [SerializeField] private ParticleFx particles;

        [Header("UI")]
        [SerializeField] private HudView hud;
        [SerializeField] private CenterMessage centerMessage;
        [SerializeField] private PauseMenu pauseMenu;
        [SerializeField] private ResultPanel resultPanel;

        [Header("Rules")]
        [SerializeField, Min(1)] private int maxHearts = 5;
        [SerializeField] private float climberStartY = 0.6f;

        [Header("Camera")]
        [Tooltip("Extra view size at the start of the intro; the camera flies in to gameplay framing during the countdown.")]
        [SerializeField] private float introZoomOut = 10f;
        [SerializeField] private float introZoomDuration = 2.2f;
        [SerializeField] private float victoryZoomOut = 4f;
        [Tooltip("Scale of the level's ambient particle effect, which follows the camera.")]
        [SerializeField] private float ambientScale = 2.5f;
        [Tooltip("Distance in front of the camera where the ambient effect (rain, stars...) is placed.")]
        [SerializeField] private float ambientDistance = 10f;

        [Header("Celebration")]
        [SerializeField, Min(1)] private int celebrationFireworks = 10;
        [SerializeField] private float fireworkInterval = 0.22f;
        [SerializeField, Min(1)] private int confettiPerCannon = 70;
        [Tooltip("Seconds of confetti falling from the top of the view, which carries on behind the result panel.")]
        [SerializeField] private float confettiRainDuration = 4f;
        [Tooltip("Minimum seconds between two \"ON FIRE!\" call-outs for maxed climbing momentum.")]
        [SerializeField] private float onFireCooldown = 8f;

        private LevelConfig _config;
        private int _levelIndex;
        private float _goalY;
        private int _hearts;
        private int _nextMilestone = 1;
        private float _lastOnFire = -100f;
        private Phase _phase = Phase.Intro;

        /// <summary>True from the end of the intro until the level resolves (including while paused).</summary>
        public bool IsInLevel => _phase == Phase.Playing || _phase == Phase.Paused;

        private void Awake()
        {
            _levelIndex = Mathf.Clamp(GameProgress.SelectedLevel, 0, database.Count - 1);
            _config = database.Get(_levelIndex);
            _goalY = WorldScale.ToUnits(_config.goalMeters);
            _hearts = maxHearts;
        }

        private void OnEnable()
        {
            climber.Damaged += OnClimberDamaged;
            climber.Landed += OnClimberLanded;
            climber.MomentumMaxed += OnMomentumMaxed;
            hud.PauseButton.onClick.AddListener(Pause);
            pauseMenu.ResumeRequested += Resume;
            pauseMenu.RetryRequested += Retry;
            pauseMenu.HomeRequested += SceneFlow.LoadMainMenu;
            resultPanel.NextRequested += NextLevel;
            resultPanel.RetryRequested += Retry;
            resultPanel.HomeRequested += SceneFlow.LoadMainMenu;
            resultPanel.StarRevealed += OnStarRevealed;
        }

        private void OnDisable()
        {
            BumpServer.AcceptingBumps = false;
            climber.Damaged -= OnClimberDamaged;
            climber.Landed -= OnClimberLanded;
            climber.MomentumMaxed -= OnMomentumMaxed;
            hud.PauseButton.onClick.RemoveListener(Pause);
            pauseMenu.ResumeRequested -= Resume;
            pauseMenu.RetryRequested -= Retry;
            pauseMenu.HomeRequested -= SceneFlow.LoadMainMenu;
            resultPanel.NextRequested -= NextLevel;
            resultPanel.RetryRequested -= Retry;
            resultPanel.HomeRequested -= SceneFlow.LoadMainMenu;
            resultPanel.StarRevealed -= OnStarRevealed;
        }

        private void Start()
        {
            tower.Build(_goalY, _config.towerTint);
            climber.transform.position = new Vector3(climber.GetLaneX(climber.LaneCount / 2), climberStartY, tower.FrontZ);
            climber.SetCeiling(_goalY);
            climber.SetInputEnabled(false);

            // Open wide on the tower, then fly in to gameplay framing during the countdown.
            cameraRig.ZoomBias = introZoomOut;
            cameraRig.SnapToTarget();
            sky.Apply(_config, _goalY);
            clouds.Apply(_config);
            particles.Attach(_config.ambientEffect, cameraRig.transform, new Vector3(0f, 0f, ambientDistance),
                ambientScale, SortingOrders.NearClouds);
            hud.Bind($"Level {_levelIndex + 1} - {_config.displayName}", _config.goalMeters, _hearts);

            StartCoroutine(Intro());
        }

        private IEnumerator Intro()
        {
            StartCoroutine(EaseZoomBias(0f, introZoomDuration));
            yield return centerMessage.Show($"LEVEL {_levelIndex + 1}", _config.displayName, Color.white, 0.9f);

            for (int i = 3; i >= 1; i--)
            {
                GameAudio.Play(Sfx.Countdown);
                yield return centerMessage.Show(i.ToString(), _levelIndex == 0 ? "Tap fast to climb faster - Swipe to dodge" : null, Color.white, 0.35f);
            }

            GameAudio.Play(Sfx.Go);
            particles.Play(particles.Library.powerUpBurst, climber.HitPoint, 1.2f);
            StartCoroutine(centerMessage.Show("GO!", null, new Color(1f, 0.85f, 0.2f), 0.3f));
            SetPhase(Phase.Playing);
            climber.SetInputEnabled(true);
            hazards.Begin(_config, _goalY);
            ambushes.Begin(_config, _goalY);
        }

        private void Update()
        {
            var keyboard = Keyboard.current;
            if (keyboard != null && keyboard.escapeKey.wasPressedThisFrame)
            {
                if (_phase == Phase.Playing) Pause();
                else if (_phase == Phase.Paused) Resume();
            }

            if (_phase == Phase.Playing)
                CheckMilestone();

            if (_phase == Phase.Playing && climber.CurrentMeters >= _config.goalMeters - 0.5f)
                Win();
        }

        private void OnApplicationPause(bool paused)
        {
            if (paused && _phase == Phase.Playing)
                Pause();
        }

        private void OnClimberDamaged()
        {
            if (_phase != Phase.Playing)
                return;

            _hearts--;
            hud.SetHearts(_hearts);
            hud.FlashDamage();
            particles.Play(particles.Library.heartLost, climber.HitPoint + Vector3.up * 1.6f, 1.2f, SortingOrders.Warnings);
            if (_hearts <= 0)
                Lose();
        }

        /// <summary>Celebrates each quarter of the climb: light burst, sparkles, chime and a punch on the height counter.</summary>
        private void CheckMilestone()
        {
            const int quarters = 4;
            if (_nextMilestone >= quarters || climber.CurrentMeters < _config.goalMeters * _nextMilestone / (float)quarters)
                return;

            int percent = _nextMilestone * 100 / quarters;
            _nextMilestone++;
            particles.Play(particles.Library.boostBurst, climber.HitPoint, 1.6f);
            vfx.Sparkles(climber.HitPoint, 12, 1.3f);
            hud.PunchHeight();
            GameAudio.Play(Sfx.Go, 0.7f);
            StartCoroutine(centerMessage.Show($"{percent}%", null, new Color(1f, 0.85f, 0.25f), 0.35f));
        }

        private void OnClimberLanded() =>
            particles.Play(particles.Library.landPoof, climber.HitPoint + Vector3.up * 1.2f);

        /// <summary>Full climbing momentum: a light burst every time, an "ON FIRE!" call-out now and then.</summary>
        private void OnMomentumMaxed()
        {
            if (_phase != Phase.Playing)
                return;

            particles.Play(particles.Library.boostBurst, climber.HitPoint, 1.3f);
            cameraRig.KickZoom(0.6f);
            GameAudio.Play(Sfx.Go, 0.5f, 0.05f);
            if (Time.time - _lastOnFire < onFireCooldown)
                return;

            _lastOnFire = Time.time;
            hud.PunchHeight();
            StartCoroutine(centerMessage.Show("ON FIRE!", null, new Color(1f, 0.55f, 0.15f), 0.3f));
        }

        private void Win()
        {
            SetPhase(Phase.Won);
            hazards.Stop();
            ambushes.Stop();
            climber.PlayWin(tower.SummitY);
            GameAudio.Play(Sfx.Win);

            int heartsLost = maxHearts - _hearts;
            int stars = heartsLost == 0 ? 3 : heartsLost <= 2 ? 2 : 1;
            GameProgress.RecordWin(_levelIndex, stars);
            StartCoroutine(Celebrate(stars));
        }

        /// <summary>
        /// Summit celebration: a freeze-frame punch with flash and shockwave, then the camera pulls back on sun rays,
        /// confetti cannons from both bottom corners, a firework show, and confetti that keeps raining behind the result panel.
        /// </summary>
        private IEnumerator Celebrate(int stars)
        {
            var library = particles.Library;
            var center = climber.HitPoint;

            // 1. Impact: the moment of arrival lands like a hit.
            HitStop.Freeze(0.12f);
            cameraRig.AddTrauma(0.65f);
            cameraRig.KickZoom(-1.5f);
            particles.Play(library.summitFlash, center, 1.5f, SortingOrders.Warnings - 1);
            particles.Play(library.summitShockwave, center, 1.8f);
            particles.Play(library.powerUpBurst, center, 2f);
            vfx.Sparkles(center, 16, 1.5f);
            hud.PunchHeight();
            GameAudio.Play(Sfx.Punch, 0.8f);
            yield return new WaitForSeconds(0.2f);

            // 2. Pull back to reveal the party.
            StartCoroutine(EaseZoomBias(victoryZoomOut, 1.2f));
            var rays = particles.Attach(library.summitRays, climber.transform,
                climber.HitPoint - climber.transform.position, 2.2f, SortingOrders.Climber - 3);
            var sparkRain = particles.Attach(library.sparkRain, cameraRig.transform, new Vector3(0f, 0f, ambientDistance),
                ambientScale, SortingOrders.NearClouds);
            particles.Play(library.winText, center + Vector3.up * 2.5f, 1.6f, SortingOrders.Warnings);
            FireConfettiCannons();
            GameAudio.Play(Sfx.Firework, 0.8f);

            // 3. Firework show, alternating sides of the tower: rockets from below and bursts in the sky.
            float halfWidth = cameraRig.ViewSize.x * 0.5f;
            for (int i = 0; i < celebrationFireworks; i++)
            {
                float side = i % 2 == 0 ? -1f : 1f;
                var burst = new Vector3(side * Random.Range(1.2f, Mathf.Max(1.5f, halfWidth * 0.8f)),
                    climber.transform.position.y + Random.Range(2f, 6f), ConfettiZ);
                if (i % 3 == 2)
                {
                    particles.Play(library.fireworkRocket, burst + Vector3.down * 5f, 1.3f);
                }
                else
                {
                    particles.Play(library.winFireworks, burst, Random.Range(1.1f, 1.6f));
                    vfx.Sparkles(burst, 10, 1.2f);
                    vfx.Confetti(burst, Vector2.up, 360f, 14, 9f);
                }
                cameraRig.AddTrauma(0.15f);
                GameAudio.Play(Sfx.Firework, 0.55f, 0.2f);
                yield return new WaitForSeconds(fireworkInterval);
            }

            // 4. Results, with confetti still raining behind the panel.
            StartCoroutine(ConfettiRain(confettiRainDuration));
            yield return new WaitForSeconds(0.2f);
            resultPanel.ShowWin(stars, _config.goalMeters, !database.IsLast(_levelIndex));

            yield return new WaitForSeconds(confettiRainDuration);
            ParticleFx.Release(rays);
            ParticleFx.Release(sparkRain);
        }

        /// <summary>Two party poppers from the bottom corners of the view, aimed up and in towards the climber.</summary>
        private void FireConfettiCannons()
        {
            var view = cameraRig.ViewSize * 0.5f;
            float bottom = cameraRig.FocusY - view.y * 0.85f;
            for (int side = -1; side <= 1; side += 2)
            {
                var origin = new Vector3(side * view.x * 0.95f, bottom, ConfettiZ);
                vfx.Confetti(origin, new Vector2(-side * 0.45f, 1f), 40f, confettiPerCannon, 30f);
                vfx.Sparkles(origin, 8, 1.2f);
            }
        }

        private IEnumerator ConfettiRain(float duration)
        {
            for (float t = 0f; t < duration; t += 0.12f)
            {
                var view = cameraRig.ViewSize * 0.5f;
                var top = new Vector3(Random.Range(-view.x, view.x), cameraRig.FocusY + view.y + 0.5f, ConfettiZ);
                vfx.Confetti(top, Vector2.down, 60f, 4, 2f, 6f);
                yield return new WaitForSeconds(0.12f);
            }
        }

        /// <summary>Each star popping on the result panel bursts confetti and a firework roughly behind it.</summary>
        private void OnStarRevealed(int index)
        {
            var view = cameraRig.ViewSize * 0.5f;
            var at = new Vector3((index - 1) * view.x * 0.35f, cameraRig.FocusY + view.y * 0.4f, ConfettiZ);
            particles.Play(particles.Library.winFireworks, at, 1.2f + index * 0.2f);
            vfx.Confetti(at, Vector2.up, 360f, 24 + index * 12, 12f);
            cameraRig.AddTrauma(0.2f + index * 0.1f);
            GameAudio.Play(Sfx.Firework, 0.6f, 0.1f);
        }

        /// <summary>Confetti sits just in front of the climber, so the tower never hides it.</summary>
        private float ConfettiZ => climber.transform.position.z - 0.6f;

        private void Lose()
        {
            SetPhase(Phase.Lost);
            hazards.Stop();
            ambushes.Stop();
            climber.PlayLose();
            GameAudio.Play(Sfx.Lose);
            StartCoroutine(ShowLoseAfterDelay(Mathf.FloorToInt(climber.CurrentMeters)));
        }

        private IEnumerator ShowLoseAfterDelay(int meters)
        {
            yield return new WaitForSeconds(1.4f);
            resultPanel.ShowLose(meters);
        }

        private void Pause()
        {
            if (_phase != Phase.Playing)
                return;

            SetPhase(Phase.Paused);
            Time.timeScale = 0f;
            AudioListener.pause = true;
            pauseMenu.Open();
        }

        private void Resume()
        {
            if (_phase != Phase.Paused)
                return;

            pauseMenu.Close();
            Time.timeScale = 1f;
            AudioListener.pause = false;
            SetPhase(Phase.Playing);
        }

        private IEnumerator EaseZoomBias(float target, float duration)
        {
            float start = cameraRig.ZoomBias;
            for (float t = 0f; t < duration; t += Time.deltaTime)
            {
                cameraRig.ZoomBias = Mathf.Lerp(start, target, Ease.OutCubic(t / duration));
                yield return null;
            }
            cameraRig.ZoomBias = target;
        }

        private void Retry() => SceneFlow.LoadLevel(_levelIndex);

        private void NextLevel() => SceneFlow.LoadLevel(_levelIndex + 1);

        private void SetPhase(Phase phase)
        {
            _phase = phase;
            BumpServer.AcceptingBumps = IsInLevel;
        }
    }
}
