using System.Collections.Generic;
using GodTower.Data;
using UnityEngine;

namespace GodTower.Gameplay.Environment
{
    /// <summary>
    /// Recycled clouds at real depths: far banks drift behind the tower (and are hidden by it), a few
    /// near wisps pass between the camera and the tower. Parallax comes from the perspective camera;
    /// clouds that leave the view at their depth are recycled to the opposite edge.
    /// </summary>
    public class CloudField : MonoBehaviour
    {
        private sealed class Cloud
        {
            public SpriteRenderer Renderer;
            public float Drift;
        }

        [SerializeField] private CameraRig rig;
        [SerializeField] private SpriteRenderer cloudPrefab;
        [SerializeField] private int maxFarClouds = 12;
        [SerializeField] private int maxNearClouds = 2;
        [SerializeField] private Vector2 farDepth = new Vector2(6f, 32f);
        [SerializeField] private Vector2 nearDepth = new Vector2(-7f, -4.5f);

        private readonly List<Cloud> _clouds = new List<Cloud>();

        public void Apply(LevelConfig config)
        {
            int far = Mathf.RoundToInt(maxFarClouds * config.cloudDensity) + 3;
            int near = config.cloudDensity > 0.3f ? maxNearClouds : 1;

            for (int i = 0; i < far; i++)
                Create(config, Random.Range(farDepth.x, farDepth.y), false);
            for (int i = 0; i < near; i++)
                Create(config, Random.Range(nearDepth.x, nearDepth.y), true);

            foreach (var cloud in _clouds)
            {
                var (centerY, halfHeight, halfWidth) = Window(cloud.Renderer.transform.position.z);
                Place(cloud, Random.Range(centerY - halfHeight, centerY + halfHeight), halfWidth);
            }
        }

        private void Create(LevelConfig config, float z, bool near)
        {
            var renderer = Instantiate(cloudPrefab, transform);
            // Far clouds are scaled up with distance so they read as big cloud banks, not specks.
            float scale = near ? Random.Range(2.4f, 3.2f) : Random.Range(1.4f, 2.2f) * (1f + z / 14f);
            renderer.transform.localScale = new Vector3(scale * Random.Range(1.2f, 1.6f), scale * 0.7f, 1f);
            renderer.transform.position = new Vector3(0f, 0f, z);
            renderer.sortingOrder = near ? SortingOrders.NearClouds : SortingOrders.FarClouds;
            var tint = config.cloudTint;
            tint.a = near ? 0.5f : Mathf.Lerp(0.95f, 0.65f, Mathf.InverseLerp(farDepth.x, farDepth.y, z));
            renderer.color = tint;
            renderer.flipX = Random.value > 0.5f;

            _clouds.Add(new Cloud { Renderer = renderer, Drift = Random.Range(-0.3f, 0.3f) });
        }

        private void LateUpdate()
        {
            foreach (var cloud in _clouds)
            {
                var t = cloud.Renderer.transform;
                t.rotation = rig.Camera.transform.rotation;

                var p = t.position;
                var (centerY, halfHeight, halfWidth) = Window(p.z);
                float margin = 3f;

                p.x += cloud.Drift * Time.deltaTime;
                if (p.x > halfWidth + margin) p.x = -halfWidth - margin;
                else if (p.x < -halfWidth - margin) p.x = halfWidth + margin;
                t.position = p;

                if (p.y < centerY - halfHeight - margin)
                    Place(cloud, centerY + halfHeight + Random.Range(0f, halfHeight), halfWidth);
                else if (p.y > centerY + halfHeight * 2f + margin)
                    Place(cloud, centerY - halfHeight - Random.Range(0f, halfHeight * 0.5f), halfWidth);
            }
        }

        /// <summary>Centre Y and half extents of the camera's view at depth <paramref name="z"/>.</summary>
        private (float centerY, float halfHeight, float halfWidth) Window(float z)
        {
            var cam = rig.Camera.transform;
            float distance = (z - cam.position.z) / Mathf.Max(0.1f, cam.forward.z);
            float halfHeight = rig.ViewHeightAt(z) * 0.5f;
            return (cam.position.y + cam.forward.y * distance, halfHeight, halfHeight * rig.Camera.aspect);
        }

        private static void Place(Cloud cloud, float y, float halfWidth)
        {
            var t = cloud.Renderer.transform;
            t.position = new Vector3(Random.Range(-halfWidth * 1.1f, halfWidth * 1.1f), y, t.position.z);
        }
    }
}
