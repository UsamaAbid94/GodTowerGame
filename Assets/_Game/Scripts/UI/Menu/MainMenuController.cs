using GodTower.Core;
using GodTower.Data;
using GodTower.Sound;
using UnityEngine;
using UnityEngine.UI;

namespace GodTower.UI.Menu
{
    /// <summary>Title screen + level select popup.</summary>
    public class MainMenuController : MonoBehaviour
    {
        [SerializeField] private LevelDatabase database;

        [Header("Title")]
        [SerializeField] private RectTransform titleLogo;
        [SerializeField] private Button playButton;
        [SerializeField] private Button soundButton;
        [SerializeField] private Image soundIcon;
        [SerializeField] private Sprite soundOnSprite;
        [SerializeField] private Sprite soundOffSprite;

        [Header("Level select")]
        [SerializeField] private GameObject levelSelectRoot;
        [SerializeField] private RectTransform levelSelectPanel;
        [SerializeField] private Button closeLevelSelectButton;
        [SerializeField] private LevelButton[] levelButtons;

        private void Awake()
        {
            levelSelectRoot.SetActive(false);
            playButton.onClick.AddListener(OpenLevelSelect);
            closeLevelSelectButton.onClick.AddListener(() => levelSelectRoot.SetActive(false));
            soundButton.onClick.AddListener(ToggleSound);
        }

        private void Start()
        {
            // Touch the service so music starts on the title screen.
            RefreshSoundIcon();
            StartCoroutine(UiTween.PopIn(titleLogo, 0.6f));
        }

        private void Update()
        {
            titleLogo.localRotation = Quaternion.Euler(0f, 0f, Mathf.Sin(Time.time * 1.5f) * 2f);
        }

        private void OpenLevelSelect()
        {
            for (int i = 0; i < levelButtons.Length; i++)
            {
                bool exists = i < database.Count;
                levelButtons[i].gameObject.SetActive(exists);
                if (exists)
                    levelButtons[i].Setup(i, database.Get(i).displayName, GameProgress.IsUnlocked(i), GameProgress.GetStars(i), SceneFlow.LoadLevel);
            }

            levelSelectRoot.SetActive(true);
            StartCoroutine(UiTween.PopIn(levelSelectPanel, 0.35f));
        }

        private void ToggleSound()
        {
            GameAudio.Instance.Muted = !GameAudio.Instance.Muted;
            RefreshSoundIcon();
        }

        private void RefreshSoundIcon() =>
            soundIcon.sprite = GameAudio.Instance.Muted ? soundOffSprite : soundOnSprite;
    }
}
