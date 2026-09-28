using System;
using System.Collections;
using GodTower.Core;
using UnityEngine;

namespace GodTower.UI
{
    /// <summary>Tiny coroutine tweens for UI. Unscaled time, so they also run while paused.</summary>
    public static class UiTween
    {
        public static IEnumerator Scale(Transform target, float from, float to, float duration, Func<float, float> ease)
        {
            for (float t = 0f; t < duration; t += Time.unscaledDeltaTime)
            {
                target.localScale = Vector3.one * Mathf.LerpUnclamped(from, to, ease(t / duration));
                yield return null;
            }
            target.localScale = Vector3.one * to;
        }

        public static IEnumerator PopIn(Transform target, float duration = 0.35f) =>
            Scale(target, 0f, 1f, duration, Ease.OutBack);

        public static IEnumerator Slide(RectTransform target, Vector2 from, Vector2 to, float duration, Func<float, float> ease)
        {
            for (float t = 0f; t < duration; t += Time.unscaledDeltaTime)
            {
                target.anchoredPosition = Vector2.LerpUnclamped(from, to, ease(t / duration));
                yield return null;
            }
            target.anchoredPosition = to;
        }

        public static IEnumerator Fade(CanvasGroup group, float from, float to, float duration)
        {
            for (float t = 0f; t < duration; t += Time.unscaledDeltaTime)
            {
                group.alpha = Mathf.Lerp(from, to, t / duration);
                yield return null;
            }
            group.alpha = to;
        }
    }
}
