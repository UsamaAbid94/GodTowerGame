using System.Collections;
using GodTower.Core;
using GodTower.Gameplay;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace GodTower.UI
{
    /// <summary>
    /// In-level HUD matching the reference: a thin glowing altitude bar on the left edge with
    /// the goal height on top and a climber marker + live height riding up the bar,
    /// plus hearts, level name and a pause button.
    /// </summary>
    public class HudView : MonoBehaviour
    {
        [SerializeField] private ClimberController climber;
        [SerializeField] private Image barFill;
        [SerializeField] private RectTransform barTrack;
        [SerializeField] private RectTransform marker;
        [SerializeField] private TMP_Text markerLabel;
        [SerializeField] private TMP_Text goalLabel;
        [SerializeField] private TMP_Text levelLabel;
        [SerializeField] private Image[] hearts;
        [SerializeField] private Button pauseButton;
        [SerializeField] private Color lostHeartColor = new Color(0.2f, 0.2f, 0.25f, 0.5f);
        [Tooltip("Full-screen red vignette flashed when a heart is lost.")]
        [SerializeField] private Image damageFlash;
        [SerializeField] private float damageFlashAlpha = 0.55f;

        private Coroutine _flash;

        private float _goalMeters = 1f;
        private int _shownMeters = -1;

        public Button PauseButton => pauseButton;

        public void Bind(string levelName, int goalMeters, int heartCount)
        {
            _goalMeters = Mathf.Max(1, goalMeters);
            levelLabel.text = levelName;
            goalLabel.text = goalMeters.ToString();
            SetHearts(heartCount, false);
        }

        public void SetHearts(int remaining, bool animate = true)
        {
            for (int i = 0; i < hearts.Length; i++)
            {
                bool alive = i < remaining;
                hearts[i].color = alive ? Color.white : lostHeartColor;
                if (animate && i == remaining)
                    StartCoroutine(UiTween.Scale(hearts[i].transform, 1.8f, 1f, 0.35f, Ease.OutBack));
            }
        }

        public void FlashDamage()
        {
            if (_flash != null)
                StopCoroutine(_flash);
            _flash = StartCoroutine(FlashRoutine());
        }

        /// <summary>Punches the height marker, e.g. on progress milestones.</summary>
        public void PunchHeight() => StartCoroutine(UiTween.Scale(marker, 1.7f, 1f, 0.4f, Ease.OutBack));

        private IEnumerator FlashRoutine()
        {
            const float duration = 0.5f;
            var color = damageFlash.color;
            for (float t = 0f; t < duration; t += Time.unscaledDeltaTime)
            {
                color.a = damageFlashAlpha * (1f - t / duration);
                damageFlash.color = color;
                yield return null;
            }
            color.a = 0f;
            damageFlash.color = color;
            _flash = null;
        }

        private void Update()
        {
            float meters = climber.CurrentMeters;
            float progress = Mathf.Clamp01(meters / _goalMeters);
            barFill.fillAmount = progress;

            var pos = marker.anchoredPosition;
            pos.y = barTrack.rect.height * progress;
            marker.anchoredPosition = pos;

            int rounded = Mathf.FloorToInt(meters);
            if (rounded != _shownMeters)
            {
                _shownMeters = rounded;
                markerLabel.text = rounded.ToString();
            }
        }
    }
}
