using System.Collections.Generic;
using UnityEngine;

namespace GodTower.UI
{
    /// <summary>Two stacked banner columns: helpers slide in from the left, attacks from the right.</summary>
    public class EventBannerFeed : MonoBehaviour
    {
        [SerializeField] private EventBanner leftPrefab;
        [SerializeField] private EventBanner rightPrefab;
        [SerializeField] private RectTransform leftColumn;
        [SerializeField] private RectTransform rightColumn;
        [SerializeField, Min(1)] private int maxPerSide = 3;

        private readonly List<EventBanner> _left = new List<EventBanner>();
        private readonly List<EventBanner> _right = new List<EventBanner>();

        public void Push(BannerSide side, string viewer, string gift)
        {
            var active = side == BannerSide.Left ? _left : _right;
            active.RemoveAll(b => b == null);
            if (active.Count >= maxPerSide)
            {
                Destroy(active[0].gameObject);
                active.RemoveAt(0);
            }

            var prefab = side == BannerSide.Left ? leftPrefab : rightPrefab;
            var column = side == BannerSide.Left ? leftColumn : rightColumn;
            var banner = Instantiate(prefab, column);
            active.Add(banner);
            banner.Show(side, viewer, gift);
        }
    }
}
