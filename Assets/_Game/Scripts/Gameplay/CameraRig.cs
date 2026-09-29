using UnityEngine;

namespace GodTower.Gameplay
{
    /// <summary>
    /// Perspective follow camera for the 3D tower. It looks slightly up the tower and keeps the climber
    /// in the lower-middle of the frame. "Size" means the visible half-height at the tower's front face
    /// (the gameplay plane); it's reached by dollying the camera in and out, so zooms get real depth.
    /// The camera pulls back while falling or boosting, and has trauma-based screen shake.
    /// </summary>
    [RequireComponent(typeof(Camera))]
    public class CameraRig : MonoBehaviour
    {
        [SerializeField] private Camera cam;
        [SerializeField] private ClimberController target;

        [Header("Framing")]
        [SerializeField] private float baseSize = 8f;
        [SerializeField] private float maxSize = 22f;
        [Tooltip("Depth of the gameplay plane (the tower's front face), where Size is measured.")]
        [SerializeField] private float planeZ = -1.6f;
        [Tooltip("Degrees the camera looks up the tower; sells the height.")]
        [SerializeField] private float pitch = 9f;
        [Tooltip("Where the climber sits on screen, 0 = bottom edge, 1 = top edge.")]
        [SerializeField, Range(0.1f, 0.9f)] private float targetScreenHeight = 0.4f;
        [SerializeField] private float followSmoothTime = 0.12f;
        [Tooltip("Follow smoothing used for cinematic moves (panning to a point and gliding back to the climber).")]
        [SerializeField] private float cinematicSmoothTime = 0.55f;
        [Tooltip("Lowest world Y the view centre may reach, before adding 55% of the view half-height.")]
        [SerializeField] private float minCameraY;

        [Header("Zoom")]
        [SerializeField] private float zoomPerFallSpeed = 0.35f;
        [SerializeField] private float boostZoom = 1.5f;
        [Tooltip("Extra view size at full climbing momentum, to sell the speed.")]
        [SerializeField] private float momentumZoom = 1f;
        [SerializeField] private float zoomSmoothTime = 0.3f;
        [Tooltip("How fast an instant zoom kick (impact punch-in) settles back, per second.")]
        [SerializeField] private float zoomKickRecovery = 6f;

        [Header("Shake")]
        [SerializeField] private float maxShakeOffset = 0.7f;
        [SerializeField] private float maxShakeAngle = 4f;
        [SerializeField] private float shakeFrequency = 22f;
        [SerializeField] private float traumaDecay = 1.6f;

        private float _trauma;
        private float _size;
        private float _smoothedSize;
        private float _sizeVelocity;
        private float _zoomKick;
        private float _heldZoom;
        private float _heldZoomUntil;
        private float? _focusY;
        private float _cinematicUntil;
        private float _followVelocity;
        private float _viewCenterY;
        private float _seed;

        public Camera Camera => cam;

        /// <summary>Scripted zoom offset owned by the level flow (intro fly-in, victory pull-back). Eased.</summary>
        public float ZoomBias { get; set; }

        public float Trauma => _trauma;

        /// <summary>World Y at the centre of the view on the gameplay plane.</summary>
        public float FocusY => _viewCenterY;

        /// <summary>Visible width and height on the gameplay plane.</summary>
        public Vector2 ViewSize => new Vector2(_size * 2f * cam.aspect, _size * 2f);

        private float TanHalfFov => Mathf.Tan(cam.fieldOfView * 0.5f * Mathf.Deg2Rad);

        private void Reset() => cam = GetComponent<Camera>();

        private void Awake()
        {
            _seed = Random.value * 100f;
            _size = _smoothedSize = baseSize;
            _viewCenterY = transform.position.y;
        }

        /// <summary>Visible height of the view at world depth <paramref name="z"/> (for backdrops and far layers).</summary>
        public float ViewHeightAt(float z)
        {
            float distance = Mathf.Max(0.1f, (z - transform.position.z) / Mathf.Max(0.1f, transform.forward.z));
            return 2f * distance * TanHalfFov;
        }

        public void AddTrauma(float amount) => _trauma = Mathf.Clamp01(_trauma + amount);

        /// <summary>Instant zoom punch that springs back (negative = punch in). Used on impacts.</summary>
        public void KickZoom(float amount) => _zoomKick += amount;

        /// <summary>Eased pull-back held for a while, e.g. so an incoming race car is visible early.</summary>
        public void HoldZoom(float amount, float seconds)
        {
            _heldZoom = Mathf.Max(_heldZoom, amount);
            _heldZoomUntil = Mathf.Max(_heldZoomUntil, Time.time + seconds);
        }

        public void ReleaseZoom() => _heldZoomUntil = 0f;

        /// <summary>Cinematic pan: centre the view on <paramref name="worldY"/> instead of the climber until <see cref="ClearFocus"/>.</summary>
        public void FocusOn(float worldY)
        {
            _focusY = worldY;
            _cinematicUntil = float.PositiveInfinity;
        }

        /// <summary>Glide back to following the climber over roughly <paramref name="glideSeconds"/>.</summary>
        public void ClearFocus(float glideSeconds = 1.2f)
        {
            _focusY = null;
            _cinematicUntil = Time.time + glideSeconds;
        }

        public void SnapToTarget()
        {
            _size = _smoothedSize = Mathf.Clamp(baseSize + ZoomBias, 3f, maxSize);
            if (target != null)
                _viewCenterY = DesiredY(_size);
            Place(Vector2.zero, 0f);
        }

        private void LateUpdate()
        {
            float dt = Time.deltaTime;
            UpdateZoom();
            UpdateFollow();

            _trauma = Mathf.Max(0f, _trauma - traumaDecay * dt);
            float shake = _trauma * _trauma;
            float time = Time.time * shakeFrequency;
            var offset = new Vector2(
                (Mathf.PerlinNoise(_seed, time) - 0.5f) * 2f,
                (Mathf.PerlinNoise(_seed + 10f, time) - 0.5f) * 2f) * (maxShakeOffset * shake);
            float roll = (Mathf.PerlinNoise(_seed + 20f, time) - 0.5f) * 2f * maxShakeAngle * shake;

            Place(offset, roll);
        }

        /// <summary>Positions the camera so the gameplay plane shows <see cref="_size"/> around the view centre.</summary>
        private void Place(Vector2 shakeOffset, float roll)
        {
            var rotation = Quaternion.Euler(-pitch, 0f, roll);
            float distance = _size / TanHalfFov;
            var focus = new Vector3(0f, _viewCenterY, planeZ);
            var position = focus - rotation * Vector3.forward * distance;
            position += rotation * (Vector3)shakeOffset;
            transform.SetPositionAndRotation(position, rotation);
        }

        private void UpdateZoom()
        {
            if (Time.time >= _heldZoomUntil)
                _heldZoom = 0f;

            float desired = baseSize + ZoomBias + _heldZoom;
            if (target != null)
            {
                desired += Mathf.Max(0f, -target.VerticalSpeed) * zoomPerFallSpeed;
                if (target.IsBoosting)
                    desired += boostZoom;
                desired += target.Momentum * momentumZoom;
            }

            desired = Mathf.Clamp(desired, 3f, maxSize);
            _smoothedSize = Mathf.SmoothDamp(_smoothedSize, desired, ref _sizeVelocity, zoomSmoothTime);

            // Kicks bypass the smoothing so impacts read as a sharp punch.
            _zoomKick = Mathf.Lerp(_zoomKick, 0f, 1f - Mathf.Exp(-zoomKickRecovery * Time.deltaTime));
            _size = Mathf.Max(2f, _smoothedSize + _zoomKick);
        }

        private void UpdateFollow()
        {
            if (target == null)
                return;

            // Tighten the follow during fast falls so the climber never leaves the frame.
            float smooth = target.VerticalSpeed < -5f ? followSmoothTime * 0.4f : followSmoothTime;
            if (Time.time < _cinematicUntil)
                smooth = cinematicSmoothTime;

            float goal = _focusY ?? DesiredY(_size);
            _viewCenterY = Mathf.SmoothDamp(_viewCenterY, goal, ref _followVelocity, smooth);
        }

        private float DesiredY(float size)
        {
            float y = target.transform.position.y + size * (1f - 2f * targetScreenHeight);
            return Mathf.Max(y, minCameraY + size * 0.55f);
        }
    }
}
