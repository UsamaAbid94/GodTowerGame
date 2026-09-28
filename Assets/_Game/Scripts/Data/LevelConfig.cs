using UnityEngine;

namespace GodTower.Data
{
    /// <summary>
    /// Tuning + theming for one tower climb. Five of these drive the five levels.
    /// </summary>
    [CreateAssetMenu(fileName = "Level", menuName = "God Tower/Level Config")]
    public class LevelConfig : ScriptableObject
    {
        [Header("Identity")]
        public string displayName = "Level";

        [Tooltip("Height (in displayed metres) the climber must reach to win.")]
        public int goalMeters = 1000;

        [Header("Theme")]
        [Tooltip("Multiplied over the painted sky background.")]
        public Color skyTint = Color.white;
        public Color towerTint = new Color(0.78f, 0.84f, 0.72f);
        public Color cloudTint = Color.white;
        [Range(0f, 1f)] public float cloudDensity = 0.5f;
        public bool lightning;
        [Tooltip("Looping particle effect that follows the camera (rain, wind, falling stars...).")]
        public GameObject ambientEffect;

        [Header("Hazards")]
        [Tooltip("Seconds between hazard waves at the start and at the top of the tower.")]
        public Vector2 hazardInterval = new Vector2(3.5f, 2.5f);
        [Min(1)] public int maxHazardsPerWave = 1;
        public float hazardFallSpeed = 9f;
        [Tooltip("Metres lost when a hazard connects (scaled per hazard type).")]
        public int knockbackMeters = 150;
        public HazardWeight[] hazards;

        [Header("Helpers")]
        [Range(0f, 1f)] public float helperChance = 0.25f;

        [Header("Monster ambushes")]
        [Tooltip("Scripted boss moments, triggered in order as the climber passes each progress mark.")]
        public MonsterAmbush[] ambushes;

        public float GetHazardInterval(float progress01) =>
            Mathf.Lerp(hazardInterval.x, hazardInterval.y, progress01);

        /// <summary>Weighted random pick from <see cref="hazards"/>.</summary>
        public HazardProfile PickHazard()
        {
            float total = 0f;
            foreach (var entry in hazards)
                total += entry.weight;

            float roll = Random.value * total;
            foreach (var entry in hazards)
            {
                roll -= entry.weight;
                if (roll <= 0f)
                    return entry.profile;
            }
            return hazards[hazards.Length - 1].profile;
        }
    }

    [System.Serializable]
    public struct MonsterAmbush
    {
        [Range(0f, 1f)] public float atProgress;
        public MonsterProfile[] monsters;
        [Tooltip("Metres the monsters drag the climber down if they don't break free.")]
        public int dragMeters;

        public MonsterAmbush(float atProgress, int dragMeters, params MonsterProfile[] monsters)
        {
            this.atProgress = atProgress;
            this.dragMeters = dragMeters;
            this.monsters = monsters;
        }
    }

    [System.Serializable]
    public struct HazardWeight
    {
        public HazardProfile profile;
        [Min(0f)] public float weight;

        public HazardWeight(HazardProfile profile, float weight)
        {
            this.profile = profile;
            this.weight = weight;
        }
    }
}
