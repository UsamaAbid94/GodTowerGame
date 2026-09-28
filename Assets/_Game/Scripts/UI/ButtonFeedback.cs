using GodTower.Sound;
using UnityEngine;
using UnityEngine.EventSystems;

namespace GodTower.UI
{
    /// <summary>Squash on press, spring back on release, click sound. Add to any Button.</summary>
    public class ButtonFeedback : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
    {
        [SerializeField] private float pressedScale = 0.9f;

        private Vector3 _baseScale = Vector3.one;
        private float _target = 1f;

        private void Awake() => _baseScale = transform.localScale;

        private void OnDisable()
        {
            _target = 1f;
            transform.localScale = _baseScale;
        }

        public void OnPointerDown(PointerEventData eventData) => _target = pressedScale;

        public void OnPointerUp(PointerEventData eventData) => _target = 1f;

        public void OnPointerClick(PointerEventData eventData) => GameAudio.Play(Sfx.Click);

        private void Update()
        {
            float current = transform.localScale.x / _baseScale.x;
            float next = Mathf.Lerp(current, _target, Time.unscaledDeltaTime * 25f);
            transform.localScale = _baseScale * next;
        }
    }
}
