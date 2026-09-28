using UnityEngine;

namespace GodTower.Data
{
    /// <summary>
    /// Central sprite registry, filled by the editor build (God Tower > Build Project).
    /// Keeps gameplay code free of hard-coded asset paths.
    /// </summary>
    [CreateAssetMenu(fileName = "GameArt", menuName = "God Tower/Game Art")]
    public class GameArt : ScriptableObject
    {
        [Header("Climber")]
        [Tooltip("Idle pose, used for UI icons. In-game poses come from the climber's Animator.")]
        public Sprite climberHang;

        [Header("Boxing gloves")]
        public Sprite[] gloves;
        [Tooltip("Direction (degrees, 0 = right, 90 = up) the knuckles face in each glove sprite.")]
        public float[] gloveForwardAngles;

        [Header("Effects")]
        public Sprite impactStar;
        public Sprite smokePuff;
        public Sprite energyFlash;
        public Sprite explosion;
        public Sprite warningIcon;

        public int GloveCount => gloves.Length;

        public float GetGloveForward(int index) =>
            gloveForwardAngles != null && index < gloveForwardAngles.Length ? gloveForwardAngles[index] : 90f;
    }
}
