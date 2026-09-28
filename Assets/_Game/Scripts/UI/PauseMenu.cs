using System;
using UnityEngine;
using UnityEngine.UI;

namespace GodTower.UI
{
    /// <summary>Pause popup: resume, restart the level or return to the main menu.</summary>
    public class PauseMenu : MonoBehaviour
    {
        [SerializeField] private GameObject root;
        [SerializeField] private RectTransform panel;
        [SerializeField] private Button resumeButton;
        [SerializeField] private Button retryButton;
        [SerializeField] private Button homeButton;

        public event Action ResumeRequested;
        public event Action RetryRequested;
        public event Action HomeRequested;

        public bool IsOpen => root.activeSelf;

        private void Awake()
        {
            root.SetActive(false);
            resumeButton.onClick.AddListener(() => ResumeRequested?.Invoke());
            retryButton.onClick.AddListener(() => RetryRequested?.Invoke());
            homeButton.onClick.AddListener(() => HomeRequested?.Invoke());
        }

        public void Open()
        {
            root.SetActive(true);
            StartCoroutine(UiTween.PopIn(panel, 0.3f));
        }

        public void Close() => root.SetActive(false);
    }
}
