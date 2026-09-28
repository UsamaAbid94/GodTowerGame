using System.Collections;
using GodTower.Core;
using TMPro;
using UnityEngine;

namespace GodTower.UI
{
    public enum BannerSide
    {
        Left,
        Right
    }

    /// <summary>
    /// Live-stream style gift notification (viewer name + gift pill + heart badge)
    /// that slides in from the screen edge, holds, then slides back out.
    /// </summary>
    public class EventBanner : MonoBehaviour
    {
        [SerializeField] private RectTransform content;
        [SerializeField] private TMP_Text viewerLabel;
        [SerializeField] private TMP_Text giftLabel;
        [SerializeField] private RectTransform heart;
        [SerializeField] private float slideDistance = 700f;
        [SerializeField] private float holdTime = 2.4f;

        /// <summary>Plays the full slide-in / hold / slide-out sequence, then destroys itself.</summary>
        public void Show(BannerSide side, string viewer, string gift) => StartCoroutine(Play(side, viewer, gift));

        private IEnumerator Play(BannerSide side, string viewer, string gift)
        {
            viewerLabel.text = viewer;
            giftLabel.text = gift;

            float sign = side == BannerSide.Left ? -1f : 1f;
            var hidden = new Vector2(sign * slideDistance, 0f);
            content.anchoredPosition = hidden;

            yield return UiTween.Slide(content, hidden, Vector2.zero, 0.3f, Ease.OutBack);
            yield return UiTween.Scale(heart, 1.5f, 1f, 0.25f, Ease.OutQuad);

            for (float t = 0f; t < holdTime; t += Time.unscaledDeltaTime)
            {
                heart.localScale = Vector3.one * (1f + Mathf.Abs(Mathf.Sin(t * 6f)) * 0.12f);
                yield return null;
            }

            yield return UiTween.Slide(content, Vector2.zero, hidden, 0.25f, Ease.InQuad);
            Destroy(gameObject);
        }
    }
}
