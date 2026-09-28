using GodTower.Gameplay;
using UnityEngine;

namespace GodTower.UI.Menu
{
    /// <summary>
    /// Live 3D title backdrop: builds a tower and slowly sways the camera around its front, with the
    /// climber hanging on it and the painted sky far behind.
    /// </summary>
    public class MenuBackdrop : MonoBehaviour
    {
        [SerializeField] private TowerBuilder tower;
        [SerializeField] private Camera cam;
        [SerializeField] private SpriteRenderer sky;
        [SerializeField] private Color towerTint = new Color(0.74f, 0.82f, 0.70f);
        [SerializeField] private float towerHeight = 45f;

        [Header("Camera sway")]
        [SerializeField] private float distance = 17f;
        [SerializeField] private float height = 7f;
        [SerializeField] private Vector3 lookAt = new Vector3(0f, 9f, 0f);
        [Tooltip("Degrees either side of the front the camera swings through.")]
        [SerializeField] private float swayAngle = 28f;
        [SerializeField] private float swaySpeed = 0.18f;
        [SerializeField] private float skyDepth = 60f;

        private void Start()
        {
            tower.Build(towerHeight, towerTint);

            // Fill the view with the sky painting at a fixed distance in front of the camera.
            sky.transform.SetParent(cam.transform, false);
            sky.transform.localPosition = new Vector3(0f, 0f, skyDepth);
            float viewHeight = 2f * skyDepth * Mathf.Tan(cam.fieldOfView * 0.5f * Mathf.Deg2Rad);
            var size = sky.sprite.bounds.size;
            float scale = Mathf.Max(viewHeight * cam.aspect / size.x, viewHeight / size.y) * 1.1f;
            sky.transform.localScale = new Vector3(scale, scale, 1f);
        }

        private void LateUpdate()
        {
            float angle = Mathf.Sin(Time.time * swaySpeed * Mathf.PI * 2f) * swayAngle * Mathf.Deg2Rad;
            var position = new Vector3(Mathf.Sin(angle) * distance, height, -Mathf.Cos(angle) * distance);
            cam.transform.SetPositionAndRotation(position, Quaternion.LookRotation(lookAt - position));
        }
    }
}
