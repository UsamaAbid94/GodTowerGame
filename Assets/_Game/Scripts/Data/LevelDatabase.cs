using UnityEngine;

namespace GodTower.Data
{
    /// <summary>Ordered list of the playable levels.</summary>
    [CreateAssetMenu(fileName = "LevelDatabase", menuName = "God Tower/Level Database")]
    public class LevelDatabase : ScriptableObject
    {
        [SerializeField] private LevelConfig[] levels;

        public int Count => levels.Length;

        public LevelConfig Get(int index) => levels[Mathf.Clamp(index, 0, levels.Length - 1)];

        public bool IsLast(int index) => index >= levels.Length - 1;

#if UNITY_EDITOR
        public void SetLevels(LevelConfig[] value) => levels = value;
#endif
    }
}
