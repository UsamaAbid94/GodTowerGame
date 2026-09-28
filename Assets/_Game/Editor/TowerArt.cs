using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;
using static GodTower.EditorTools.AssetUtil;

namespace GodTower.EditorTools
{
    /// <summary>
    /// The 3D carved stone tower (the reference's sage-green Karin tower), generated from code:
    /// an albedo + normal map with engraved bands (zigzags, waves, rosettes, flutes, chevrons) that
    /// tile seamlessly around the column, a lathe-turned column module whose rims step out in real
    /// geometry, a ribbed lotus-dome base and a pointed summit cap, and a URP Lit stone material.
    /// </summary>
    internal static class TowerArt
    {
        public const string Dir = "Assets/_Game/Art/Tower";
        public const float ModuleHeight = 5.6f;
        public const float ShaftRadius = 1.4f;
        public const float CapHeight = 3.2f;

        private const int TexWidth = 512;   // One quarter of the circumference.
        private const int TexHeight = 1024; // One module.
        private const int UvRepeatsAround = 4;
        private const int RadialSegments = 48;
        private const float RimScale = 1.13f;
        private const float RimBevel = 0.06f;

        private enum Band
        {
            Plain,
            Rim,
            Rings,
            Zigzag,
            Wave,
            Dots,
            Flutes,
            Chevron
        }

        /// <summary>Bands from the top of a module down; rows sum to <see cref="TexHeight"/>.</summary>
        private static readonly (Band band, int rows)[] ModuleBands =
        {
            (Band.Rim, 36), (Band.Rings, 120), (Band.Zigzag, 140), (Band.Plain, 40), (Band.Wave, 120),
            (Band.Rim, 32), (Band.Dots, 100), (Band.Flutes, 100), (Band.Rim, 36), (Band.Rings, 120), (Band.Chevron, 180),
        };

        /// <summary>V coordinate of the plain band, used for the base and cap so they read as clean stone.</summary>
        private const float PlainV = 1f - 316f / TexHeight;

        public struct Result
        {
            public Mesh Module;
            public Mesh Base;
            public Mesh Cap;
            public Material Stone;
        }

        public static Result Build()
        {
            Directory.CreateDirectory(Dir);
            AssetDatabase.Refresh();

            PaintTextures(out var albedoPath, out var normalPath);
            return new Result
            {
                Stone = BuildMaterial(albedoPath, normalPath),
                Module = SaveMesh(BuildModule(), "TowerModule"),
                Base = SaveMesh(BuildBase(), "TowerBase"),
                Cap = SaveMesh(BuildCap(), "TowerCap"),
            };
        }

        // ---- Textures ---------------------------------------------------------------------------

        private static void PaintTextures(out string albedoPath, out string normalPath)
        {
            var height = new float[TexWidth * TexHeight];
            var albedo = new Color32[TexWidth * TexHeight];

            int row = 0;
            foreach (var (band, rows) in ModuleBands)
            {
                for (int local = 0; local < rows; local++, row++)
                {
                    int y = TexHeight - 1 - row; // Texture rows run bottom-up.
                    for (int x = 0; x < TexWidth; x++)
                    {
                        float groove = Pattern(band, x, local, rows);
                        if (local < 2 && band != Band.Rim)
                            groove = Mathf.Max(groove, 0.8f); // Seam line between bands.

                        float shade = (band == Band.Rim ? 1.04f : 1f) * (1f - 0.3f * groove);
                        shade *= 1f + (Hash(x, y) - 0.5f) * 0.06f;
                        albedo[y * TexWidth + x] = new Color(0.95f * shade, 0.96f * shade, 0.92f * shade, 1f);
                        height[y * TexWidth + x] = -groove;
                    }
                }
            }

            albedoPath = WriteTexture("TowerStone_Albedo", albedo);
            normalPath = WriteTexture("TowerStone_Normal", NormalsFromHeight(height, 3f));
            ConfigureTexture(albedoPath, false);
            ConfigureTexture(normalPath, true);
        }

        /// <summary>Engraving depth in 0..1 for a band pixel. All periods divide the texture width so it wraps seamlessly.</summary>
        private static float Pattern(Band band, float x, float ly, float h)
        {
            switch (band)
            {
                case Band.Rings:
                    return 0.5f - 0.5f * Mathf.Cos(2f * Mathf.PI * ly / 30f);

                case Band.Zigzag:
                {
                    float tri = Mathf.Abs(Frac(x / 64f) * 2f - 1f);
                    float inner = h - 36f;
                    float a = Line(Mathf.Abs(ly - 18f - tri * inner), 7f);
                    float b = Line(Mathf.Abs(ly - 18f - (1f - tri) * inner), 7f);
                    return Mathf.Max(a, b) * Margin(ly, h, 12f);
                }

                case Band.Wave:
                {
                    float phase = 2f * Mathf.PI * x / 128f;
                    float a = Line(Mathf.Abs(ly - (h * 0.35f + h * 0.17f * Mathf.Sin(phase))), 7f);
                    float b = Line(Mathf.Abs(ly - (h * 0.65f + h * 0.17f * Mathf.Sin(phase + Mathf.PI))), 7f);
                    return Mathf.Max(a, b);
                }

                case Band.Dots:
                {
                    float cell = Frac(x / 64f) * 64f - 32f;
                    float dist = Mathf.Sqrt(cell * cell + (ly - h * 0.5f) * (ly - h * 0.5f));
                    return Mathf.Max(Line(Mathf.Abs(dist - 22f), 6f), dist < 9f ? 1f : 0f);
                }

                case Band.Flutes:
                    return (0.5f - 0.5f * Mathf.Cos(2f * Mathf.PI * x / 32f)) * Margin(ly, h, 10f);

                case Band.Chevron:
                {
                    float tri = Mathf.Abs(Frac(x / 64f) * 2f - 1f);
                    float best = 0f;
                    for (int k = 0; k < 3; k++)
                        best = Mathf.Max(best, Line(Mathf.Abs(ly - (28f + k * 48f + tri * 40f)), 7f));
                    return best;
                }

                default:
                    return 0f;
            }
        }

        private static Color32[] NormalsFromHeight(float[] height, float strength)
        {
            var normals = new Color32[height.Length];
            for (int y = 0; y < TexHeight; y++)
            for (int x = 0; x < TexWidth; x++)
            {
                float left = height[y * TexWidth + (x + TexWidth - 1) % TexWidth];
                float right = height[y * TexWidth + (x + 1) % TexWidth];
                float down = height[Mathf.Max(0, y - 1) * TexWidth + x];
                float up = height[Mathf.Min(TexHeight - 1, y + 1) * TexWidth + x];
                var n = new Vector3((left - right) * strength, (down - up) * strength, 1f).normalized;
                normals[y * TexWidth + x] = new Color(n.x * 0.5f + 0.5f, n.y * 0.5f + 0.5f, n.z * 0.5f + 0.5f, 1f);
            }
            return normals;
        }

        private static string WriteTexture(string name, Color32[] pixels)
        {
            var texture = new Texture2D(TexWidth, TexHeight, TextureFormat.RGBA32, false);
            texture.SetPixels32(pixels);
            texture.Apply();
            string path = $"{Dir}/{name}.png";
            File.WriteAllBytes(path, texture.EncodeToPNG());
            UnityEngine.Object.DestroyImmediate(texture);
            AssetDatabase.ImportAsset(path, ImportAssetOptions.ForceSynchronousImport);
            return path;
        }

        private static void ConfigureTexture(string path, bool normalMap)
        {
            var importer = (TextureImporter)AssetImporter.GetAtPath(path);
            importer.textureType = normalMap ? TextureImporterType.NormalMap : TextureImporterType.Default;
            importer.sRGBTexture = !normalMap;
            importer.wrapMode = TextureWrapMode.Repeat;
            importer.mipmapEnabled = true;
            importer.anisoLevel = 4;
            importer.maxTextureSize = 1024;
            importer.textureCompression = TextureImporterCompression.Compressed;
            importer.SaveAndReimport();
        }

        private static Material BuildMaterial(string albedoPath, string normalPath)
        {
            string path = Dir + "/TowerStone.mat";
            var material = AssetDatabase.LoadAssetAtPath<Material>(path);
            if (material == null)
            {
                material = new Material(Shader.Find("Universal Render Pipeline/Lit"));
                AssetDatabase.CreateAsset(material, path);
            }

            material.SetTexture("_BaseMap", Load<Texture2D>(albedoPath));
            material.SetTexture("_BumpMap", Load<Texture2D>(normalPath));
            material.SetFloat("_BumpScale", 1f);
            material.EnableKeyword("_NORMALMAP");
            material.SetColor("_BaseColor", Color.white);
            material.SetFloat("_Smoothness", 0.22f);
            material.SetFloat("_Metallic", 0f);
            material.enableInstancing = true;
            EditorUtility.SetDirty(material);
            return material;
        }

        // ---- Meshes -----------------------------------------------------------------------------

        /// <summary>A point on a lathe profile: height, radius, texture V, and whether it carries radial ribs.</summary>
        private readonly struct ProfilePoint
        {
            public readonly float Y, R, V;
            public readonly bool Ribbed;

            public ProfilePoint(float y, float r, float v, bool ribbed = false)
            {
                Y = y; R = r; V = v; Ribbed = ribbed;
            }
        }

        private static Mesh BuildModule()
        {
            var points = new List<ProfilePoint>();
            int row = 0;
            foreach (var (band, rows) in ModuleBands)
            {
                float yTop = ModuleHeight * (1f - (float)row / TexHeight);
                float yBottom = ModuleHeight * (1f - (float)(row + rows) / TexHeight);
                float vTop = 1f - (float)row / TexHeight;
                float vBottom = 1f - (float)(row + rows) / TexHeight;

                if (band == Band.Rim)
                {
                    // Step out to the rim with small bevels so it catches a highlight on top and a shadow below.
                    float rim = ShaftRadius * RimScale;
                    points.Add(new ProfilePoint(yTop, ShaftRadius, vTop));
                    points.Add(new ProfilePoint(yTop - RimBevel, rim, Mathf.Lerp(vTop, vBottom, 0.2f)));
                    points.Add(new ProfilePoint(yBottom + RimBevel, rim, Mathf.Lerp(vTop, vBottom, 0.8f)));
                    points.Add(new ProfilePoint(yBottom, ShaftRadius, vBottom));
                }
                else
                {
                    points.Add(new ProfilePoint(yTop, ShaftRadius, vTop));
                    points.Add(new ProfilePoint(yBottom, ShaftRadius, vBottom));
                }
                row += rows;
            }
            return Lathe("TowerModule", points, 0f);
        }

        /// <summary>Lotus neck, rims and the wide ribbed dome the tower rises from (top at y = 0).</summary>
        private static Mesh BuildBase()
        {
            var points = new List<ProfilePoint>
            {
                new ProfilePoint(0f, ShaftRadius, PlainV),
                new ProfilePoint(-0.3f, 1.48f, PlainV),
                new ProfilePoint(-0.3f, 1.72f, PlainV),
                new ProfilePoint(-0.46f, 1.72f, PlainV),
                new ProfilePoint(-0.46f, 1.56f, PlainV),
            };
            Curve(points, -0.46f, -1.2f, 1.56f, 2.25f, t => Mathf.Sqrt(t), true);
            points.Add(new ProfilePoint(-1.2f, 2.5f, PlainV));
            points.Add(new ProfilePoint(-1.36f, 2.5f, PlainV));
            points.Add(new ProfilePoint(-1.36f, 2.4f, PlainV));
            Curve(points, -1.36f, -3.0f, 2.4f, 4.2f, t => Mathf.Sin(t * Mathf.PI * 0.5f), true);
            points.Add(new ProfilePoint(-3.0f, 4.32f, PlainV));
            points.Add(new ProfilePoint(-3.25f, 4.32f, PlainV));
            points.Add(new ProfilePoint(-3.25f, 4.12f, PlainV));
            points.Add(new ProfilePoint(-3.6f, 4.12f, PlainV));
            return Lathe("TowerBase", points, 0.045f);
        }

        /// <summary>Flared capital with a platform and a pointed, ribbed roof (bottom at y = 0).</summary>
        private static Mesh BuildCap()
        {
            var points = new List<ProfilePoint> { new ProfilePoint(CapHeight, 0.03f, PlainV, true) };
            Curve(points, CapHeight, 2.3f, 0.03f, 1.25f, t => Mathf.Pow(t, 0.7f), true);
            points.Add(new ProfilePoint(2.3f, 1.95f, PlainV));
            points.Add(new ProfilePoint(2.1f, 1.95f, PlainV));
            points.Add(new ProfilePoint(2.1f, 1.5f, PlainV));
            points.Add(new ProfilePoint(1.3f, 1.5f, PlainV));
            points.Add(new ProfilePoint(1.3f, 1.8f, PlainV));
            points.Add(new ProfilePoint(1.1f, 1.8f, PlainV));
            points.Add(new ProfilePoint(1.1f, 1.62f, PlainV));
            Curve(points, 1.1f, 0.35f, 1.62f, 1.46f, t => t * t, true);
            points.Add(new ProfilePoint(0.35f, 1.5f, PlainV));
            points.Add(new ProfilePoint(0f, ShaftRadius, PlainV));
            return Lathe("TowerCap", points, 0.05f);
        }

        private static void Curve(List<ProfilePoint> points, float yFrom, float yTo, float rFrom, float rTo, Func<float, float> ease, bool ribbed)
        {
            const int steps = 8;
            for (int i = 1; i <= steps; i++)
            {
                float t = (float)i / steps;
                points.Add(new ProfilePoint(Mathf.Lerp(yFrom, yTo, t), Mathf.Lerp(rFrom, rTo, ease(t)), PlainV, ribbed));
            }
        }

        /// <summary>
        /// Surface of revolution from a top-to-bottom profile. Each profile segment gets its own ring of
        /// vertices so steps and rims keep crisp edges. Ribbed points bulge in <c>ribCount</c> soft lobes.
        /// </summary>
        private static Mesh Lathe(string name, List<ProfilePoint> points, float ribDepth)
        {
            const int ribCount = 12;
            var vertices = new List<Vector3>();
            var normals = new List<Vector3>();
            var uvs = new List<Vector2>();
            var triangles = new List<int>();

            for (int p = 0; p < points.Count - 1; p++)
            {
                var top = points[p];
                var bottom = points[p + 1];
                var profileNormal = new Vector2(-(bottom.Y - top.Y), bottom.R - top.R).normalized; // (radial, up)
                if (profileNormal.sqrMagnitude < 0.5f)
                    continue;

                int start = vertices.Count;
                for (int ring = 0; ring < 2; ring++)
                {
                    var point = ring == 0 ? top : bottom;
                    for (int s = 0; s <= RadialSegments; s++)
                    {
                        float u = (float)s / RadialSegments;
                        float angle = u * Mathf.PI * 2f;
                        float rib = point.Ribbed ? 1f + ribDepth * Mathf.Abs(Mathf.Cos(angle * ribCount * 0.5f)) : 1f;
                        float radius = point.R * rib;
                        var dir = new Vector3(Mathf.Cos(angle), 0f, Mathf.Sin(angle));

                        vertices.Add(dir * radius + Vector3.up * point.Y);
                        normals.Add((dir * profileNormal.x + Vector3.up * profileNormal.y).normalized);
                        uvs.Add(new Vector2(u * UvRepeatsAround, point.V));
                    }
                }

                int stride = RadialSegments + 1;
                for (int s = 0; s < RadialSegments; s++)
                {
                    int a = start + s, b = a + 1, c = a + stride, d = c + 1;
                    triangles.Add(a); triangles.Add(b); triangles.Add(c);
                    triangles.Add(b); triangles.Add(d); triangles.Add(c);
                }
            }

            var mesh = new Mesh { name = name };
            mesh.SetVertices(vertices);
            mesh.SetNormals(normals);
            mesh.SetUVs(0, uvs);
            mesh.SetTriangles(triangles, 0);
            mesh.RecalculateTangents();
            mesh.RecalculateBounds();
            return mesh;
        }

        private static Mesh SaveMesh(Mesh mesh, string name)
        {
            string path = $"{Dir}/{name}.asset";
            var existing = AssetDatabase.LoadAssetAtPath<Mesh>(path);
            if (existing == null)
            {
                AssetDatabase.CreateAsset(mesh, path);
                return mesh;
            }

            EditorUtility.CopySerialized(mesh, existing);
            UnityEngine.Object.DestroyImmediate(mesh);
            EditorUtility.SetDirty(existing);
            return existing;
        }

        private static float Line(float distance, float width) => Mathf.Clamp01(1f - distance / width);

        private static float Margin(float ly, float h, float m) => ly < m || ly > h - m ? 0f : 1f;

        private static float Frac(float v) => v - Mathf.Floor(v);

        private static float Hash(int x, int y)
        {
            unchecked
            {
                uint n = (uint)(x * 374761393 + y * 668265263);
                n = (n ^ (n >> 13)) * 1274126177;
                return (n & 0xFFFF) / 65535f;
            }
        }
    }
}
