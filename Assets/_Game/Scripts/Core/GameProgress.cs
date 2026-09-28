using UnityEngine;

namespace GodTower.Core
{
    /// <summary>Persistent unlock / star progress plus the level picked in the menu.</summary>
    public static class GameProgress
    {
        private const string UnlockedKey = "godtower.unlocked";
        private const string StarsKeyPrefix = "godtower.stars.";

        public static int SelectedLevel { get; set; }

        public static int HighestUnlocked => PlayerPrefs.GetInt(UnlockedKey, 0);

        public static bool IsUnlocked(int levelIndex) => levelIndex <= HighestUnlocked;

        public static int GetStars(int levelIndex) => PlayerPrefs.GetInt(StarsKeyPrefix + levelIndex, 0);

        public static void RecordWin(int levelIndex, int stars)
        {
            if (stars > GetStars(levelIndex))
                PlayerPrefs.SetInt(StarsKeyPrefix + levelIndex, stars);

            if (levelIndex + 1 > HighestUnlocked)
                PlayerPrefs.SetInt(UnlockedKey, levelIndex + 1);

            PlayerPrefs.Save();
        }
    }
}
