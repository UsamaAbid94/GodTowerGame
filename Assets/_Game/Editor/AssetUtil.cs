using System.IO;
using UnityEditor;
using UnityEngine;

namespace GodTower.EditorTools
{
    /// <summary>Asset loading helpers shared by the editor build steps.</summary>
    internal static class AssetUtil
    {
        public static T Load<T>(string path) where T : Object =>
            AssetDatabase.LoadAssetAtPath<T>(path) ?? throw new FileNotFoundException($"Missing asset {path}");

        /// <summary>Loads the asset at <paramref name="path"/>, creating it first if needed, so rebuilds keep GUIDs stable.</summary>
        public static T LoadOrCreate<T>(string path) where T : ScriptableObject
        {
            var asset = AssetDatabase.LoadAssetAtPath<T>(path);
            if (asset != null)
                return asset;

            asset = ScriptableObject.CreateInstance<T>();
            AssetDatabase.CreateAsset(asset, path);
            return asset;
        }
    }
}
