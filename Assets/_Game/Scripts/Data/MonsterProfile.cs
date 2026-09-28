using UnityEngine;

namespace GodTower.Data
{
    /// <summary>A rigged monster (Dungeon Characters 2D) that can ambush the climber, plus how to stage it.</summary>
    [CreateAssetMenu(fileName = "Monster", menuName = "God Tower/Monster Profile")]
    public class MonsterProfile : ScriptableObject
    {
        [Tooltip("Gift name on the red banner, e.g. \"Dragon\".")]
        public string displayName = "Dragon";
        public GameObject prefab;
        public float scale = 1f;
        [Tooltip("True if the rig looks to the right at positive X scale.")]
        public bool artFacesRight = true;

        [Header("Staging")]
        [Tooltip("Offset from the rig's root to its visual centre, in world units at scale 1 (facing right).")]
        public Vector2 centerOffset = new Vector2(0f, 1f);
        [Tooltip("Offset from the root to the mouth / hands, where attack effects spawn (facing right).")]
        public Vector2 attackPoint = new Vector2(1f, 1.2f);
        [Tooltip("Radius of the flight path around the tower.")]
        public float orbitRadius = 2f;

        [Header("Effects")]
        [Tooltip("One-shot effect for the roar / each strike (fire breath, ghost flame).")]
        public GameObject attackEffect;
        [Tooltip("Looping effect on the climber while this monster holds them.")]
        public GameObject grabEffect;
    }
}
