using System.IO;
using System.Linq;
using GodTower.Data;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using UnityEditor;
using UnityEngine;
using static GodTower.EditorTools.AssetUtil;

namespace GodTower.EditorTools
{
    /// <summary>
    /// Creates the effect library and hazard profiles from Cartoon FX Remaster (free, Asset Store EULA)
    /// and the race_cars_2d car sprites.
    /// </summary>
    internal static class EffectsCatalog
    {
        private const string CfxRoot = "Assets/JMO Assets/Cartoon FX Remaster/CFXR Prefabs/";
        private const string CarRoot = "Assets/race_cars_2d/cars/";
        private const string MonsterRoot = "Assets/DungeonMonsters2D/Characters/";

        public struct Result
        {
            public HazardProfile GloveDrop;
            public HazardProfile Uppercut;
            public HazardProfile RaceCar;

            public MonsterProfile Dragon;
            public MonsterProfile Ghost;

            public GameObject AmbientGlows;
            public GameObject WindTrails;
            public GameObject Rain;
            public GameObject FallingStars;
        }

        public static Result Build(string dataDir, string libraryPath, GameArt art)
        {
            string hazardDir = dataDir + "/Hazards";
            Directory.CreateDirectory(hazardDir);
            AssetDatabase.Refresh();

            BuildLibrary(libraryPath);

            var result = new Result
            {
                AmbientGlows = Cfx("Misc/CFXR3 Ambient Glows"),
                WindTrails = Cfx("Nature/CFXR4 Wind Trails"),
                Rain = Cfx("Nature/CFXR4 Rain Falling"),
                FallingStars = Cfx("Magic Misc/CFXR4 Falling Stars"),
            };

            // Classic: gloves tumble down the lanes.
            result.GloveDrop = Profile(hazardDir + "/GloveDrop.asset", p =>
            {
                p.giftName = "Boxing";
                p.maxPerWave = 2;
                p.warningDuration = 0.85f;
                p.sprites = art.gloves.Skip(1).ToArray();
                p.scale = 1f;
                p.spinSpeed = 270f;
                p.hitRadius = 0.55f;
                p.impactTrauma = 0.6f;
                p.impactZoomKick = -0.8f;
                p.impactEffect = Cfx("Impacts/CFXR Hit A (Red)");
                p.impactEffectScale = 1.2f;
                p.impactText = Cfx("Texts/CFXR _POW_");
                p.launchSfx = Sfx.Whoosh;
                p.impactSfx = Sfx.Punch;
            });

            // A giant glove rockets up from below the screen; warned at the bottom edge.
            result.Uppercut = Profile(hazardDir + "/Uppercut.asset", p =>
            {
                p.giftName = "Uppercut";
                p.maxPerWave = 1;
                p.warningDuration = 1f;
                p.sprites = new[] { art.gloves[1] };
                p.scale = 1.9f;
                p.spinSpeed = 0f;
                p.fromBelow = true;
                p.speedMultiplier = 1.3f;
                p.hitRadius = 0.65f;
                p.knockbackMultiplier = 1.15f;
                p.impactTrauma = 0.8f;
                p.impactZoomKick = -1.2f;
                p.zoomOut = 1.5f;
                p.trailEffect = Cfx("Nature/CFXR4 Wind Trails");
                p.trailScale = 0.6f;
                p.impactEffect = Cfx("Impacts/CFXR Hit D 3D (Yellow)");
                p.impactEffectScale = 1.4f;
                p.impactText = Cfx("Texts/CFXR _BOING_");
                p.launchSfx = Sfx.Whoosh;
                p.impactSfx = Sfx.Punch;
            });

            // Eye-catcher: a race car dives nose-first down a lane trailing fire; the camera pulls back to show it coming.
            const float carScale = 0.34f;
            result.RaceCar = Profile(hazardDir + "/RaceCar.asset", p =>
            {
                p.giftName = "Race Car";
                p.maxPerWave = 1;
                p.warningDuration = 1.5f;
                p.sprites = new[] { 1, 2, 3, 4, 5 }.Select(i => Load<Sprite>($"{CarRoot}pitstop_car_{i}.png")).ToArray();
                p.scale = carScale;
                p.spinSpeed = 0f;
                p.speedMultiplier = 1.7f;
                p.hitRadius = 0.6f;
                p.knockbackMultiplier = 1.3f;
                p.impactTrauma = 1f;
                p.impactZoomKick = -1.6f;
                p.zoomOut = 3.5f;
                p.trailEffect = Cfx("Fire/CFXR Fire");
                p.trailOffset = new Vector2(0f, 4.2f); // Rear wing (top of the sprite), in the car's local units.
                p.trailScale = 0.9f / carScale;
                p.impactEffect = Cfx("Explosions/CFXR Explosion 1");
                p.impactEffectScale = 1.6f;
                p.impactText = Cfx("Texts/CFXR _BOOM_");
                p.launchSfx = Sfx.Boost;
                p.impactSfx = Sfx.Thunder;
            });

            // Ambush monsters (Dungeon Characters 2D). The rigs are drawn facing left.
            string monsterDir = dataDir + "/Monsters";
            Directory.CreateDirectory(monsterDir);
            AssetDatabase.Refresh();

            result.Dragon = Monster(monsterDir + "/Dragon.asset", m =>
            {
                m.displayName = "Dragon";
                m.prefab = Load<GameObject>(MonsterRoot + "DragonRed.prefab");
                m.scale = 0.35f; // The rig is ~10 units wide at scale 1.
                m.artFacesRight = false;
                m.centerOffset = new Vector2(0f, 4f);
                m.attackPoint = new Vector2(4.5f, 4.5f);
                m.orbitRadius = 2.4f;
                m.attackEffect = Cfx("Fire/CFXR Fire Breath");
                m.grabEffect = Cfx("Fire/CFXR Fire");
            });

            result.Ghost = Monster(monsterDir + "/Ghost.asset", m =>
            {
                m.displayName = "Ghost";
                m.prefab = Load<GameObject>(MonsterRoot + "Ghost.prefab");
                m.scale = 0.9f;
                m.artFacesRight = false;
                m.centerOffset = new Vector2(0f, 1.2f);
                m.attackPoint = new Vector2(0.9f, 1.1f);
                m.orbitRadius = 1.9f;
                m.attackEffect = Cfx("Eerie/CFXR2 Skull Head Alt");
                m.grabEffect = Cfx("Eerie/CFXR2 Souls Escape");
            });

            return result;
        }

        private static MonsterProfile Monster(string path, System.Action<MonsterProfile> configure)
        {
            var profile = LoadOrCreate<MonsterProfile>(path);
            configure(profile);
            EditorUtility.SetDirty(profile);
            return profile;
        }

        private static void BuildLibrary(string path)
        {
            var library = LoadOrCreate<FxLibrary>(path);
            library.landPoof = Cfx("Misc/CFXR Magic Poof");
            library.heartLost = Cfx("Misc/CFXR2 Broken Heart");
            library.boostBurst = Cfx("Light/CFXR3 Hit Light B (Air)");
            library.helperGlow = Cfx("Light/CFXR3 LightGlow A (Loop)");
            library.powerUpBurst = Cfx("Impacts/CFXR Impact Glowing HDR (Blue)");
            library.superAura = Cfx("Magic Misc/CFXR3 Magic Aura A (Runic)");
            library.superElectric = Cfx("Electric/CFXR Electrified 3");
            library.speedLines = Cfx("Nature/CFXR4 Wind Trails");
            library.hazardSmash = Cfx("Electric/CFXR3 Hit Electric C (Air)");
            library.kiCharge = Cfx("Light/CFXR3 LightGlow A (Loop)");
            library.kiBlast = Cfx("Explosions/CFXR3 Fire Explosion B");
            library.barrageLoop = Cfx("Misc/CFXR2 Cartoon Fight (Loop)");
            library.barrageFinisherText = Cfx("Texts/CFXR2 _WHAM_ 3");
            library.winFireworks = Cfx("Explosions/CFXR4 Firework 1 Cyan-Purple (HDR)");
            library.winText = Cfx("Texts/CFXR3 _WOW_");
            EditorUtility.SetDirty(library);
        }

        private static HazardProfile Profile(string path, System.Action<HazardProfile> configure)
        {
            var profile = LoadOrCreate<HazardProfile>(path);
            configure(profile);
            EditorUtility.SetDirty(profile);
            return profile;
        }

        private static GameObject Cfx(string relativePath) => Load<GameObject>($"{CfxRoot}{relativePath}.prefab");
    }
}
