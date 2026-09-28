using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEditor.U2D.Sprites;
using UnityEngine;

namespace GodTower.EditorTools
{
    /// <summary>
    /// Game-ready sprites. Character, glove and effect sprites come from the transparent AI sheet
    /// (sliced in the Sprite Editor); clouds and UI shapes are painted procedurally. The 3D tower is
    /// built by <see cref="TowerArt"/>.
    /// </summary>
    internal static class ArtPipeline
    {
        public const string SourceDir = "Assets/_Game/Art/Source";
        public const string GeneratedDir = "Assets/_Game/Art/Generated";

        public const string SheetPath = GeneratedDir + "/testgamesprites.png";
        public const string SkyPath = SourceDir + "/background.png";

        private const float SheetPpu = 150f;

        /// <summary>
        /// A sprite on the sheet, found by a point inside its slice (top-left origin, sheet pixels) rather than
        /// by slice index, so re-slicing in the Sprite Editor doesn't break the mapping.
        /// </summary>
        public readonly struct SheetSprite
        {
            public readonly Vector2 Point;

            /// <summary>Optional pivot (top-left origin, sheet pixels). Climber frames pivot on the belt so the torso stays put between frames.</summary>
            public readonly Vector2? Pivot;

            public SheetSprite(float x, float y, float pivotX = -1f, float pivotY = -1f)
            {
                Point = new Vector2(x, y);
                Pivot = pivotX < 0f ? (Vector2?)null : new Vector2(pivotX, pivotY);
            }
        }

        public static readonly SheetSprite ClimberHang = new SheetSprite(140, 250, 140, 272);
        public static readonly SheetSprite ClimberClimb1 = new SheetSprite(370, 250, 385, 258);
        public static readonly SheetSprite ClimberClimb2 = new SheetSprite(640, 280, 640, 272);
        public static readonly SheetSprite ClimberClimb3 = new SheetSprite(870, 230, 860, 212);
        public static readonly SheetSprite ClimberHit = new SheetSprite(1100, 280, 1098, 266);
        public static readonly SheetSprite ClimberFall = new SheetSprite(1370, 380, 1358, 392);

        /// <summary>Boxing gloves; <see cref="GloveForwardAngles"/> gives the direction (0 = right, 90 = up) the knuckles face.</summary>
        public static readonly SheetSprite[] Gloves =
        {
            new SheetSprite(240, 620), new SheetSprite(540, 650), new SheetSprite(780, 640),
            new SheetSprite(1055, 650), new SheetSprite(1345, 650),
        };
        public static readonly float[] GloveForwardAngles = { 130f, 90f, 50f, 10f, 90f };

        public static readonly SheetSprite FxStar = new SheetSprite(245, 880);
        public static readonly SheetSprite FxPuff = new SheetSprite(560, 900);
        public static readonly SheetSprite FxFlash = new SheetSprite(870, 880);
        public static readonly SheetSprite FxExplosion = new SheetSprite(1265, 880);

        private static readonly SheetSprite[] ClimberFrames =
            { ClimberHang, ClimberClimb1, ClimberClimb2, ClimberClimb3, ClimberHit, ClimberFall };

        public static string GeneratedPath(string name) => $"{GeneratedDir}/{name}.png";

        public static Sprite Load(string name) => AssetDatabase.LoadAssetAtPath<Sprite>(GeneratedPath(name));

        // ---- Entry point ------------------------------------------------------------------------

        public static void Run()
        {
            ConfigureSheet();

            WriteSprite("cloud", DrawCloud(), 100f, new Vector2(0.5f, 0.5f));

            // Full-rect so it can also be 9-sliced on SpriteRenderers (the Kamehameha beam).
            WriteSprite("ui_bar", DrawCapsule(32, 128, 16f), 100f, new Vector2(0.5f, 0.5f), fullRect: true, border: new Vector4(0, 16, 0, 16));
            WriteSprite("ui_round", DrawRoundedRect(64, 64, 28f), 100f, new Vector2(0.5f, 0.5f), border: new Vector4(30, 30, 30, 30));
            WriteSprite("ui_circle", DrawCircle(128), 100f, new Vector2(0.5f, 0.5f));
            WriteSprite("ui_glow", DrawGlow(128), 100f, new Vector2(0.5f, 0.5f));
            WriteSprite("ui_vignette", DrawVignette(256), 100f, new Vector2(0.5f, 0.5f));

            // The kit's warning icon is ~0.6 units at 100 PPU; the hazard warning wants ~1 unit.
            var warning = LoadTexture("Assets/Hyper_Casual_UI/Sprites/Icons/danger.png");
            WriteSprite("warning", warning, warning.width / 1.1f, new Vector2(0.5f, 0.5f));
        }

        // ---- Sprite sheet -----------------------------------------------------------------------

        public static Sprite Load(SheetSprite entry)
        {
            var sprites = AssetDatabase.LoadAllAssetsAtPath(SheetPath).OfType<Sprite>().ToArray();
            if (sprites.Length == 0)
                throw new InvalidOperationException($"{SheetPath} has no sprites - slice it in the Sprite Editor (Multiple mode).");

            var point = ToSheetSpace(entry.Point, sprites[0].texture.height);
            return sprites.Where(s => s.rect.Contains(point))
                       .OrderByDescending(s => s.rect.width * s.rect.height)
                       .FirstOrDefault()
                   ?? throw new InvalidOperationException($"No slice on {SheetPath} contains {entry.Point}.");
        }

        /// <summary>World scale for the whole sheet plus belt pivots on the climber frames. Slice rects are left untouched.</summary>
        private static void ConfigureSheet()
        {
            var importer = (TextureImporter)AssetImporter.GetAtPath(SheetPath)
                           ?? throw new FileNotFoundException($"Sprite sheet missing: {SheetPath}");
            importer.spritePixelsPerUnit = SheetPpu;
            importer.mipmapEnabled = false;
            importer.alphaIsTransparency = true;

            var factory = new SpriteDataProviderFactories();
            factory.Init();
            var provider = factory.GetSpriteEditorDataProviderFromObject(importer);
            provider.InitSpriteEditorDataProvider();

            var rects = provider.GetSpriteRects();
            int textureHeight = AssetDatabase.LoadAssetAtPath<Texture2D>(SheetPath).height;
            foreach (var frame in ClimberFrames)
            {
                var point = ToSheetSpace(frame.Point, textureHeight);
                var rect = rects.Where(r => r.rect.Contains(point)).OrderByDescending(r => r.rect.width * r.rect.height).FirstOrDefault()
                           ?? throw new InvalidOperationException($"No slice on {SheetPath} contains {frame.Point}.");
                var pivot = ToSheetSpace(frame.Pivot.Value, textureHeight);
                rect.alignment = SpriteAlignment.Custom;
                rect.pivot = new Vector2((pivot.x - rect.rect.x) / rect.rect.width, (pivot.y - rect.rect.y) / rect.rect.height);
            }

            provider.SetSpriteRects(rects);
            provider.Apply();
            importer.SaveAndReimport();
        }

        private static Vector2 ToSheetSpace(Vector2 topLeft, int textureHeight) => new Vector2(topLeft.x, textureHeight - topLeft.y);

        // ---- Clouds & UI shapes -----------------------------------------------------------------

        private static Texture2D DrawCloud()
        {
            const int w = 256, h = 128;
            var circles = new[]
            {
                new Vector3(70, 70, 40), new Vector3(122, 52, 48), new Vector3(176, 66, 40),
                new Vector3(214, 86, 27), new Vector3(40, 88, 26),
            };

            var px = new Color32[w * h];
            for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
            {
                float fx = x + 0.5f, fy = h - y - 0.5f; // fy: top-origin.
                float sd = float.MaxValue;
                foreach (var c in circles)
                    sd = Mathf.Min(sd, Vector2.Distance(new Vector2(fx, fy), new Vector2(c.x, c.y)) - c.z);

                // Flat-ish base.
                float box = Mathf.Max(Mathf.Max(30f - fx, fx - 226f), Mathf.Max(76f - fy, fy - 108f));
                sd = Mathf.Min(sd, box);

                float a = Mathf.Clamp01(0.5f - sd);
                if (a <= 0f) continue;

                float shadow = Mathf.Clamp01((fy - 62f) / 44f);
                var col = Color.Lerp(Color.white, new Color(0.78f, 0.86f, 0.96f), shadow * 0.9f);
                col.a = a;
                px[y * w + x] = col;
            }

            return NewTexture(w, h, px);
        }

        private static Texture2D DrawCapsule(int w, int h, float radius) => DrawRoundedRect(w, h, radius);

        private static Texture2D DrawRoundedRect(int w, int h, float radius)
        {
            var px = new Color32[w * h];
            for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
            {
                float qx = Mathf.Abs(x + 0.5f - w * 0.5f) - (w * 0.5f - radius);
                float qy = Mathf.Abs(y + 0.5f - h * 0.5f) - (h * 0.5f - radius);
                float outside = new Vector2(Mathf.Max(qx, 0f), Mathf.Max(qy, 0f)).magnitude;
                float sd = outside + Mathf.Min(Mathf.Max(qx, qy), 0f) - radius;
                px[y * w + x] = new Color(1f, 1f, 1f, Mathf.Clamp01(0.5f - sd));
            }
            return NewTexture(w, h, px);
        }

        private static Texture2D DrawCircle(int size) => DrawRoundedRect(size, size, size * 0.5f);

        /// <summary>Clear centre fading to opaque edges; tinted red for the damage flash.</summary>
        private static Texture2D DrawVignette(int size)
        {
            var px = new Color32[size * size];
            for (int y = 0; y < size; y++)
            for (int x = 0; x < size; x++)
            {
                var p = new Vector2(x + 0.5f, y + 0.5f) / size * 2f - Vector2.one;
                float d = Mathf.Max(Mathf.Abs(p.x), Mathf.Abs(p.y)) * 0.6f + p.magnitude * 0.4f;
                float a = Mathf.SmoothStep(0f, 1f, Mathf.InverseLerp(0.55f, 1.05f, d));
                px[y * size + x] = new Color(1f, 1f, 1f, a);
            }
            return NewTexture(size, size, px);
        }

                private static Texture2D DrawGlow(int size)
        {
            var px = new Color32[size * size];
            for (int y = 0; y < size; y++)
            for (int x = 0; x < size; x++)
            {
                float d = Vector2.Distance(new Vector2(x + 0.5f, y + 0.5f), Vector2.one * size * 0.5f) / (size * 0.5f);
                float a = Mathf.Clamp01(1f - d);
                px[y * size + x] = new Color(1f, 1f, 1f, a * a);
            }
            return NewTexture(size, size, px);
        }

        // ---- IO ---------------------------------------------------------------------------------

        private static Texture2D NewTexture(int w, int h, Color32[] px)
        {
            var tex = new Texture2D(w, h, TextureFormat.RGBA32, false);
            tex.SetPixels32(px);
            tex.Apply();
            return tex;
        }

        public static Texture2D LoadTexture(string assetPath)
        {
            var tex = new Texture2D(2, 2, TextureFormat.RGBA32, false);
            if (!tex.LoadImage(File.ReadAllBytes(assetPath)))
                throw new IOException($"Could not decode {assetPath}");
            return tex;
        }

        private static void WriteSprite(string name, Texture2D tex, float ppu, Vector2 pivot, bool fullRect = false, Vector4 border = default)
        {
            string path = GeneratedPath(name);
            File.WriteAllBytes(path, tex.EncodeToPNG());
            UnityEngine.Object.DestroyImmediate(tex);
            AssetDatabase.ImportAsset(path, ImportAssetOptions.ForceSynchronousImport);
            ConfigureSprite(path, ppu, pivot, fullRect, border);
        }

        public static void ConfigureSprite(string path, float ppu, Vector2 pivot, bool fullRect = false, Vector4 border = default)
        {
            var importer = (TextureImporter)AssetImporter.GetAtPath(path);
            importer.textureType = TextureImporterType.Sprite;
            importer.spriteImportMode = SpriteImportMode.Single;
            importer.spritePixelsPerUnit = ppu;
            importer.alphaIsTransparency = true;
            importer.mipmapEnabled = false;
            importer.filterMode = FilterMode.Bilinear;
            importer.wrapMode = fullRect ? TextureWrapMode.Repeat : TextureWrapMode.Clamp;
            importer.textureCompression = TextureImporterCompression.CompressedHQ;
            importer.maxTextureSize = 2048;

            var settings = new TextureImporterSettings();
            importer.ReadTextureSettings(settings);
            settings.spriteAlignment = (int)SpriteAlignment.Custom;
            settings.spritePivot = pivot;
            settings.spriteMeshType = fullRect ? SpriteMeshType.FullRect : SpriteMeshType.Tight;
            settings.spriteBorder = border;
            importer.SetTextureSettings(settings);
            importer.SaveAndReimport();
        }
    }
}
