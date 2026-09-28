using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace GodTower.UI.Menu
{
    /// <summary>One entry of the level-select grid: number badge, name, stars and lock state.</summary>
    public class LevelButton : MonoBehaviour
    {
        [SerializeField] private Button button;
        [SerializeField] private Image badge;
        [SerializeField] private TMP_Text numberLabel;
        [SerializeField] private TMP_Text nameLabel;
        [SerializeField] private GameObject lockIcon;
        [SerializeField] private Image[] stars;
        [SerializeField] private Sprite unlockedBadge;
        [SerializeField] private Sprite completedBadge;
        [SerializeField] private Color lockedTint = new Color(0.45f, 0.5f, 0.55f);
        [SerializeField] private Color missingStarColor = new Color(0f, 0f, 0f, 0.3f);

        public void Setup(int index, string levelName, bool unlocked, int starCount, Action<int> onSelected)
        {
            numberLabel.text = (index + 1).ToString();
            nameLabel.text = levelName;
            numberLabel.gameObject.SetActive(unlocked);
            lockIcon.SetActive(!unlocked);

            badge.sprite = starCount > 0 ? completedBadge : unlockedBadge;
            badge.color = unlocked ? Color.white : lockedTint;

            for (int i = 0; i < stars.Length; i++)
                stars[i].color = i < starCount ? Color.white : missingStarColor;

            button.interactable = unlocked;
            button.onClick.RemoveAllListeners();
            button.onClick.AddListener(() => onSelected(index));
        }
    }
}
