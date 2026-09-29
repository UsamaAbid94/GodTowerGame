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

        private static readonly Color[] ConfettiColors =
        {
            new Color(1f, 0.25f, 0.35f), new Color(1f, 0.8f, 0.15f), new Color(0.25f, 0.85f, 1f),
            new Color(0.4f, 1f, 0.45f), new Color(0.85f, 0.4f, 1f), new Color(1f, 0.55f, 0.15f), Color.white
        };

        private static Sprite _confettiSprite;

        private readonly List<SpriteBurst> _pool = new List<SpriteBurst>();

        public GameArt Art => art;

        /// <summary>A small white paper strip, made once at runtime and tinted per piece.</summary>
        private static Sprite ConfettiSprite
        {
            get
            {
                if (_confettiSprite != null)
                    return _confettiSprite;

                const int width = 6;
                const int height = 12;
                var texture = new Texture2D(width, height, TextureFormat.RGBA32, false)
                {
                    name = "Confetti",
                    filterMode = FilterMode.Bilinear,
                    wrapMode = TextureWrapMode.Clamp
                };
                var pixels = new Color32[width * height];
                for (int i = 0; i < pixels.Length; i++)
                    pixels[i] = new Color32(255, 255, 255, 255);
                texture.SetPixels32(pixels);
                texture.Apply(false, true);
                _confettiSprite = Sprite.Create(texture, new Rect(0f, 0f, width, height), new Vector2(0.5f, 0.5f), 30f);
                return _confettiSprite;
            }
        }

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

        /// <summary>
        /// Party-popper burst of fluttering paper strips fired along <paramref name="direction"/> within
        /// <paramref name="spreadDegrees"/>. They blast out, slow in the air, then flip and sway as they fall.
        /// </summary>
        public void Confetti(Vector3 position, Vector2 direction, float spreadDegrees, int count, float speed = 14f,
            float lifetime = 2.8f, int sortingOrder = SortingOrders.NearClouds + 1)
        {
            var sprite = ConfettiSprite;
            float baseAngle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
            for (int i = 0; i < count; i++)
            {
                float angle = (baseAngle + Random.Range(-spreadDegrees, spreadDegrees) * 0.5f) * Mathf.Deg2Rad;
                var piece = VfxRequest.At(sprite, position, Random.Range(0.7f, 1.2f), lifetime * Random.Range(0.8f, 1.2f));
                piece.Velocity = new Vector3(Mathf.Cos(angle), Mathf.Sin(angle), 0f) * (speed * Random.Range(0.55f, 1.1f));
                piece.Gravity = 7f;
                piece.Drag = 2.2f;
                piece.Flutter = Random.Range(7f, 14f);
                piece.Rotation = Random.Range(0f, 360f);
                piece.Spin = Random.Range(-240f, 240f);
                piece.Color = ConfettiColors[Random.Range(0, ConfettiColors.Length)];
                piece.SortingOrder = sortingOrder;
                Spawn(piece);
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
