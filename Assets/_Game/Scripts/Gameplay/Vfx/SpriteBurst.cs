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
        private float _drag;
        private float _flutter;
        private float _flutterPhase;
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
            _drag = request.Drag;
            _flutter = request.Flutter;
            _flutterPhase = Random.Range(0f, Mathf.PI * 2f);
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
            var scale = Vector3.one * (_targetScale * pop);

            float dt = Time.deltaTime;
            _velocity.y -= _gravity * dt;
            if (_drag > 0f)
                _velocity *= Mathf.Exp(-_drag * dt);

            if (_flutter > 0f)
            {
                // Paper flip: squash the width through zero, and sway sideways in step with it.
                float phase = _flutterPhase + _age * _flutter;
                scale.x *= Mathf.Cos(phase);
                transform.position += Vector3.right * (Mathf.Sin(phase * 0.5f) * 1.2f * dt);
            }
            transform.localScale = scale;

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
