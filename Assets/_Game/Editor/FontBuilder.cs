using System;
using System.IO;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;
using static GodTower.EditorTools.AssetUtil;

namespace GodTower.EditorTools
{
    /// <summary>
    /// TextMeshPro setup for the chunky hyper-casual look: imports TMP's essential resources on first
    /// use, builds an SDF font asset from Luckiest Guy (Apache 2.0) and three style materials
    /// (thick outline + soft drop shadow) so every label reads as a raised, 2.5D sticker.
    /// </summary>
    internal static class FontBuilder
    {
        private const string FontDir = "Assets/_Game/Art/Fonts";
        private const string SourceFontPath = FontDir + "/LuckiestGuy-Regular.ttf";
        private const string FontAssetPath = FontDir + "/LuckiestGuy SDF.asset";
        private const string TmpSettingsPath = "Assets/TextMesh Pro/Resources/TMP Settings.asset";

        public struct Styles
        {
            public TMP_FontAsset Font;
            /// <summary>Big headings: thick dark outline, deep drop shadow.</summary>
            public Material Title;
            /// <summary>Regular labels: medium outline, small shadow.</summary>
            public Material Body;
            /// <summary>Dark text on a white outline (HUD numbers over the sky).</summary>
            public Material Light;
        }

        public static bool EssentialsImported => File.Exists(TmpSettingsPath);

        /// <summary>Imports TMP Essential Resources (shaders, settings) and calls <paramref name="onDone"/> when Unity finishes.</summary>
        public static void ImportEssentials(Action onDone)
        {
            var ugui = UnityEditor.PackageManager.PackageInfo.FindForAssetPath("Packages/com.unity.ugui/package.json")
                       ?? throw new InvalidOperationException("com.unity.ugui package not found.");
            string package = Path.Combine(ugui.resolvedPath, "Package Resources", "TMP Essential Resources.unitypackage");

            void Completed(string _)
            {
                AssetDatabase.importPackageCompleted -= Completed;
                onDone();
            }

            AssetDatabase.importPackageCompleted += Completed;
            AssetDatabase.ImportPackage(package, false);
        }

        public static Styles Build()
        {
            ShaderUtilities.GetShaderPropertyIDs();

            var font = AssetDatabase.LoadAssetAtPath<TMP_FontAsset>(FontAssetPath);
            if (font == null)
            {
                font = TMP_FontAsset.CreateFontAsset(Load<Font>(SourceFontPath), 90, 9, GlyphRenderMode.SDFAA, 1024, 1024);
                font.name = "LuckiestGuy SDF";
                AssetDatabase.CreateAsset(font, FontAssetPath);
                font.atlasTextures[0].name = "LuckiestGuy Atlas";
                font.material.name = "LuckiestGuy Material";
                AssetDatabase.AddObjectToAsset(font.atlasTextures[0], font);
                AssetDatabase.AddObjectToAsset(font.material, font);
            }
            font.TryAddCharacters(" !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~");
            EditorUtility.SetDirty(font);

            var ink = new Color(0.06f, 0.12f, 0.32f);
            return new Styles
            {
                Font = font,
                Title = Preset(font, "Title", ink, 0.3f, new Color(0f, 0f, 0f, 0.55f), -1.4f, 0.45f),
                Body = Preset(font, "Body", ink, 0.22f, new Color(0f, 0f, 0f, 0.45f), -0.9f, 0.25f),
                Light = Preset(font, "Light", Color.white, 0.25f, new Color(0f, 0f, 0f, 0.3f), -0.7f, 0.2f),
            };
        }

        private static Material Preset(TMP_FontAsset font, string name, Color outline, float outlineWidth,
            Color shadow, float shadowOffsetY, float shadowDilate)
        {
            string path = $"{FontDir}/LuckiestGuy {name}.mat";
            var material = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (material == null)
            {
                material = new Material(font.material);
                AssetDatabase.CreateAsset(material, path);
            }
            else
            {
                material.shader = font.material.shader;
                material.CopyPropertiesFromMaterial(font.material);
            }

            material.SetFloat(ShaderUtilities.ID_FaceDilate, 0.1f);
            material.EnableKeyword(ShaderUtilities.Keyword_Outline);
            material.SetColor(ShaderUtilities.ID_OutlineColor, outline);
            material.SetFloat(ShaderUtilities.ID_OutlineWidth, outlineWidth);

            material.EnableKeyword(ShaderUtilities.Keyword_Underlay);
            material.SetColor(ShaderUtilities.ID_UnderlayColor, shadow);
            material.SetFloat(ShaderUtilities.ID_UnderlayOffsetX, 0.2f);
            material.SetFloat(ShaderUtilities.ID_UnderlayOffsetY, shadowOffsetY);
            material.SetFloat(ShaderUtilities.ID_UnderlayDilate, shadowDilate);
            material.SetFloat(ShaderUtilities.ID_UnderlaySoftness, 0.15f);

            EditorUtility.SetDirty(material);
            return material;
        }
    }
}
