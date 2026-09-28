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

        private LevelConfig _config;
        private int _levelIndex;
        private float _goalY;
        private int _hearts;
        private int _nextMilestone = 1;
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
            hud.PauseButton.onClick.AddListener(Pause);
            pauseMenu.ResumeRequested += Resume;
            pauseMenu.RetryRequested += Retry;
            pauseMenu.HomeRequested += SceneFlow.LoadMainMenu;
            resultPanel.NextRequested += NextLevel;
            resultPanel.RetryRequested += Retry;
            resultPanel.HomeRequested += SceneFlow.LoadMainMenu;
        }

        private void OnDisable()
        {
            BumpServer.AcceptingBumps = false;
            climber.Damaged -= OnClimberDamaged;
            climber.Landed -= OnClimberLanded;
            hud.PauseButton.onClick.RemoveListener(Pause);
            pauseMenu.ResumeRequested -= Resume;
            pauseMenu.RetryRequested -= Retry;
            pauseMenu.HomeRequested -= SceneFlow.LoadMainMenu;
            resultPanel.NextRequested -= NextLevel;
            resultPanel.RetryRequested -= Retry;
            resultPanel.HomeRequested -= SceneFlow.LoadMainMenu;
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
                yield return centerMessage.Show(i.ToString(), _levelIndex == 0 ? "Tap & hold to climb - Swipe to dodge" : null, Color.white, 0.35f);
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

        private void Win()
        {
            SetPhase(Phase.Won);
            hazards.Stop();
            ambushes.Stop();
            climber.PlayWin(tower.SummitY);
            GameAudio.Play(Sfx.Win);
            StartCoroutine(EaseZoomBias(victoryZoomOut, 1.2f));

            int heartsLost = maxHearts - _hearts;
            int stars = heartsLost == 0 ? 3 : heartsLost <= 2 ? 2 : 1;
            GameProgress.RecordWin(_levelIndex, stars);
            StartCoroutine(Celebrate(stars));
        }

        private IEnumerator Celebrate(int stars)
        {
            particles.Play(particles.Library.winText, climber.HitPoint + Vector3.up * 2.5f, 1.4f, SortingOrders.Warnings);
            for (int i = 0; i < 6; i++)
            {
                var offset = new Vector3(Random.Range(-3f, 3f), Random.Range(1f, 5f), 0f);
                particles.Play(particles.Library.winFireworks, climber.transform.position + offset, 1.3f);
                vfx.Sparkles(climber.transform.position + offset, 10, 1.2f);
                yield return new WaitForSeconds(0.25f);
            }

            resultPanel.ShowWin(stars, _config.goalMeters, !database.IsLast(_levelIndex));
        }

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
