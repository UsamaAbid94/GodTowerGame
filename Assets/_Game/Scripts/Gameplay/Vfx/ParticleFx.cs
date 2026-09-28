using CartoonFX;
using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>
    /// Spawns particle-effect prefabs into the 2D scene: puts them on the right sorting order,
    /// scales them as a hierarchy and cleans up one-shots. Looping effects are returned so the
    /// caller owns their lifetime.
    /// </summary>
    public class ParticleFx : MonoBehaviour
    {
        [SerializeField] private FxLibrary library;

        public FxLibrary Library => library;

        private void Awake()
        {
            // CameraRig owns screen shake; Cartoon FX's own shake would fight its follow.
            // Its point lights have no effect under the 2D renderer.
            CFXR_Effect.GlobalDisableCameraShake = true;
            CFXR_Effect.GlobalDisableLights = true;
        }

        /// <summary>Fire-and-forget effect at a world position.</summary>
        public void Play(GameObject prefab, Vector3 position, float scale = 1f, int sortingOrder = SortingOrders.Effects)
        {
            if (prefab == null)
                return;

            var instance = Spawn(prefab, position, null, scale, sortingOrder);
            Destroy(instance, Lifetime(instance));
        }

        /// <summary>
        /// Looping effect parented to <paramref name="parent"/>. With <paramref name="worldSpaceTrail"/> the particles
        /// stay where they were emitted, so a fast-moving parent leaves a streak behind it.
        /// </summary>
        public GameObject Attach(GameObject prefab, Transform parent, Vector3 localPosition, float scale = 1f,
            int sortingOrder = SortingOrders.Effects, bool worldSpaceTrail = false)
        {
            if (prefab == null)
                return null;

            var instance = Spawn(prefab, parent.TransformPoint(localPosition), parent, scale, sortingOrder);
            if (worldSpaceTrail)
            {
                foreach (var system in instance.GetComponentsInChildren<ParticleSystem>(true))
                {
                    var main = system.main;
                    main.simulationSpace = ParticleSystemSimulationSpace.World;
                }
            }
            return instance;
        }

        /// <summary>Stops emitting and lets live particles finish before the effect is destroyed.</summary>
        public static void Release(GameObject effect)
        {
            if (effect == null)
                return;

            effect.transform.SetParent(null, true);
            foreach (var system in effect.GetComponentsInChildren<ParticleSystem>(true))
                system.Stop(true, ParticleSystemStopBehavior.StopEmitting);
            Destroy(effect, Lifetime(effect));
        }

        private static GameObject Spawn(GameObject prefab, Vector3 position, Transform parent, float scale, int sortingOrder)
        {
            var instance = Instantiate(prefab, position, Quaternion.identity, parent);
            instance.transform.localScale = prefab.transform.localScale * scale;

            foreach (var system in instance.GetComponentsInChildren<ParticleSystem>(true))
            {
                var main = system.main;
                main.scalingMode = ParticleSystemScalingMode.Hierarchy;
            }
            foreach (var renderer in instance.GetComponentsInChildren<ParticleSystemRenderer>(true))
                renderer.sortingOrder = sortingOrder;

            return instance;
        }

        private static float Lifetime(GameObject effect)
        {
            float longest = 0f;
            foreach (var system in effect.GetComponentsInChildren<ParticleSystem>(true))
            {
                var main = system.main;
                longest = Mathf.Max(longest, main.startDelay.constantMax + main.duration + main.startLifetime.constantMax);
            }
            return longest + 0.25f;
        }
    }
}
