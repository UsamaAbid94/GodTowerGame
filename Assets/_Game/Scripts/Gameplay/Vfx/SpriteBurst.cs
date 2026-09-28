using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>One-shot sprite effect: punchy scale-in, drift, spin and fade. Pooled by <see cref="VfxPool"/>.</summary>
    [RequireComponent(typeof(SpriteRenderer))]
    public class SpriteBurst : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer spriteRenderer;

        private float _age;
        private float _lifetime;
        private float _targetScale;
        private float _spin;
        private Vector3 _velocity;
        private float _gravity;
        private Color _color;
        private Transform _follow;
        private Vector3 _followOffset;

        public bool IsAlive => gameObject.activeSelf;

        private void Reset() => spriteRenderer = GetComponent<SpriteRenderer>();

        public void Play(in VfxRequest request)
        {
            spriteRenderer.sprite = request.Sprite;
            spriteRenderer.sortingOrder = request.SortingOrder;
            _color = request.Color;
            spriteRenderer.color = _color;

            _age = 0f;
            _lifetime = Mathf.Max(0.05f, request.Lifetime);
            _targetScale = request.Scale;
            _spin = request.Spin;
            _velocity = request.Velocity;
            _gravity = request.Gravity;
            _follow = request.Follow;
            _followOffset = request.Follow != null ? request.Position - request.Follow.position : Vector3.zero;

            transform.SetPositionAndRotation(request.Position, Quaternion.Euler(0f, 0f, request.Rotation));
            transform.localScale = Vector3.one * (_targetScale * 0.3f);
            gameObject.SetActive(true);
        }

        private void Update()
        {
            _age += Time.deltaTime;
            float t = _age / _lifetime;
            if (t >= 1f)
            {
                gameObject.SetActive(false);
                return;
            }

            // Overshoot pop in the first 20%, then settle.
            float pop = t < 0.2f ? Mathf.Lerp(0.3f, 1.15f, t / 0.2f) : Mathf.Lerp(1.15f, 1f, (t - 0.2f) / 0.8f);
            transform.localScale = Vector3.one * (_targetScale * pop);

            _velocity.y -= _gravity * Time.deltaTime;
            if (_follow != null)
            {
                _followOffset += _velocity * Time.deltaTime;
                transform.position = _follow.position + _followOffset;
            }
            else
            {
                transform.position += _velocity * Time.deltaTime;
            }

            transform.Rotate(0f, 0f, _spin * Time.deltaTime);

            var c = _color;
            c.a *= t < 0.55f ? 1f : 1f - (t - 0.55f) / 0.45f;
            spriteRenderer.color = c;
        }
    }
}
