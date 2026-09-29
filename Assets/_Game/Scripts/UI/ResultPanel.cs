using System;
using System.Collections;
using GodTower.Core;
using GodTower.Sound;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace GodTower.UI
{
    /// <summary>End-of-level popup for both victory (stars, next level) and defeat.</summary>
    public class ResultPanel : MonoBehaviour
    {
        [SerializeField] private GameObject root;
        [SerializeField] private RectTransform panel;
        [SerializeField] private GameObject winTitle;
        [SerializeField] private GameObject loseTitle;
        [SerializeField] private TMP_Text detailLabel;
        [SerializeField] private Image[] stars;
        [SerializeField] private Color missingStarColor = new Color(0.15f, 0.2f, 0.3f, 0.6f);
        [SerializeField] private Button nextButton;
        [SerializeField] private Button retryButton;
        [SerializeField] private Button homeButton;

        public event Action NextRequested;
        public event Action RetryRequested;
        public event Action HomeRequested;

        /// <summary>Raised as each earned star pops in (0-based), so the world behind the panel can celebrate it.</summary>
        public event Action<int> StarRevealed;

        private void Awake()
        {
            root.SetActive(false);
            nextButton.onClick.AddListener(() => NextRequested?.Invoke());
            retryButton.onClick.AddListener(() => RetryRequested?.Invoke());
            homeButton.onClick.AddListener(() => HomeRequested?.Invoke());
        }

        public void ShowWin(int starCount, int meters, bool hasNextLevel)
        {
            Open(true);
            detailLabel.text = $"Summit reached: {meters} m";
            nextButton.gameObject.SetActive(hasNextLevel);
            StartCoroutine(RevealStars(starCount));
        }

        public void ShowLose(int meters)
        {
            Open(false);
            detailLabel.text = $"You fell at {meters} m";
            nextButton.gameObject.SetActive(false);
        }

        private void Open(bool won)
        {
            root.SetActive(true);
            winTitle.SetActive(won);
            loseTitle.SetActive(!won);
            foreach (var star in stars)
                star.gameObject.SetActive(won);
            StartCoroutine(UiTween.PopIn(panel, 0.4f));
        }

        private IEnumerator RevealStars(int count)
        {
            foreach (var star in stars)
                star.color = missingStarColor;

            yield return new WaitForSecondsRealtime(0.35f);
            for (int i = 0; i < stars.Length && i < count; i++)
            {
                stars[i].color = Color.white;
                GameAudio.Play(Sfx.Countdown, 0.8f);
                StarRevealed?.Invoke(i);
                StartCoroutine(UiTween.Scale(panel, 1.06f, 1f, 0.2f, Ease.OutQuad));
                yield return UiTween.Scale(stars[i].transform, 2f, 1f, 0.25f, Ease.OutBack);
            }
        }
    }
}
