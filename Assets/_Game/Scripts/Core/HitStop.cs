using UnityEngine;

namespace GodTower.Core
{
    /// <summary>
    /// Hit-stop: a split-second near-freeze on impacts that makes hits feel heavy. Overlapping requests
    /// extend the freeze instead of stacking, and a paused game (time scale 0) is never overridden.
    /// </summary>
    public sealed class HitStop : MonoBehaviour
    {
        private const float FrozenScale = 0.05f;

        private static HitStop _instance;
        private float _until;
        private bool _active;

        public static void Freeze(float seconds)
        {
            if (seconds <= 0f || Time.timeScale == 0f)
                return;

            if (_instance == null)
            {
                var go = new GameObject(nameof(HitStop));
                DontDestroyOnLoad(go);
                _instance = go.AddComponent<HitStop>();
            }
            _instance.Begin(seconds);
        }

        private void Begin(float seconds)
        {
            _until = Mathf.Max(_until, Time.unscaledTime + seconds);
            if (_active)
                return;

            _active = true;
            Time.timeScale = FrozenScale;
        }

        private void Update()
        {
            if (!_active || Time.unscaledTime < _until)
                return;

            _active = false;
            if (Time.timeScale > 0f) // Paused meanwhile? Leave the pause alone.
                Time.timeScale = 1f;
        }
    }
}
