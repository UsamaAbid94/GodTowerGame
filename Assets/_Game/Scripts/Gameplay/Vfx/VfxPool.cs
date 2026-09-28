using System.Collections.Generic;
using GodTower.Data;
using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>Pooled world-space sprite effects (impact stars, smoke puffs, sparkles).</summary>
    public class VfxPool : MonoBehaviour
    {
        [SerializeField] private SpriteBurst burstPrefab;
        [SerializeField] private GameArt art;
        [SerializeField, Min(1)] private int prewarm = 24;

        private readonly List<SpriteBurst> _pool = new List<SpriteBurst>();

        public GameArt Art => art;

        private void Awake()
        {
            for (int i = 0; i < prewarm; i++)
                CreateInstance();
        }

        public void Spawn(in VfxRequest request) => Acquire().Play(request);

        /// <summary>Cartoon impact: big star, a smoke puff and a ring of small sparkles.</summary>
        public void Impact(Vector3 position, float scale = 1f)
        {
            var star = VfxRequest.At(art.impactStar, position, 1.6f * scale, 0.35f);
            star.Rotation = Random.Range(0f, 360f);
            Spawn(star);

            var puff = VfxRequest.At(art.smokePuff, position + (Vector3)Random.insideUnitCircle * 0.3f, 1.3f * scale, 0.55f);
            puff.SortingOrder = SortingOrders.Effects - 1;
            puff.Color = new Color(1f, 1f, 1f, 0.85f);
            Spawn(puff);

            Sparkles(position, 6, scale);
        }

        public void Sparkles(Vector3 position, int count, float scale = 1f)
        {
            for (int i = 0; i < count; i++)
            {
                var dir = Quaternion.Euler(0f, 0f, i * 360f / count + Random.Range(-20f, 20f)) * Vector3.up;
                var spark = VfxRequest.At(art.impactStar, position, Random.Range(0.3f, 0.5f) * scale, Random.Range(0.4f, 0.6f));
                spark.Velocity = dir * Random.Range(4f, 7f) * scale;
                spark.Gravity = 9f;
                spark.Spin = Random.Range(-400f, 400f);
                spark.SortingOrder = SortingOrders.Effects + 1;
                Spawn(spark);
            }
        }

        public void Puff(Vector3 position, float scale = 1f)
        {
            var puff = VfxRequest.At(art.smokePuff, position, scale, 0.5f);
            puff.Velocity = Vector3.down * 0.5f;
            puff.Color = new Color(1f, 1f, 1f, 0.8f);
            Spawn(puff);
        }

        private SpriteBurst Acquire()
        {
            foreach (var burst in _pool)
                if (!burst.IsAlive)
                    return burst;
            return CreateInstance();
        }

        private SpriteBurst CreateInstance()
        {
            var burst = Instantiate(burstPrefab, transform);
            burst.gameObject.SetActive(false);
            _pool.Add(burst);
            return burst;
        }
    }
}
