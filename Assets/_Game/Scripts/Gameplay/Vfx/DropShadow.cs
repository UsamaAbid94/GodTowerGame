using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>
    /// 2.5D depth cue: a dark, translucent copy of a sprite cast onto the tower face, offset away from the
    /// light (the tower is lit from the top-left). Follows the source's animated sprite, flip, rotation
    /// and scale, so the climber and flying objects visibly hover in front of the tower.
    /// Place it either as a sibling of the source renderer or as its child.
    /// </summary>
    [RequireComponent(typeof(SpriteRenderer))]
    public class DropShadow : MonoBehaviour
    {
        [SerializeField] private SpriteRenderer source;
        [Tooltip("Shift from the source; +Z pushes the shadow back onto the tower face.")]
        [SerializeField] private Vector3 offset = new Vector3(0.28f, -0.22f, 0.12f);
        [SerializeField] private Color color = new Color(0.02f, 0.06f, 0.14f, 0.38f);

        private SpriteRenderer _renderer;

        private void Awake() => _renderer = GetComponent<SpriteRenderer>();

        private void LateUpdate()
        {
            _renderer.enabled = source.enabled;
            if (!source.enabled)
                return;

            _renderer.sprite = source.sprite;
            _renderer.flipX = source.flipX;
            _renderer.flipY = source.flipY;
            var tint = color;
            tint.a *= source.color.a;
            _renderer.color = tint;

            var src = source.transform;
            if (transform.parent == src)
            {
                transform.localPosition = src.InverseTransformVector(offset);
                transform.localRotation = Quaternion.identity;
                transform.localScale = Vector3.one;
            }
            else
            {
                transform.SetPositionAndRotation(src.position + offset, src.rotation);
                transform.localScale = src.localScale;
            }
        }
    }
}
