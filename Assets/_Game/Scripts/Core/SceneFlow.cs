using UnityEngine;
using UnityEngine.SceneManagement;

namespace GodTower.Core
{
    /// <summary>Single place that knows scene names and how to move between them.</summary>
    public static class SceneFlow
    {
        public const string MainMenuScene = "MainMenu";
        public const string GameScene = "Game";

        public static void LoadMainMenu() => Load(MainMenuScene);

        public static void LoadLevel(int levelIndex)
        {
            GameProgress.SelectedLevel = levelIndex;
            Load(GameScene);
        }

        private static void Load(string scene)
        {
            Time.timeScale = 1f;
            AudioListener.pause = false;
            SceneManager.LoadScene(scene);
        }
    }
}
