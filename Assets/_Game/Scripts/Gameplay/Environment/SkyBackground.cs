using GodTower.Data;
using GodTower.Sound;
using UnityEngine;

namespace GodTower.Gameplay.Environment
{
    /// <summary>
    /// Distant painted sky: a backdrop far behind the tower that always fills the view and faces the
    /// camera. It slides slowly as altitude increases, so the cloud sea and mountains at the bottom of
    /// the painting show at the tower base and give way to open sky near the summit. Tinted per level;
    /// optional storm lightning.
    /// </summary>
    public class SkyBackground : MonoBehaviour
    {
        [SerializeField] private CameraRig rig;
        [SerializeField] private SpriteRenderer sky;
        [Tooltip("World depth of the backdrop (behind everything else).")]
        [SerializeField] private float depth = 60f;
        [Tooltip("Extra coverage beyond the view, used as parallax travel.")]
        [SerializeField, Range(1f, 2f)] private float overscan = 1.3f;
        [SerializeField] private Vector2 lightningInterval = new Vector2(3.5f, 8f);
        [Tooltip("Base colour of the distance fog / clear colour; multiplied by the level sky tint.")]
        [SerializeField] private Color fogColor = new Color(0.55f, 0.75f, 0.96f);

        private float _towerHeight = 100f;
        private Color _tint = Color.white;
        private bool _lightning;
        private float _lightningTimer;
        private float _flash;

        public void Apply(LevelConfig config, float towerHeight)
        {
            sky.sortingOrder = SortingOrders.Sky;
            _towerHeight = Mathf.Max(20f, towerHeight);
            _tint = config.skyTint;
            _lightning = config.lightning;
            // Distant tower sections fade into the level's sky, like the reference's hazy upper tower.
            var haze = fogColor * config.skyTint;
            haze.a = 1f;
            RenderSettings.fogColor = haze;
            rig.Camera.backgroundColor = haze;
            _lightningTimer = Random.Range(lightningInterval.x, lightningInterval.y);
        }

        private void LateUpdate()
        {
            var cam = rig.Camera;
            var camTransform = cam.transform;

            // Cover the view at the backdrop's depth while preserving the painting's aspect ratio.
            float viewHeight = rig.ViewHeightAt(depth);
            float viewWidth = viewHeight * cam.aspect;
            var spriteSize = sky.sprite.bounds.size;
            float scale = Mathf.Max(viewWidth / spriteSize.x, viewHeight / spriteSize.y) * overscan;
            sky.transform.localScale = new Vector3(scale, scale, 1f);

            // Slide the painting down as altitude increases: base → horizon visible, summit → open sky.
            float travel = (spriteSize.y * scale - viewHeight) * 0.5f;
            float altitude01 = Mathf.Clamp01(rig.FocusY / _towerHeight);
            float distance = (depth - camTransform.position.z) / Mathf.Max(0.1f, camTransform.forward.z);
            var center = camTransform.position + camTransform.forward * distance;
            sky.transform.SetPositionAndRotation(center + camTransform.up * Mathf.Lerp(travel, -travel, altitude01), camTransform.rotation);

            if (_lightning)
                UpdateLightning();
            sky.color = Color.Lerp(_tint, Color.white, _flash);
        }

        private void UpdateLightning()
        {
            _flash = Mathf.Max(0f, _flash - Time.deltaTime * 5f);
            _lightningTimer -= Time.deltaTime;
            if (_lightningTimer > 0f)
                return;

            _lightningTimer = Random.Range(lightningInterval.x, lightningInterval.y);
            _flash = 1f;
            rig.AddTrauma(0.25f);
            GameAudio.Play(Sfx.Thunder, 0.8f, 0.1f);
        }
    }
}
