using UnityEngine;

namespace GodTower.Gameplay
{
    /// <summary>
    /// Assembles the 3D tower: the domed base, a stack of identical carved column modules up to the
    /// goal height, and the pointed summit cap. Modules share one mesh and one material instance
    /// (tinted per level), so the whole tower batches and far modules are frustum-culled.
    /// </summary>
    public class TowerBuilder : MonoBehaviour
    {
        [SerializeField] private Mesh moduleMesh;
        [SerializeField] private Mesh baseMesh;
        [SerializeField] private Mesh capMesh;
        [SerializeField] private Material stone;
        [Tooltip("Height of one column module mesh, in world units.")]
        [SerializeField] private float moduleHeight = 5.6f;
        [Tooltip("Radius of the column shaft; lanes run across its front face.")]
        [SerializeField] private float shaftRadius = 1.4f;
        [Tooltip("Height of the climber's pivot above the summit when standing on it.")]
        [SerializeField] private float climberStandOffset = 1.1f;
        [SerializeField] private float capHeight = 3.2f;

        /// <summary>World Y of the summit platform the climber stands on after winning.</summary>
        public float SummitY { get; private set; }

        /// <summary>Depth just in front of the column's face: where the climber and lane objects live.</summary>
        public float FrontZ => -(shaftRadius + 0.2f);

        public void Build(float heightUnits, Color tint)
        {
            var material = new Material(stone) { name = "Tower (tinted)", color = tint };

            Part("Base", baseMesh, material, 0f);

            int modules = Mathf.Max(1, Mathf.CeilToInt(heightUnits / moduleHeight));
            for (int i = 0; i < modules; i++)
                Part($"Module{i}", moduleMesh, material, i * moduleHeight);

            float top = modules * moduleHeight;
            Part("Cap", capMesh, material, top);
            SummitY = top + capHeight * 0.35f + climberStandOffset;
        }

        private void Part(string partName, Mesh mesh, Material material, float y)
        {
            var go = new GameObject(partName, typeof(MeshFilter), typeof(MeshRenderer));
            go.transform.SetParent(transform, false);
            go.transform.localPosition = new Vector3(0f, y, 0f);
            go.GetComponent<MeshFilter>().sharedMesh = mesh;
            go.GetComponent<MeshRenderer>().sharedMaterial = material;
        }
    }
}
