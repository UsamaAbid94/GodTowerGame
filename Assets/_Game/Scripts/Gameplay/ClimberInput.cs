using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

namespace GodTower.Gameplay
{
    /// <summary>
    /// Translates touch / mouse / keyboard into climb intent.
    /// Touch: tap or hold anywhere to climb, swipe left/right to change lane.
    /// Keyboard: Space / W / Up to climb, A / D / Left / Right to change lane.
    /// </summary>
    public class ClimberInput : MonoBehaviour
    {
        [Tooltip("Horizontal swipe distance, as a fraction of screen width, that triggers a lane change.")]
        [SerializeField, Range(0.02f, 0.3f)] private float swipeThreshold = 0.07f;

        private static readonly List<RaycastResult> RaycastBuffer = new List<RaycastResult>();

        private bool _pointerActive;
        private bool _pointerClimbing;
        private Vector2 _swipeOrigin;

        public bool ClimbHeld { get; private set; }
        public bool ClimbPressed { get; private set; }
        public int LaneDelta { get; private set; }

        private void Update()
        {
            ClimbPressed = false;
            ClimbHeld = false;
            LaneDelta = 0;

            ReadPointer();
            ReadKeyboard();
        }

        private void ReadPointer()
        {
            bool pressed;
            bool held;
            Vector2 position;

            var touch = Touchscreen.current;
            if (touch != null && (touch.primaryTouch.press.isPressed || touch.primaryTouch.press.wasReleasedThisFrame))
            {
                pressed = touch.primaryTouch.press.wasPressedThisFrame;
                held = touch.primaryTouch.press.isPressed;
                position = touch.primaryTouch.position.ReadValue();
            }
            else if (Mouse.current != null)
            {
                pressed = Mouse.current.leftButton.wasPressedThisFrame;
                held = Mouse.current.leftButton.isPressed;
                position = Mouse.current.position.ReadValue();
            }
            else
            {
                return;
            }

            if (pressed)
            {
                _pointerActive = true;
                _pointerClimbing = !IsOverUi(position);
                _swipeOrigin = position;
                if (_pointerClimbing)
                    ClimbPressed = true;
            }

            if (!held)
            {
                _pointerActive = false;
                _pointerClimbing = false;
                return;
            }

            if (!_pointerActive || !_pointerClimbing)
                return;

            ClimbHeld = true;

            float dx = position.x - _swipeOrigin.x;
            if (Mathf.Abs(dx) > swipeThreshold * Screen.width)
            {
                LaneDelta = dx > 0f ? 1 : -1;
                _swipeOrigin = position;
            }
        }

        private void ReadKeyboard()
        {
            var kb = Keyboard.current;
            if (kb == null)
                return;

            bool climbPressed = kb.spaceKey.wasPressedThisFrame || kb.wKey.wasPressedThisFrame || kb.upArrowKey.wasPressedThisFrame;
            bool climbHeld = kb.spaceKey.isPressed || kb.wKey.isPressed || kb.upArrowKey.isPressed;
            ClimbPressed |= climbPressed;
            ClimbHeld |= climbHeld;

            if (kb.aKey.wasPressedThisFrame || kb.leftArrowKey.wasPressedThisFrame) LaneDelta = -1;
            if (kb.dKey.wasPressedThisFrame || kb.rightArrowKey.wasPressedThisFrame) LaneDelta = 1;
        }

        private static bool IsOverUi(Vector2 screenPosition)
        {
            var eventSystem = EventSystem.current;
            if (eventSystem == null)
                return false;

            var data = new PointerEventData(eventSystem) { position = screenPosition };
            RaycastBuffer.Clear();
            eventSystem.RaycastAll(data, RaycastBuffer);
            return RaycastBuffer.Count > 0;
        }
    }
}
