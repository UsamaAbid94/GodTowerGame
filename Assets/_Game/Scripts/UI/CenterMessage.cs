using System.Collections;
using GodTower.Core;
using TMPro;
using UnityEngine;

namespace GodTower.UI
{
    /// <summary>Big centred text that slams in and fades out: countdowns, level titles, "GO!".</summary>
    [RequireComponent(typeof(CanvasGroup))]
    public class CenterMessage : MonoBehaviour
    {
        [SerializeField] private TMP_Text title;
        [SerializeField] private TMP_Text subtitle;
        [SerializeField] private CanvasGroup group;

        private void Awake() => group.alpha = 0f;

        public IEnumerator Show(string text, string sub, Color color, float hold)
        {
            title.text = text;
            title.color = color;
            subtitle.text = sub;
            subtitle.gameObject.SetActive(!string.IsNullOrEmpty(sub));

            group.alpha = 1f;
            yield return UiTween.Scale(transform, 2.2f, 1f, 0.25f, Ease.OutBack);
            yield return new WaitForSeconds(hold);
            yield return UiTween.Fade(group, 1f, 0f, 0.2f);
        }
    }
}
