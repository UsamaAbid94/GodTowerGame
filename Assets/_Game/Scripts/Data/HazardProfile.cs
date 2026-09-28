using GodTower.Sound;
using UnityEngine;

namespace GodTower.Data
{
    /// <summary>
    /// One kind of lane attack (dropping gloves, rising uppercut, diving race car): how it looks,
    /// moves and hits, and how the camera sells it. Levels mix these by weight.
    /// </summary>
    [CreateAssetMenu(fileName = "Hazard", menuName = "God Tower/Hazard Profile")]
    public class HazardProfile : ScriptableObject
    {
        [Header("Announcement")]
        [Tooltip("Gift name shown on the live-stream banner, e.g. \"Race Car\".")]
        public string giftName = "Boxing";
        [Min(1)] public int maxPerWave = 2;
        public float warningDuration = 0.85f;

        [Header("Look")]
        public Sprite[] sprites;
        public float scale = 1f;
        [Tooltip("Degrees per second (random direction). 0 keeps the sprite upright.")]
        public float spinSpeed = 270f;

        [Header("Motion")]
        [Tooltip("Rise from below the screen instead of dropping from above.")]
        public bool fromBelow;
        [Tooltip("Multiplies the level's hazard speed.")]
        public float speedMultiplier = 1f;

        [Header("Hit")]
        public float hitRadius = 0.45f;
        [Tooltip("Multiplies the level's knock-back distance.")]
        public float knockbackMultiplier = 1f;
        [Range(0f, 1f)] public float impactTrauma = 0.6f;
        [Tooltip("Instant camera punch on impact (negative = zoom in).")]
        public float impactZoomKick = -0.8f;

        [Header("Camera")]
        [Tooltip("Extra view size while the wave is telegraphed and in flight, so the threat is visible early.")]
        public float zoomOut;

        [Header("Effects")]
        [Tooltip("Looping effect attached to the projectile; emitted in world space so it streaks behind.")]
        public GameObject trailEffect;
        public Vector2 trailOffset;
        public float trailScale = 1f;
        public GameObject impactEffect;
        public float impactEffectScale = 1f;
        [Tooltip("Comic text (POW!, BOOM!) popped on impact.")]
        public GameObject impactText;

        [Header("Audio")]
        public Sfx launchSfx = Sfx.Whoosh;
        public Sfx impactSfx = Sfx.Hit;
    }
}
