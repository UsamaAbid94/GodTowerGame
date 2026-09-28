using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.Animations;
using UnityEngine;

namespace GodTower.EditorTools
{
    /// <summary>
    /// Builds the climber's pose clips and Animator controller from the sliced sheet.
    /// Clips animate the Body object (sprite + local sway/shake/tumble); state changes are driven
    /// from <c>ClimberController</c> via <c>Animator.Play</c>, so the controller needs no transitions.
    /// </summary>
    internal static class ClimberAnimations
    {
        private const string SpriteProperty = "m_Sprite";

        /// <summary>One hand-over-hand frame per 0.1 s: a full 1-2-3-2 cycle spans two climb steps (0.2 s hold cadence each).</summary>
        private const float ClimbFrameTime = 0.1f;

        public static void Build(string directory, string controllerPath)
        {
            RemoveStaleClips(directory);

            var hang = ArtPipeline.Load(ArtPipeline.ClimberHang);
            var climb1 = ArtPipeline.Load(ArtPipeline.ClimberClimb1);
            var climb2 = ArtPipeline.Load(ArtPipeline.ClimberClimb2);
            var climb3 = ArtPipeline.Load(ArtPipeline.ClimberClimb3);
            var hit = ArtPipeline.Load(ArtPipeline.ClimberHit);
            var fall = ArtPipeline.Load(ArtPipeline.ClimberFall);

            // Idle: slow sway and breathing bob while hanging.
            var hangClip = Clip(directory, "Hang", 2f, new[] { hang }, 2f, clip =>
            {
                Rotation(clip, (0f, 0f), (0.5f, 2f), (1.5f, -2f), (2f, 0f));
                Position(clip, (0f, 0f, 0f), (1f, 0f, -0.04f), (2f, 0f, 0f));
            });

            // Hand-over-hand: reach (1) → pull (2) → other hand reaches (3) → pull (2), with a lift on each pull.
            var climbClip = Clip(directory, "Climb", ClimbFrameTime, new[] { climb1, climb2, climb3, climb2 }, 4 * ClimbFrameTime, clip =>
                Position(clip, (0f, 0f, 0f), (0.1f, 0f, 0.06f), (0.2f, 0f, 0f), (0.3f, 0f, 0.06f), (0.4f, 0f, 0f)));

            // Getting punched: fast decaying shake with a squash on each impact. Loops for the long webhook barrage.
            var hitClip = Clip(directory, "Hit", 0.36f, new[] { hit }, 0.36f, clip =>
            {
                Rotation(clip, (0f, 0f), (0.06f, -10f), (0.12f, 8f), (0.18f, -6f), (0.24f, 4f), (0.3f, -2f), (0.36f, 0f));
                Position(clip, (0f, 0f, 0f), (0.06f, 0.1f, 0f), (0.12f, -0.08f, 0f), (0.18f, 0.06f, 0f), (0.24f, -0.04f, 0f), (0.36f, 0f, 0f));
                Scale(clip, (0f, 1.12f, 0.9f), (0.12f, 0.95f, 1.05f), (0.24f, 1.03f, 0.98f), (0.36f, 1.12f, 0.9f));
            });

            // Knocked off the tower: flailing tumble.
            var fallClip = Clip(directory, "Fall", 0.6f, new[] { fall }, 0.6f, clip =>
            {
                Rotation(clip, (0f, -14f), (0.3f, 14f), (0.6f, -14f));
                Position(clip, (0f, -0.05f, 0f), (0.3f, 0.05f, 0f), (0.6f, -0.05f, 0f));
            });

            AssetDatabase.DeleteAsset(controllerPath);
            var controller = AnimatorController.CreateAnimatorControllerAtPath(controllerPath);
            var machine = controller.layers[0].stateMachine;
            machine.defaultState = State(machine, hangClip, new Vector3(300f, 0f));
            State(machine, climbClip, new Vector3(300f, 80f));
            State(machine, hitClip, new Vector3(300f, 160f));
            State(machine, fallClip, new Vector3(300f, 240f));
            AssetDatabase.SaveAssets();
        }

        /// <summary>Removes hand-made clips from the folder that the generated set replaces (e.g. an empty "hit.anim").</summary>
        private static void RemoveStaleClips(string directory)
        {
            var generated = new[] { "Hang", "Climb", "Hit", "Fall" };
            foreach (var path in Directory.GetFiles(directory, "*.anim"))
            {
                string name = Path.GetFileNameWithoutExtension(path);
                if (generated.Any(g => string.Equals(g, name, System.StringComparison.OrdinalIgnoreCase)))
                    AssetDatabase.DeleteAsset(path.Replace('\\', '/'));
            }
        }

        private static AnimatorState State(AnimatorStateMachine machine, AnimationClip clip, Vector3 position)
        {
            var state = machine.AddState(clip.name, position);
            state.motion = clip;
            state.writeDefaultValues = true;
            return state;
        }

        /// <summary>Looping clip: sprite frames at a fixed rate (last frame held until <paramref name="length"/>), plus optional motion curves.</summary>
        private static AnimationClip Clip(string directory, string name, float frameTime, Sprite[] frames, float length, System.Action<AnimationClip> motion)
        {
            var clip = new AnimationClip { name = name, frameRate = 60f };

            var keys = frames.Select((sprite, i) => new ObjectReferenceKeyframe { time = i * frameTime, value = sprite })
                .Append(new ObjectReferenceKeyframe { time = length, value = frames[frames.Length - 1] })
                .ToArray();
            AnimationUtility.SetObjectReferenceCurve(clip, EditorCurveBinding.PPtrCurve("", typeof(SpriteRenderer), SpriteProperty), keys);

            motion(clip);

            var settings = AnimationUtility.GetAnimationClipSettings(clip);
            settings.loopTime = true;
            AnimationUtility.SetAnimationClipSettings(clip, settings);

            AssetDatabase.CreateAsset(clip, $"{directory}/{name}.anim");
            return clip;
        }

        private static void Rotation(AnimationClip clip, params (float time, float z)[] keys)
        {
            Float(clip, "localEulerAnglesRaw.x", keys.Select(k => (k.time, 0f)));
            Float(clip, "localEulerAnglesRaw.y", keys.Select(k => (k.time, 0f)));
            Float(clip, "localEulerAnglesRaw.z", keys.Select(k => (k.time, k.z)));
        }

        private static void Position(AnimationClip clip, params (float time, float x, float y)[] keys)
        {
            Float(clip, "m_LocalPosition.x", keys.Select(k => (k.time, k.x)));
            Float(clip, "m_LocalPosition.y", keys.Select(k => (k.time, k.y)));
            Float(clip, "m_LocalPosition.z", keys.Select(k => (k.time, 0f)));
        }

        private static void Scale(AnimationClip clip, params (float time, float x, float y)[] keys)
        {
            Float(clip, "m_LocalScale.x", keys.Select(k => (k.time, k.x)));
            Float(clip, "m_LocalScale.y", keys.Select(k => (k.time, k.y)));
            Float(clip, "m_LocalScale.z", keys.Select(k => (k.time, 1f)));
        }

        private static void Float(AnimationClip clip, string property, System.Collections.Generic.IEnumerable<(float time, float value)> keys)
        {
            var curve = new AnimationCurve(keys.Select(k => new Keyframe(k.time, k.value)).ToArray());
            for (int i = 0; i < curve.length; i++)
                AnimationUtility.SetKeyLeftTangentMode(curve, i, AnimationUtility.TangentMode.ClampedAuto);
            for (int i = 0; i < curve.length; i++)
                AnimationUtility.SetKeyRightTangentMode(curve, i, AnimationUtility.TangentMode.ClampedAuto);
            AnimationUtility.SetEditorCurve(clip, EditorCurveBinding.FloatCurve("", typeof(Transform), property), curve);
        }
    }
}
