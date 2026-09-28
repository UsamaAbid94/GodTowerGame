using UnityEngine;
using UnityEngine.Rendering;

namespace GodTower.Gameplay.Boss
{
    public enum MonsterAnim
    {
        Move,
        Attack,
        SpecialAttack,
        Stunned,
        Death
    }

    /// <summary>
    /// Runtime wrapper around a rigged "Dungeon Characters 2D" monster prefab: one sorting group so the
    /// whole skinned rig can pass in front of or behind the tower, left/right facing, and the pack's
    /// shared animator triggers.
    /// </summary>
    public class MonsterActor : MonoBehaviour
    {
        private static readonly int MoveTrigger = Animator.StringToHash("MoveTrigger");
        private static readonly int AttackTrigger = Animator.StringToHash("AttackTrigger");
        private static readonly int SpecialTrigger = Animator.StringToHash("SpecialATrigger");
        private static readonly int StunnedTrigger = Animator.StringToHash("StunedTrigger");
        private static readonly int DeathTrigger = Animator.StringToHash("DeathTrigger");

        private Animator _animator;
        private SortingGroup _sortingGroup;
        private float _scale;
        private bool _artFacesRight;

        public static MonsterActor Spawn(GameObject prefab, Vector3 position, float scale, bool artFacesRight, Transform parent)
        {
            var instance = Instantiate(prefab, position, Quaternion.identity, parent);
            var actor = instance.AddComponent<MonsterActor>();
            actor._animator = instance.GetComponentInChildren<Animator>();
            // Explicit check: Unity's fake-null means `??` can't be used on component lookups.
            if (!instance.TryGetComponent(out actor._sortingGroup))
                actor._sortingGroup = instance.AddComponent<SortingGroup>();
            actor._scale = scale * prefab.transform.localScale.y;
            actor._artFacesRight = artFacesRight;
            actor.Face(1f);
            return actor;
        }

        /// <summary>Turns the monster to look along <paramref name="directionX"/> (sign only).</summary>
        public void Face(float directionX)
        {
            if (Mathf.Approximately(directionX, 0f))
                return;

            bool faceRight = directionX > 0f;
            float sign = faceRight == _artFacesRight ? 1f : -1f;
            transform.localScale = new Vector3(_scale * sign, _scale, 1f);
        }

        public bool FacingRight => (transform.localScale.x > 0f) == _artFacesRight;

        public void SetSortingOrder(int order) => _sortingGroup.sortingOrder = order;

        public void Play(MonsterAnim anim)
        {
            if (_animator == null)
                return;

            _animator.SetTrigger(anim switch
            {
                MonsterAnim.Move => MoveTrigger,
                MonsterAnim.Attack => AttackTrigger,
                MonsterAnim.SpecialAttack => SpecialTrigger,
                MonsterAnim.Stunned => StunnedTrigger,
                _ => DeathTrigger,
            });
        }
    }
}
