using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>Particle effect prefabs (Cartoon FX Remaster) for game events that aren't tied to a hazard type.</summary>
    [CreateAssetMenu(fileName = "FxLibrary", menuName = "God Tower/Fx Library")]
    public class FxLibrary : ScriptableObject
    {
        [Header("Climber")]
        public GameObject landPoof;
        public GameObject heartLost;
        public GameObject boostBurst;

        [Header("Pickups")]
        [Tooltip("Looping glow attached to falling power-up orbs.")]
        public GameObject helperGlow;

        [Header("Super Saiyan rush")]
        public GameObject powerUpBurst;
        [Tooltip("Looping aura around the climber while powered up.")]
        public GameObject superAura;
        [Tooltip("Looping electric crackle around the climber while powered up.")]
        public GameObject superElectric;
        [Tooltip("Looping speed lines while rushing up the tower.")]
        public GameObject speedLines;
        [Tooltip("A hazard shattered by a powered-up climber or a ki blast.")]
        public GameObject hazardSmash;

        [Header("Kamehameha")]
        [Tooltip("Looping glow at the hands while the ki ball charges.")]
        public GameObject kiCharge;
        [Tooltip("Burst at the hands when the beam fires.")]
        public GameObject kiBlast;

        [Header("Webhook barrage")]
        [Tooltip("Looping cartoon brawl cloud around the climber while the gloves land.")]
        public GameObject barrageLoop;
        public GameObject barrageFinisherText;

        [Header("Victory")]
        public GameObject winFireworks;
        public GameObject winText;
    }
}
