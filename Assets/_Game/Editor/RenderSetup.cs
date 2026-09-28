using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

namespace GodTower.EditorTools
{
    /// <summary>
    /// 3D rendering setup: moves the project's URP asset from the 2D renderer to the Universal (forward)
    /// renderer for real lights, shadows and depth, and configures scene lighting (sun, sky ambient,
    /// atmospheric fog that fades the upper tower into the sky, as in the reference).
    /// </summary>
    internal static class RenderSetup
    {
        private const string RendererPath = "Assets/Settings/UniversalRenderer.asset";

        public static void EnsureUniversalRenderer()
        {
            var pipeline = GraphicsSettings.defaultRenderPipeline as UniversalRenderPipelineAsset
                           ?? QualitySettings.renderPipeline as UniversalRenderPipelineAsset;
            if (pipeline == null)
            {
                Debug.LogWarning("[God Tower] No URP asset assigned; skipping renderer setup.");
                return;
            }

            var data = AssetDatabase.LoadAssetAtPath<UniversalRendererData>(RendererPath);
            if (data == null)
            {
                data = ScriptableObject.CreateInstance<UniversalRendererData>();
                AssetDatabase.CreateAsset(data, RendererPath);
            }

            var so = new SerializedObject(pipeline);
            var list = so.FindProperty("m_RendererDataList");
            list.arraySize = 1;
            list.GetArrayElementAtIndex(0).objectReferenceValue = data;
            so.FindProperty("m_DefaultRendererIndex").intValue = 0;
            so.FindProperty("m_MSAA").intValue = 4;
            so.FindProperty("m_ShadowDistance").floatValue = 60f;
            var soft = so.FindProperty("m_SoftShadowsSupported");
            if (soft != null)
                soft.boolValue = true;
            so.ApplyModifiedPropertiesWithoutUndo();
            EditorUtility.SetDirty(pipeline);
        }

        /// <summary>
        /// Cartoon FX compiles its particle shaders through a custom importer that auto-detects the pipeline
        /// at import time. They were imported while the project had no active URP renderer and came out as
        /// Built-in shaders, which draw nothing under URP. Force URP and reimport.
        /// </summary>
        public static void ForceCartoonFxToUrp()
        {
            const int forceUniversalRenderPipeline = 2; // CFXR_ShaderImporter.RenderPipeline.ForceUniversalRenderPipeline
            foreach (var guid in AssetDatabase.FindAssets("", new[] { "Assets/JMO Assets/Cartoon FX Remaster/CFXR Assets/Shaders" }))
            {
                string path = AssetDatabase.GUIDToAssetPath(guid);
                if (!path.EndsWith(".cfxrshader"))
                    continue;

                var importer = AssetImporter.GetAtPath(path);
                var so = new SerializedObject(importer);
                var mode = so.FindProperty("renderPipelineDetection");
                if (mode == null || mode.enumValueIndex == forceUniversalRenderPipeline)
                    continue;

                mode.enumValueIndex = forceUniversalRenderPipeline;
                so.ApplyModifiedPropertiesWithoutUndo();
                importer.SaveAndReimport();
            }
        }

        /// <summary>Sun from the upper left, sky-tinted ambient light, and distance fog in the sky colour. Call after creating a scene.</summary>
        public static void SetupLighting(Color sky)
        {
            var sun = new GameObject("Sun").AddComponent<Light>();
            sun.type = LightType.Directional;
            sun.transform.rotation = Quaternion.Euler(38f, 32f, 0f);
            sun.color = new Color(1f, 0.95f, 0.86f);
            sun.intensity = 1.25f;
            sun.shadows = LightShadows.Soft;
            sun.shadowStrength = 0.6f;

            RenderSettings.sun = sun;
            RenderSettings.ambientMode = AmbientMode.Trilight;
            RenderSettings.ambientSkyColor = Color.Lerp(sky, Color.white, 0.35f);
            RenderSettings.ambientEquatorColor = new Color(0.62f, 0.68f, 0.74f);
            RenderSettings.ambientGroundColor = new Color(0.38f, 0.4f, 0.44f);

            RenderSettings.fog = true;
            RenderSettings.fogMode = FogMode.Linear;
            RenderSettings.fogColor = sky;
            RenderSettings.fogStartDistance = 55f;
            RenderSettings.fogEndDistance = 190f;
        }
    }
}
