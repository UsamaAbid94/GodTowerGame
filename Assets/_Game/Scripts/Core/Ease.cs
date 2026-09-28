using UnityEngine;

namespace GodTower.Core
{
    /// <summary>Standard easing curves, input and output in 0..1.</summary>
    public static class Ease
    {
        public static float OutCubic(float t) => 1f - Mathf.Pow(1f - t, 3f);

        public static float InQuad(float t) => t * t;

        public static float OutQuad(float t) => 1f - (1f - t) * (1f - t);

        public static float OutBack(float t)
        {
            const float c1 = 1.70158f;
            const float c3 = c1 + 1f;
            return 1f + c3 * Mathf.Pow(t - 1f, 3f) + c1 * Mathf.Pow(t - 1f, 2f);
        }

        public static float OutElastic(float t)
        {
            if (t <= 0f) return 0f;
            if (t >= 1f) return 1f;
            const float c4 = 2f * Mathf.PI / 3f;
            return Mathf.Pow(2f, -10f * t) * Mathf.Sin((t * 10f - 0.75f) * c4) + 1f;
        }
    }
}
