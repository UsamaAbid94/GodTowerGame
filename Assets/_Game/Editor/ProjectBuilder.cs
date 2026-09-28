using System.IO;
using System.Linq;
using GodTower.Core;
using GodTower.Data;
using GodTower.Gameplay;
using GodTower.Gameplay.Boss;
using GodTower.Gameplay.Environment;
using GodTower.Gameplay.Hazards;
using GodTower.Gameplay.Powers;
using GodTower.Gameplay.Vfx;
using GodTower.UI;
using GodTower.UI.Menu;
using GodTower.Webhook;
using TMPro;
using UnityEditor;
using UnityEditor.Build;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.UI;
using UnityEngine.UI;
using static GodTower.EditorTools.AssetUtil;
using Ui = GodTower.EditorTools.UiFactory;

namespace GodTower.EditorTools
{
    /// <summary>
    /// One-click, repeatable project setup (God Tower &gt; Build Project): processes the art,
    /// creates the five level configs, prefabs, the MainMenu and Game scenes, and the Android
    /// build settings. Everything is generated from code so the setup is reviewable and diffable.
    /// </summary>
    public static class ProjectBuilder
    {
        private const string Root = "Assets/_Game";
        private const string DataDir = Root + "/Data";
        private const string LevelsDir = DataDir + "/Levels";
        private const string PrefabDir = Root + "/Prefabs";
        private const string SceneDir = Root + "/Scenes";
        private const string AnimationDir = Root + "/Animation";
        private const string ClimberControllerPath = AnimationDir + "/Body.controller";
        private const string InputActionsPath = "Assets/InputSystem_Actions.inputactions";
        private const string GameArtPath = DataDir + "/GameArt.asset";
        private const string DatabasePath = DataDir + "/LevelDatabase.asset";
        private const string FxLibraryPath = DataDir + "/FxLibrary.asset";

        public const string MainMenuPath = SceneDir + "/" + SceneFlow.MainMenuScene + ".unity";
        public const string GamePath = SceneDir + "/" + SceneFlow.GameScene + ".unity";

        /// <summary>Hearts per run; the HUD gets one icon per heart.</summary>
        private const int MaxHearts = 5;

        private static readonly Vector2 Center = new Vector2(0.5f, 0.5f);
        private static readonly Color SkyBlue = new Color(0.16f, 0.47f, 0.86f);
        private static readonly Color InkBlue = new Color(0.05f, 0.18f, 0.4f);

        private struct Prefabs
        {
            public SpriteBurst Burst;
            public LaneProjectile Projectile;
            public SpriteRenderer Warning;
            public SpriteRenderer Cloud;
            public EventBanner LeftBanner;
            public EventBanner RightBanner;
        }

        private struct GameUi
        {
            public HudView Hud;
            public CenterMessage Center;
            public PauseMenu Pause;
            public ResultPanel Result;
            public EventBannerFeed Banners;
            public RectTransform BumpStage;
        }

        [MenuItem("God Tower/Build Project")]
        private static void BuildFromMenu()
        {
            if (!EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo())
                return;
            Build();
            EditorSceneManager.OpenScene(MainMenuPath);
        }

        /// <summary>Headless entry point (no dialogs), e.g. for batch mode or automation.</summary>
        public static void Build()
        {
            // TextMeshPro needs its essential resources (shaders, settings) before any label is built;
            // on a fresh project import them first and re-run once Unity has finished.
            if (!FontBuilder.EssentialsImported)
            {
                FontBuilder.ImportEssentials(Build);
                return;
            }

            EnsureFolders();
            RenderSetup.EnsureUniversalRenderer();
            RenderSetup.ForceCartoonFxToUrp();
            TowerArt.Build();
            ArtPipeline.Run();
            ArtPipeline.ConfigureSprite(ArtPipeline.SkyPath, 100f, Center);

            var art = BuildGameArt();
            ClimberAnimations.Build(AnimationDir, ClimberControllerPath);
            var effects = EffectsCatalog.Build(DataDir, FxLibraryPath, art);
            BuildLevels(effects);
            Ui.Fonts = FontBuilder.Build();
            BuildPrefabs(art);
            AssetDatabase.SaveAssets();

            // Opening a new scene unloads assets that only managed references still point at, so each
            // scene builder reloads its assets by path after the scene is created.
            BuildGameScene();
            BuildMainMenuScene();
            ConfigureBuild();

            AssetDatabase.SaveAssets();
            Debug.Log("[God Tower] Project built: 5 levels, MainMenu + Game scenes, Android settings.");
        }

        // ---- Folders & source art ---------------------------------------------------------------

        private static void EnsureFolders()
        {
            foreach (var dir in new[] { ArtPipeline.SourceDir, ArtPipeline.GeneratedDir, AnimationDir, LevelsDir, PrefabDir, SceneDir })
                Directory.CreateDirectory(dir);
            AssetDatabase.Refresh();
        }

        private static T LoadPrefab<T>(string name) where T : Component =>
            Load<GameObject>($"{PrefabDir}/{name}.prefab").GetComponent<T>();

        /// <summary>Loads the shared assets a scene needs. Call after the scene has been created.</summary>
        private static (GameArt art, LevelDatabase database) LoadSharedAssets()
        {
            Ui.Fonts = FontBuilder.Build();
            return (Load<GameArt>(GameArtPath), Load<LevelDatabase>(DatabasePath));
        }

        // ---- Data -------------------------------------------------------------------------------

        private static GameArt BuildGameArt()
        {
            var art = LoadOrCreate<GameArt>(GameArtPath);
            art.climberHang = ArtPipeline.Load(ArtPipeline.ClimberHang);
            art.gloves = ArtPipeline.Gloves.Select(g => ArtPipeline.Load(g)).ToArray();
            art.gloveForwardAngles = (float[])ArtPipeline.GloveForwardAngles.Clone();
            art.impactStar = ArtPipeline.Load(ArtPipeline.FxStar);
            art.smokePuff = ArtPipeline.Load(ArtPipeline.FxPuff);
            art.energyFlash = ArtPipeline.Load(ArtPipeline.FxFlash);
            art.explosion = ArtPipeline.Load(ArtPipeline.FxExplosion);
            art.warningIcon = ArtPipeline.Load("warning");
            EditorUtility.SetDirty(art);
            return art;
        }

        /// <summary>
        /// Five climbs of rising height and difficulty. Themes follow the reference's sky:
        /// bright day at the base, thicker cloud, a storm belt, sunset, then a night summit.
        /// Race cars appear from level 1 (a rarer, long-warned showpiece), uppercuts join at level 2.
        /// Tuned forgiving: slow projectiles, roomy wave gaps, small knock-back and generous power-ups.
        /// </summary>
        private static void BuildLevels(EffectsCatalog.Result fx)
        {
            var hazardMixes = new[]
            {
                new[] { new HazardWeight(fx.GloveDrop, 0.75f), new HazardWeight(fx.RaceCar, 0.25f) },
                new[] { new HazardWeight(fx.GloveDrop, 0.55f), new HazardWeight(fx.Uppercut, 0.2f), new HazardWeight(fx.RaceCar, 0.25f) },
                new[] { new HazardWeight(fx.GloveDrop, 0.45f), new HazardWeight(fx.Uppercut, 0.25f), new HazardWeight(fx.RaceCar, 0.3f) },
                new[] { new HazardWeight(fx.GloveDrop, 0.4f), new HazardWeight(fx.Uppercut, 0.3f), new HazardWeight(fx.RaceCar, 0.3f) },
                new[] { new HazardWeight(fx.GloveDrop, 0.35f), new HazardWeight(fx.Uppercut, 0.3f), new HazardWeight(fx.RaceCar, 0.35f) },
            };
            var ambience = new[] { fx.AmbientGlows, fx.WindTrails, fx.Rain, fx.AmbientGlows, fx.FallingStars };

            // Scripted monster ambushes: a lone ghost teaches the struggle, the dragon arrives in level 2,
            // later levels escalate to pairs, and the summit ends with the dragon and a ghost together.
            var ambushes = new[]
            {
                new[] { new MonsterAmbush(0.6f, 100, fx.Ghost) },
                new[] { new MonsterAmbush(0.6f, 180, fx.Dragon) },
                new[] { new MonsterAmbush(0.35f, 150, fx.Ghost), new MonsterAmbush(0.7f, 250, fx.Dragon) },
                new[] { new MonsterAmbush(0.4f, 250, fx.Ghost, fx.Ghost), new MonsterAmbush(0.75f, 300, fx.Dragon) },
                new[] { new MonsterAmbush(0.4f, 300, fx.Dragon), new MonsterAmbush(0.75f, 450, fx.Dragon, fx.Ghost) },
            };

            var specs = new[]
            {
                new LevelSpec("Sacred Base", 1000, Color.white, new Color(0.74f, 0.82f, 0.70f), Color.white,
                    0.45f, false, new Vector2(4.6f, 3.8f), 1, 5.5f, 60, 0.45f),
                new LevelSpec("Cloud Sea", 1500, new Color(0.86f, 0.93f, 1f), new Color(0.72f, 0.80f, 0.70f), Color.white,
                    0.85f, false, new Vector2(4.2f, 3.4f), 1, 6.5f, 90, 0.4f),
                new LevelSpec("Storm Belt", 2500, new Color(0.52f, 0.58f, 0.74f), new Color(0.62f, 0.68f, 0.64f), new Color(0.72f, 0.76f, 0.84f),
                    0.95f, true, new Vector2(3.8f, 3f), 1, 7.5f, 120, 0.35f),
                new LevelSpec("Sunset Spire", 3500, new Color(1f, 0.72f, 0.56f), new Color(0.86f, 0.76f, 0.62f), new Color(1f, 0.84f, 0.74f),
                    0.6f, false, new Vector2(3.4f, 2.6f), 2, 8.5f, 150, 0.32f),
                new LevelSpec("Karin Summit", 5000, new Color(0.42f, 0.42f, 0.72f), new Color(0.70f, 0.72f, 0.86f), new Color(0.72f, 0.72f, 0.95f),
                    0.7f, true, new Vector2(3f, 2.2f), 2, 9.5f, 180, 0.3f),
            };

            var levels = new LevelConfig[specs.Length];
            for (int i = 0; i < specs.Length; i++)
            {
                var level = LoadOrCreate<LevelConfig>($"{LevelsDir}/Level{i + 1}.asset");
                specs[i].ApplyTo(level);
                level.hazards = hazardMixes[i];
                level.ambientEffect = ambience[i];
                level.ambushes = ambushes[i];
                EditorUtility.SetDirty(level);
                levels[i] = level;
            }

            var database = LoadOrCreate<LevelDatabase>(DatabasePath);
            database.SetLevels(levels);
            EditorUtility.SetDirty(database);
        }

        private readonly struct LevelSpec
        {
            private readonly string _name;
            private readonly int _goal;
            private readonly Color _sky, _tower, _cloud;
            private readonly float _cloudDensity;
            private readonly bool _lightning;
            private readonly Vector2 _interval;
            private readonly int _maxPerWave;
            private readonly float _fallSpeed;
            private readonly int _knockback;
            private readonly float _helperChance;

            public LevelSpec(string name, int goal, Color sky, Color tower, Color cloud, float cloudDensity, bool lightning,
                Vector2 interval, int maxPerWave, float fallSpeed, int knockback, float helperChance)
            {
                _name = name; _goal = goal; _sky = sky; _tower = tower; _cloud = cloud;
                _cloudDensity = cloudDensity; _lightning = lightning; _interval = interval;
                _maxPerWave = maxPerWave; _fallSpeed = fallSpeed; _knockback = knockback; _helperChance = helperChance;
            }

            public void ApplyTo(LevelConfig level)
            {
                level.displayName = _name;
                level.goalMeters = _goal;
                level.skyTint = _sky;
                level.towerTint = _tower;
                level.cloudTint = _cloud;
                level.cloudDensity = _cloudDensity;
                level.lightning = _lightning;
                level.hazardInterval = _interval;
                level.maxHazardsPerWave = _maxPerWave;
                level.hazardFallSpeed = _fallSpeed;
                level.knockbackMeters = _knockback;
                level.helperChance = _helperChance;
            }
        }

        // ---- Prefabs ----------------------------------------------------------------------------

        private static void BuildPrefabs(GameArt art)
        {
            var burst = new GameObject("SpriteBurst");
            var burstRenderer = burst.AddComponent<SpriteRenderer>();
            burstRenderer.sortingOrder = SortingOrders.Effects;
            Ui.Wire(burst.AddComponent<SpriteBurst>(), ("spriteRenderer", burstRenderer));
            SavePrefab(burst);

            var projectile = new GameObject("LaneProjectile");
            var projectileRenderer = projectile.AddComponent<SpriteRenderer>();
            projectileRenderer.sprite = art.gloves[1];
            projectileRenderer.sortingOrder = SortingOrders.Hazards;
            Ui.Wire(projectile.AddComponent<LaneProjectile>(), ("spriteRenderer", projectileRenderer));
            AddDropShadow(projectile.transform, projectileRenderer);
            SavePrefab(projectile);

            SavePrefab(SpriteObject("Warning", art.warningIcon, SortingOrders.Warnings));
            SavePrefab(SpriteObject("Cloud", ArtPipeline.Load("cloud"), SortingOrders.FarClouds));
            SavePrefab(Banner(BannerSide.Left, new Color(0.13f, 0.45f, 0.9f)).gameObject);
            SavePrefab(Banner(BannerSide.Right, new Color(1f, 0.36f, 0.12f)).gameObject);
        }

        private static Prefabs LoadPrefabs() => new Prefabs
        {
            Burst = LoadPrefab<SpriteBurst>("SpriteBurst"),
            Projectile = LoadPrefab<LaneProjectile>("LaneProjectile"),
            Warning = LoadPrefab<SpriteRenderer>("Warning"),
            Cloud = LoadPrefab<SpriteRenderer>("Cloud"),
            LeftBanner = LoadPrefab<EventBanner>("BannerLeft"),
            RightBanner = LoadPrefab<EventBanner>("BannerRight"),
        };

        private static GameObject SpriteObject(string name, Sprite sprite, int order)
        {
            var go = new GameObject(name);
            var renderer = go.AddComponent<SpriteRenderer>();
            renderer.sprite = sprite;
            renderer.sortingOrder = order;
            return go;
        }

        private static void SavePrefab(GameObject go)
        {
            PrefabUtility.SaveAsPrefabAsset(go, $"{PrefabDir}/{go.name}.prefab");
            Object.DestroyImmediate(go);
        }

        /// <summary>Live-gift banner as in the reference: heart badge at the screen edge, viewer name, coloured gift pill.</summary>
        private static EventBanner Banner(BannerSide side, Color pillColor)
        {
            bool left = side == BannerSide.Left;
            float dir = left ? 1f : -1f;
            var edge = new Vector2(left ? 0f : 1f, 0.5f);
            var bottomEdge = new Vector2(edge.x, 0f);
            var topEdge = new Vector2(edge.x, 1f);

            var root = new GameObject(left ? "BannerLeft" : "BannerRight", typeof(RectTransform));
            var rootRt = (RectTransform)root.transform;
            rootRt.sizeDelta = new Vector2(540f, 112f);
            var content = Ui.Stretch("Content", rootRt);

            var pill = Ui.Rect("Pill", content, bottomEdge, bottomEdge, new Vector2(dir * 78f, 6f), new Vector2(430f, 60f));
            Ui.Image(pill, ArtPipeline.Load("ui_round"), pillColor);
            var gift = Ui.Label("Gift", pill, "Gift x1", 32, Color.white, TextAlignmentOptions.Center, Center, Center,
                Vector2.zero, pill.sizeDelta, TextStyle.Body);

            var viewer = Ui.Label("Viewer", content, "Viewer", 34, Color.white, left ? TextAlignmentOptions.Left : TextAlignmentOptions.Right,
                topEdge, topEdge, new Vector2(dir * 112f, -2f), new Vector2(400f, 44f), TextStyle.Body);

            var heart = Ui.Image("Heart", content, Ui.Kit("Icons/heartt.png"), edge, new Vector2(dir * 52f, -8f), new Vector2(96f, 96f));

            var banner = root.AddComponent<EventBanner>();
            Ui.Wire(banner, ("content", content), ("viewerLabel", viewer), ("giftLabel", gift), ("heart", heart.rectTransform));
            return banner;
        }

        // ---- Game scene -------------------------------------------------------------------------

        private static void BuildGameScene()
        {
            var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
            var (art, database) = LoadSharedAssets();
            var prefabs = LoadPrefabs();

            var camera = NewCamera(new Vector3(0f, 4f, -18f));
            var rig = camera.gameObject.AddComponent<CameraRig>();
            RenderSetup.SetupLighting(SkyBlue);

            var skyGo = new GameObject("Sky");
            var painting = SpriteObject("Painting", AssetDatabase.LoadAssetAtPath<Sprite>(ArtPipeline.SkyPath), SortingOrders.Sky);
            painting.transform.SetParent(skyGo.transform, false);
            var sky = skyGo.AddComponent<SkyBackground>();
            Ui.Wire(sky, ("rig", rig), ("sky", painting.GetComponent<SpriteRenderer>()));

            var clouds = new GameObject("Clouds").AddComponent<CloudField>();
            Ui.Wire(clouds, ("rig", rig), ("cloudPrefab", prefabs.Cloud));

            var tower = BuildTowerObject();

            var vfx = new GameObject("Vfx").AddComponent<VfxPool>();
            Ui.Wire(vfx, ("burstPrefab", prefabs.Burst), ("art", art));
            var particles = vfx.gameObject.AddComponent<ParticleFx>();
            Ui.Wire(particles, ("library", Load<FxLibrary>(FxLibraryPath)));

            // Climber > Visual (code: lane lean, impact jolt) > Body (Animator: pose clips).
            var climberGo = new GameObject("Climber");
            var input = climberGo.AddComponent<ClimberInput>();
            var visual = new GameObject("Visual").transform;
            visual.SetParent(climberGo.transform, false);
            var body = Child(visual, "Body", SortingOrders.Climber);
            body.sprite = art.climberHang;
            var animator = body.gameObject.AddComponent<Animator>();
            animator.runtimeAnimatorController = Load<RuntimeAnimatorController>(ClimberControllerPath);
            AddDropShadow(visual, body);
            var aura = Child(visual, "BoostAura", SortingOrders.Climber - 1);
            aura.sprite = art.energyFlash;
            aura.color = new Color(1f, 0.9f, 0.5f, 0.85f);
            var climber = climberGo.AddComponent<ClimberController>();
            Ui.Wire(climber, ("input", input), ("visual", visual), ("body", body), ("animator", animator),
                ("boostAura", aura), ("vfx", vfx));

            Ui.Wire(rig, ("cam", camera), ("target", climber));

            var ui = BuildGameUi(art, prefabs, climber);

            var hazards = new GameObject("Hazards").AddComponent<HazardSpawner>();
            Ui.Wire(hazards, ("art", art), ("climber", climber), ("rig", rig), ("vfx", vfx), ("particles", particles),
                ("banners", ui.Banners), ("projectilePrefab", prefabs.Projectile), ("warningPrefab", prefabs.Warning));

            var kiBlast = BuildPowers(art, climber, body, rig, particles, hazards);

            var ambushes = new GameObject("MonsterAmbushes").AddComponent<AmbushDirector>();
            Ui.Wire(ambushes, ("climber", climber), ("input", input), ("rig", rig), ("hazards", hazards), ("kiBlast", kiBlast),
                ("particles", particles), ("banners", ui.Banners), ("centerMessage", ui.Center));

            var level = new GameObject("Level").AddComponent<LevelController>();
            Ui.Wire(level, ("maxHearts", MaxHearts), ("database", database), ("climber", climber), ("tower", tower),
                ("hazards", hazards), ("ambushes", ambushes),
                ("cameraRig", rig), ("sky", sky), ("clouds", clouds), ("vfx", vfx), ("particles", particles), ("hud", ui.Hud),
                ("centerMessage", ui.Center), ("pauseMenu", ui.Pause), ("resultPanel", ui.Result));

            var barrage = ui.BumpStage.gameObject.AddComponent<GloveBarrage>();
            Ui.Wire(barrage, ("art", art), ("font", Ui.Fonts.Font), ("titleMaterial", Ui.Fonts.Title), ("stage", ui.BumpStage), ("level", level),
                ("climber", climber), ("rig", rig), ("vfx", vfx), ("particles", particles), ("banners", ui.Banners));

            NewEventSystem();
            EditorSceneManager.SaveScene(scene, GamePath);
        }

        /// <summary>Dragon Ball powers: Super Saiyan look on the climber, the Kamehameha beam, and the power-up router.</summary>
        private static KiBlast BuildPowers(GameArt art, ClimberController climber, SpriteRenderer body, CameraRig rig,
            ParticleFx particles, HazardSpawner hazards)
        {
            var superSaiyan = climber.gameObject.AddComponent<SuperSaiyanFx>();
            Ui.Wire(superSaiyan, ("climber", climber), ("body", body), ("rig", rig), ("particles", particles));

            var kiBlast = new GameObject("Kamehameha").AddComponent<KiBlast>();
            var beamSprite = ArtPipeline.Load("ui_bar");
            var glow = BeamPart(kiBlast.transform, "BeamGlow", beamSprite, new Color(0.35f, 0.8f, 1f, 0.6f), SortingOrders.Effects + 2);
            var core = BeamPart(kiBlast.transform, "BeamCore", beamSprite, new Color(0.9f, 0.98f, 1f), SortingOrders.Effects + 3);
            var ball = Child(kiBlast.transform, "KiBall", SortingOrders.Effects + 4);
            ball.sprite = art.energyFlash;
            Ui.Wire(kiBlast, ("climber", climber), ("rig", rig), ("particles", particles), ("hazards", hazards),
                ("beamGlow", glow), ("beamCore", core), ("ball", ball));

            var router = new GameObject("PowerUps").AddComponent<PowerUpController>();
            Ui.Wire(router, ("hazards", hazards), ("climber", climber), ("kiBlast", kiBlast));
            return kiBlast;
        }

        private static SpriteRenderer BeamPart(Transform parent, string name, Sprite sprite, Color color, int order)
        {
            var renderer = Child(parent, name, order);
            renderer.sprite = sprite;
            renderer.drawMode = SpriteDrawMode.Sliced;
            renderer.color = color;
            return renderer;
        }

        /// <summary>The 3D tower rig: meshes and stone material generated by <see cref="TowerArt"/>, assembled at runtime.</summary>
        private static TowerBuilder BuildTowerObject()
        {
            var tower = new GameObject("Tower").AddComponent<TowerBuilder>();
            Ui.Wire(tower,
                ("moduleMesh", Load<Mesh>(TowerArt.Dir + "/TowerModule.asset")),
                ("baseMesh", Load<Mesh>(TowerArt.Dir + "/TowerBase.asset")),
                ("capMesh", Load<Mesh>(TowerArt.Dir + "/TowerCap.asset")),
                ("stone", Load<Material>(TowerArt.Dir + "/TowerStone.mat")),
                ("moduleHeight", TowerArt.ModuleHeight),
                ("shaftRadius", TowerArt.ShaftRadius),
                ("capHeight", TowerArt.CapHeight));
            return tower;
        }

        /// <summary>Depth cue: a soft shadow of <paramref name="source"/> cast onto the tower face.</summary>
        private static void AddDropShadow(Transform parent, SpriteRenderer source)
        {
            var shadow = Child(parent, source.name + "Shadow", SortingOrders.Shadows);
            Ui.Wire(shadow.gameObject.AddComponent<DropShadow>(), ("source", source));
        }

        private static SpriteRenderer Child(Transform parent, string name, int order)
        {
            var go = new GameObject(name);
            go.transform.SetParent(parent, false);
            var renderer = go.AddComponent<SpriteRenderer>();
            renderer.sortingOrder = order;
            return renderer;
        }

        private static GameUi BuildGameUi(GameArt art, Prefabs prefabs, ClimberController climber)
        {
            var result = new GameUi();
            var canvas = NewCanvas();
            var safe = Ui.Stretch("SafeArea", canvas.transform);
            safe.gameObject.AddComponent<SafeAreaFitter>();

            result.Hud = BuildHud(art, safe, climber);
            result.Banners = BuildBannerFeed(safe, prefabs);
            result.Center = BuildCenterMessage(safe);
            result.BumpStage = Ui.Stretch("BumpStage", canvas.transform);
            result.Pause = BuildPauseMenu(canvas.transform);
            result.Result = BuildResultPanel(canvas.transform);
            return result;
        }

        /// <summary>Reference HUD: thin glowing cyan altitude bar on the left edge, goal on top, climber marker + height riding it.</summary>
        private static HudView BuildHud(GameArt art, Transform parent, ClimberController climber)
        {
            var hudRt = Ui.Stretch("HUD", parent);
            // First child, so it flashes behind the rest of the HUD.
            var damageFlash = Ui.Image(Ui.Stretch("DamageFlash", hudRt), ArtPipeline.Load("ui_vignette"), new Color(1f, 0.08f, 0.05f, 0f));
            var barSprite = ArtPipeline.Load("ui_bar");
            var cyan = new Color(0.25f, 0.92f, 1f);

            var bar = Ui.Rect("AltitudeBar", hudRt, Vector2.zero, new Vector2(0.5f, 0f), new Vector2(52f, 0f), new Vector2(20f, 0f));
            bar.anchorMin = new Vector2(0f, 0.17f);
            bar.anchorMax = new Vector2(0f, 0.79f);

            Ui.Image(Ui.Stretch("Glow", bar, -9f), barSprite, new Color(cyan.r, cyan.g, cyan.b, 0.28f));
            Ui.Image(Ui.Stretch("Track", bar), barSprite, new Color(0.03f, 0.12f, 0.22f, 0.85f));
            var fill = Ui.Image(Ui.Stretch("Fill", bar, 3f), barSprite, cyan);
            fill.type = Image.Type.Filled;
            fill.fillMethod = Image.FillMethod.Vertical;
            fill.fillOrigin = (int)Image.OriginVertical.Bottom;
            fill.fillAmount = 0f;

            var goal = Ui.Label("Goal", bar, "5000", 36, Color.black, TextAlignmentOptions.Center, new Vector2(0.5f, 1f), Center,
                new Vector2(0f, 34f), new Vector2(160f, 50f), TextStyle.Light);

            var marker = Ui.Rect("Marker", bar, new Vector2(0.5f, 0f), Center, Vector2.zero, new Vector2(80f, 80f));
            Ui.Image("Icon", marker, art.climberHang, Center, Vector2.zero, new Vector2(46f, 110f));
            var height = Ui.Label("Height", marker, "0", 46, Color.black, TextAlignmentOptions.Left, Center, new Vector2(0f, 0.5f),
                new Vector2(30f, 0f), new Vector2(200f, 60f), TextStyle.Light);

            // Top-centre status plate: level name on a dark pill, hearts in a row underneath. Kept narrow so
            // it never meets the pause button (top-right) or the altitude bar (left edge).
            var topCenter = new Vector2(0.5f, 1f);
            var plate = Ui.Rect("StatusPlate", hudRt, topCenter, topCenter, new Vector2(0f, -28f), new Vector2(560f, 170f));
            Ui.Image(Ui.Rect("NamePill", plate, topCenter, topCenter, Vector2.zero, new Vector2(560f, 78f)),
                ArtPipeline.Load("ui_round"), new Color(0.03f, 0.1f, 0.25f, 0.55f));
            var levelName = Ui.Label("LevelName", plate, "Level 1", 42, Color.white, TextAlignmentOptions.Center, topCenter, topCenter,
                new Vector2(0f, -8f), new Vector2(540f, 64f), TextStyle.Body);

            const float heartSize = 64f;
            const float heartSpacing = 72f;
            var hearts = new Image[MaxHearts];
            for (int i = 0; i < hearts.Length; i++)
            {
                float x = (i - (hearts.Length - 1) * 0.5f) * heartSpacing;
                hearts[i] = Ui.Image($"Heart{i}", plate, Ui.Kit("Icons/heartt.png"), topCenter, new Vector2(x, -122f), new Vector2(heartSize, heartSize));
            }

            var pause = Ui.Button("PauseButton", hudRt, Ui.Kit("Buttons/Pause.png"), new Vector2(1f, 1f), new Vector2(-118f, -64f), new Vector2(200f, 66f));

            var hud = hudRt.gameObject.AddComponent<HudView>();
            Ui.Wire(hud, ("climber", climber), ("barFill", fill), ("barTrack", bar), ("marker", marker), ("markerLabel", height),
                ("goalLabel", goal), ("levelLabel", levelName), ("hearts", hearts), ("pauseButton", pause), ("damageFlash", damageFlash));
            return hud;
        }

        private static EventBannerFeed BuildBannerFeed(Transform parent, Prefabs prefabs)
        {
            var feedRt = Ui.Stretch("Banners", parent);
            var left = Column("Left", feedRt, 0f, TextAnchor.UpperLeft);
            var right = Column("Right", feedRt, 1f, TextAnchor.UpperRight);

            var feed = feedRt.gameObject.AddComponent<EventBannerFeed>();
            Ui.Wire(feed, ("leftPrefab", prefabs.LeftBanner), ("rightPrefab", prefabs.RightBanner),
                ("leftColumn", left), ("rightColumn", right));
            return feed;

            RectTransform Column(string name, Transform p, float x, TextAnchor alignment)
            {
                var anchor = new Vector2(x, 0.5f);
                var column = Ui.Rect(name, p, anchor, anchor, new Vector2(x < 0.5f ? 8f : -8f, -40f), new Vector2(560f, 420f));
                var layout = column.gameObject.AddComponent<VerticalLayoutGroup>();
                layout.spacing = 18f;
                layout.childAlignment = alignment;
                layout.childControlWidth = layout.childControlHeight = false;
                layout.childForceExpandWidth = layout.childForceExpandHeight = false;
                return column;
            }
        }

        private static CenterMessage BuildCenterMessage(Transform parent)
        {
            var rt = Ui.Rect("CenterMessage", parent, new Vector2(0.5f, 0.62f), Center, Vector2.zero, new Vector2(1000f, 420f));
            var group = rt.gameObject.AddComponent<CanvasGroup>();
            group.blocksRaycasts = false;
            group.interactable = false;

            var title = Ui.Label("Title", rt, "3", 190, Color.white, TextAlignmentOptions.Center, Center, Center,
                new Vector2(0f, 40f), new Vector2(1000f, 240f), TextStyle.Title);

            var subtitle = Ui.Label("Subtitle", rt, "", 44, Color.white, TextAlignmentOptions.Center, Center, Center,
                new Vector2(0f, -110f), new Vector2(1000f, 60f), TextStyle.Body);

            var message = rt.gameObject.AddComponent<CenterMessage>();
            Ui.Wire(message, ("title", title), ("subtitle", subtitle), ("group", group));
            return message;
        }

        private static PauseMenu BuildPauseMenu(Transform parent)
        {
            var host = Ui.Stretch("PauseMenu", parent);
            var overlay = Ui.Overlay("Overlay", host);
            var panel = Ui.Rect("Panel", overlay, Center, Center, Vector2.zero, new Vector2(780f, 860f));
            Ui.Image(panel, Ui.Kit("Panel_Sprites/Level popup.png"), Color.white, true);
            Ui.Label("Title", panel, "PAUSED", 96, Color.white, TextAlignmentOptions.Center, new Vector2(0.5f, 1f), Center,
                new Vector2(0f, -110f), new Vector2(700f, 130f), TextStyle.Title);

            var resume = Ui.Button("Resume", panel, Ui.Kit("Buttons/empty_buttons/green.png"), Center, new Vector2(0f, 80f), new Vector2(500f, 140f), "RESUME");
            var retry = Ui.Button("Retry", panel, Ui.Kit("Buttons/empty_buttons/orange.png"), Center, new Vector2(0f, -80f), new Vector2(500f, 140f), "RETRY");
            var home = Ui.Button("Home", panel, Ui.Kit("Buttons/empty_buttons/light blue.png"), Center, new Vector2(0f, -240f), new Vector2(500f, 140f), "HOME");

            var menu = host.gameObject.AddComponent<PauseMenu>();
            Ui.Wire(menu, ("root", overlay.gameObject), ("panel", panel), ("resumeButton", resume), ("retryButton", retry), ("homeButton", home));
            return menu;
        }

        private static ResultPanel BuildResultPanel(Transform parent)
        {
            var host = Ui.Stretch("ResultPanel", parent);
            var overlay = Ui.Overlay("Overlay", host, 0.55f);
            var panel = Ui.Rect("Panel", overlay, Center, Center, Vector2.zero, new Vector2(820f, 1100f));
            Ui.Image(panel, Ui.Kit("Panel_Sprites/Level popup.png"), Color.white, true);

            var top = new Vector2(0.5f, 1f);
            var win = Ui.Label("WinTitle", panel, "SUMMIT!", 112, new Color(1f, 0.82f, 0.2f), TextAlignmentOptions.Center, top, Center,
                new Vector2(0f, -115f), new Vector2(760f, 150f), TextStyle.Title);
            var lose = Ui.Label("LoseTitle", panel, "YOU FELL!", 104, new Color(1f, 0.42f, 0.36f), TextAlignmentOptions.Center, top, Center,
                new Vector2(0f, -115f), new Vector2(760f, 150f), TextStyle.Title);

            var starSprite = Ui.Kit("Icons/star golden.png");
            var stars = new[]
            {
                Ui.Image("Star1", panel, starSprite, top, new Vector2(-190f, -280f), new Vector2(150f, 150f)),
                Ui.Image("Star2", panel, starSprite, top, new Vector2(0f, -250f), new Vector2(170f, 170f)),
                Ui.Image("Star3", panel, starSprite, top, new Vector2(190f, -280f), new Vector2(150f, 150f)),
            };

            var detail = Ui.Label("Detail", panel, "", 48, Color.white, TextAlignmentOptions.Center, top, Center,
                new Vector2(0f, -410f), new Vector2(760f, 70f), TextStyle.Body);

            var buttons = Ui.Rect("Buttons", panel, new Vector2(0.5f, 0f), new Vector2(0.5f, 0f), new Vector2(0f, 60f), new Vector2(520f, 470f));
            var layout = buttons.gameObject.AddComponent<VerticalLayoutGroup>();
            layout.spacing = 20f;
            layout.childAlignment = TextAnchor.LowerCenter;
            layout.childControlWidth = layout.childControlHeight = false;
            layout.childForceExpandWidth = layout.childForceExpandHeight = false;

            var size = new Vector2(500f, 130f);
            var next = Ui.Button("Next", buttons, Ui.Kit("Buttons/empty_buttons/green.png"), Center, Vector2.zero, size, "NEXT LEVEL");
            var retry = Ui.Button("Retry", buttons, Ui.Kit("Buttons/empty_buttons/orange.png"), Center, Vector2.zero, size, "RETRY");
            var home = Ui.Button("Home", buttons, Ui.Kit("Buttons/empty_buttons/light blue.png"), Center, Vector2.zero, size, "HOME");

            var panelComponent = host.gameObject.AddComponent<ResultPanel>();
            Ui.Wire(panelComponent, ("root", overlay.gameObject), ("panel", panel), ("winTitle", win.gameObject), ("loseTitle", lose.gameObject),
                ("detailLabel", detail), ("stars", stars), ("nextButton", next), ("retryButton", retry), ("homeButton", home));
            return panelComponent;
        }

        // ---- Main menu scene --------------------------------------------------------------------

        private static void BuildMainMenuScene()
        {
            var scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
            var (art, database) = LoadSharedAssets();
            var camera = NewCamera(new Vector3(0f, 7f, -17f));
            RenderSetup.SetupLighting(SkyBlue);

            // Live 3D backdrop: the carved tower with the climber hanging on it, the camera swaying around it.
            var backdrop = new GameObject("MenuBackdrop").AddComponent<MenuBackdrop>();
            var sky = SpriteObject("Sky", Load<Sprite>(ArtPipeline.SkyPath), SortingOrders.Sky);
            Ui.Wire(backdrop, ("tower", BuildTowerObject()), ("cam", camera), ("sky", sky.GetComponent<SpriteRenderer>()));

            var hanging = SpriteObject("Climber", art.climberHang, SortingOrders.Climber);
            hanging.transform.position = new Vector3(0f, 8f, -(TowerArt.ShaftRadius + 0.2f));
            hanging.AddComponent<Animator>().runtimeAnimatorController = Load<RuntimeAnimatorController>(ClimberControllerPath);

            var canvas = NewCanvas();
            var root = canvas.transform;

            // Title.
            var logo = Ui.Rect("Title", root, new Vector2(0.5f, 0.8f), Center, Vector2.zero, new Vector2(1000f, 360f));
            var title = Ui.Label("Logo", logo, "GOD TOWER", 170, new Color(1f, 0.78f, 0.18f), TextAlignmentOptions.Center, Center, Center,
                new Vector2(0f, 30f), new Vector2(1000f, 220f), TextStyle.Title);
            Ui.Label("Tagline", logo, "Climb to the heavens!", 54, Color.white, TextAlignmentOptions.Center, Center, Center,
                new Vector2(0f, -110f), new Vector2(1000f, 70f), TextStyle.Body);

            var play = Ui.Button("PlayButton", root, Ui.Kit("Buttons/Play.png"), new Vector2(0.5f, 0.19f), Vector2.zero, new Vector2(560f, 180f));

            var sound = Ui.Button("SoundButton", root, Ui.Kit("Buttons/empty_buttons/cyan.png"), new Vector2(1f, 1f), new Vector2(-100f, -100f), new Vector2(130f, 130f));
            var soundOn = Ui.Kit("Icons/soundon.png");
            var soundIcon = Ui.Image("Icon", sound.transform, soundOn, Center, new Vector2(0f, 4f), new Vector2(78f, 78f));

            Ui.Label("Controls", root, "Tap & hold to climb  -  Swipe to dodge", 36, Color.white, TextAlignmentOptions.Center,
                new Vector2(0.5f, 0f), Center, new Vector2(0f, 110f), new Vector2(1000f, 50f), TextStyle.Body);
            Ui.Label("WebhookHint", root, $"Webhook: GET/POST http://localhost:{BumpServer.Port}/bump", 28, new Color(1f, 1f, 1f, 0.85f),
                TextAlignmentOptions.Center, new Vector2(0.5f, 0f), Center, new Vector2(0f, 60f), new Vector2(1000f, 40f), TextStyle.Body);

            // Level select popup.
            var overlay = Ui.Overlay("LevelSelect", root);
            var panel = Ui.Rect("Panel", overlay, Center, Center, Vector2.zero, new Vector2(920f, 1420f));
            Ui.Image(panel, Ui.Kit("Panel_Sprites/Level popup.png"), Color.white, true);
            Ui.Label("Title", panel, "SELECT LEVEL", 84, Color.white, TextAlignmentOptions.Center, new Vector2(0.5f, 1f), Center,
                new Vector2(0f, -100f), new Vector2(820f, 120f), TextStyle.Title);
            var close = Ui.Button("Close", panel, Ui.Kit("Icons/Cross pressed.png"), new Vector2(1f, 1f), new Vector2(-30f, -30f), new Vector2(110f, 110f));

            var list = Ui.Rect("List", panel, Center, Center, new Vector2(0f, -70f), new Vector2(800f, 1100f));
            var layout = list.gameObject.AddComponent<VerticalLayoutGroup>();
            layout.spacing = 22f;
            layout.childAlignment = TextAnchor.UpperCenter;
            layout.childControlWidth = layout.childControlHeight = false;
            layout.childForceExpandWidth = layout.childForceExpandHeight = false;

            var levelButtons = new LevelButton[database.Count];
            for (int i = 0; i < levelButtons.Length; i++)
                levelButtons[i] = BuildLevelButton(list, i);

            var menu = new GameObject("MainMenu").AddComponent<MainMenuController>();
            Ui.Wire(menu, ("database", database), ("titleLogo", logo), ("playButton", play), ("soundButton", sound),
                ("soundIcon", soundIcon), ("soundOnSprite", soundOn), ("soundOffSprite", Ui.Kit("Icons/soundoff.png")),
                ("levelSelectRoot", overlay.gameObject), ("levelSelectPanel", panel), ("closeLevelSelectButton", close),
                ("levelButtons", levelButtons));

            NewEventSystem();
            EditorSceneManager.SaveScene(scene, MainMenuPath);
        }

        private static LevelButton BuildLevelButton(Transform list, int index)
        {
            var button = Ui.Button($"Level{index + 1}", list, Ui.Kit("Buttons/empty_buttons/light blue.png"), Center, Vector2.zero, new Vector2(800f, 190f));
            var rt = (RectTransform)button.transform;
            var leftMid = new Vector2(0f, 0.5f);

            var unlocked = Ui.Kit("Buttons/empty_buttons/cyan.png");
            var badge = Ui.Image("Badge", rt, unlocked, leftMid, new Vector2(100f, 0f), new Vector2(140f, 140f), null, false);
            var number = Ui.Label("Number", badge.transform, (index + 1).ToString(), 76, Color.white, TextAlignmentOptions.Center,
                Center, Center, new Vector2(0f, 4f), new Vector2(140f, 140f), TextStyle.Title);
            var lockIcon = Ui.Image("Lock", badge.transform, Ui.Kit("Icons/lock.png"), Center, Vector2.zero, new Vector2(84f, 84f));

            var name = Ui.Label("Name", rt, "Level", 50, Color.white, TextAlignmentOptions.Left, leftMid, leftMid,
                new Vector2(200f, 28f), new Vector2(560f, 70f), TextStyle.Body);

            var starSprite = Ui.Kit("Icons/star golden.png");
            var stars = new Image[3];
            for (int s = 0; s < stars.Length; s++)
                stars[s] = Ui.Image($"Star{s + 1}", rt, starSprite, leftMid, new Vector2(232f + s * 72f, -40f), new Vector2(62f, 62f));

            var levelButton = button.gameObject.AddComponent<LevelButton>();
            Ui.Wire(levelButton, ("button", button), ("badge", badge), ("numberLabel", number), ("nameLabel", name),
                ("lockIcon", lockIcon.gameObject), ("stars", stars), ("unlockedBadge", unlocked),
                ("completedBadge", Ui.Kit("Buttons/empty_buttons/GOLDEN.png")));
            return levelButton;
        }

        // ---- Shared scene pieces ----------------------------------------------------------------

        private static Camera NewCamera(Vector3 position)
        {
            var go = new GameObject("Main Camera") { tag = "MainCamera" };
            go.transform.position = position;
            var camera = go.AddComponent<Camera>();
            camera.orthographic = false;
            camera.fieldOfView = 50f;
            camera.nearClipPlane = 0.3f;
            camera.farClipPlane = 250f;
            camera.clearFlags = CameraClearFlags.SolidColor;
            camera.backgroundColor = SkyBlue;
            go.AddComponent<AudioListener>();
            return camera;
        }

        private static Canvas NewCanvas()
        {
            var go = new GameObject("Canvas", typeof(RectTransform));
            var canvas = go.AddComponent<Canvas>();
            canvas.renderMode = RenderMode.ScreenSpaceOverlay;
            var scaler = go.AddComponent<CanvasScaler>();
            scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            scaler.referenceResolution = new Vector2(1080f, 1920f);
            scaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
            scaler.matchWidthOrHeight = 0.5f;
            go.AddComponent<GraphicRaycaster>();
            return canvas;
        }

        private static void NewEventSystem()
        {
            var go = new GameObject("EventSystem", typeof(EventSystem));
            // AssignDefaultActions() creates actions outside any asset, which can't be serialized into a
            // scene; point the module at the project's actions asset (it contains the standard UI map).
            var module = go.AddComponent<InputSystemUIInputModule>();
            module.actionsAsset = AssetDatabase.LoadAssetAtPath<InputActionAsset>(InputActionsPath);
        }

        // ---- Build settings ---------------------------------------------------------------------

        private static void ConfigureBuild()
        {
            EditorBuildSettings.scenes = new[]
            {
                new EditorBuildSettingsScene(MainMenuPath, true),
                new EditorBuildSettingsScene(GamePath, true),
            };

            PlayerSettings.productName = "God Tower";
            PlayerSettings.defaultInterfaceOrientation = UIOrientation.Portrait;
            PlayerSettings.SetApplicationIdentifier(NamedBuildTarget.Android, "com.usama.godtower");
            PlayerSettings.SetScriptingBackend(NamedBuildTarget.Android, ScriptingImplementation.IL2CPP);
            PlayerSettings.Android.targetArchitectures = AndroidArchitecture.ARM64;
            // The /bump listener is a socket server; Android needs the INTERNET permission even for localhost.
            PlayerSettings.Android.forceInternetPermission = true;
        }
    }
}
