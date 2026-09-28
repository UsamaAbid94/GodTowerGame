using System.Collections;
using GodTower.Core;
using GodTower.Data;
using GodTower.Gameplay;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using GodTower.UI;
using TMPro;
using UnityEngine;
#if UNITY_EDITOR || DEVELOPMENT_BUILD
using UnityEngine.InputSystem;
#endif
using UnityEngine.UI;

namespace GodTower.Webhook
{
    /// <summary>
    /// Full-screen comedic "bump": a boxing bell, a slammed BUMP! title, eight gloves punching
    /// the climber from every direction (impact bursts, flashes, sparks, screen shake) and a
    /// giant uppercut finisher that knocks the climber down the tower. Triggered by
    /// <see cref="BumpServer.BumpReceived"/>; extra requests during a barrage are queued.
    /// </summary>
    public class GloveBarrage : MonoBehaviour
    {
        private struct Spark
        {
            public Image Image;
            public Vector2 Velocity;
            public float Age;
            public float Life;
        }

        [Header("References")]
        [SerializeField] private GameArt art;
        [SerializeField] private TMP_FontAsset font;
        [Tooltip("Font material preset for the BUMP! title (thick outline + drop shadow).")]
        [SerializeField] private Material titleMaterial;
        [SerializeField] private RectTransform stage;
        [SerializeField] private LevelController level;
        [SerializeField] private ClimberController climber;
        [SerializeField] private CameraRig rig;
        [SerializeField] private VfxPool vfx;
        [SerializeField] private ParticleFx particles;
        [SerializeField] private EventBannerFeed banners;

        [Header("Choreography")]
        [SerializeField, Range(4, 12)] private int gloveCount = 8;
        [SerializeField] private float gloveSize = 430f;
        [SerializeField] private float finisherSize = 950f;
        [SerializeField] private float strikeInterval = 0.12f;
        [SerializeField] private float flyTime = 0.16f;
        [SerializeField] private float knockbackMeters = 250f;
        [SerializeField, Min(0)] private int maxQueued = 3;

        private const int SparkCount = 48;

        private Image _flash;
        private Image _tint;
        private TMP_Text _title;
        private Image[] _gloves;
        private Image[] _impacts;
        private Spark[] _sparks;
        private int _nextImpact;
        private int _nextSpark;
        private int _queued;
        private bool _running;

        private void Awake()
        {
            _tint = CreateFullScreen("Tint");
            _gloves = new Image[gloveCount + 1];
            for (int i = 0; i < _gloves.Length; i++)
                _gloves[i] = CreateImage("Glove" + i, null);

            _impacts = new Image[10];
            for (int i = 0; i < _impacts.Length; i++)
                _impacts[i] = CreateImage("Impact" + i, null);

            _sparks = new Spark[SparkCount];
            for (int i = 0; i < SparkCount; i++)
                _sparks[i].Image = CreateImage("Spark" + i, art.impactStar);

            _title = CreateTitle();
            _flash = CreateFullScreen("Flash");
        }

        private void OnEnable() => BumpServer.BumpReceived += OnBump;

        private void OnDisable() => BumpServer.BumpReceived -= OnBump;

        private void Update()
        {
#if UNITY_EDITOR || DEVELOPMENT_BUILD
            if (Keyboard.current != null && Keyboard.current.bKey.wasPressedThisFrame)
                OnBump();
#endif
            UpdateSparks(Time.deltaTime);

            float shake = _running ? rig.Trauma * rig.Trauma : 0f;
            stage.anchoredPosition = Random.insideUnitCircle * (40f * shake);
        }

        private void OnBump()
        {
            if (!level.IsInLevel)
                return;

            if (_running)
                _queued = Mathf.Min(_queued + 1, maxQueued);
            else
                StartCoroutine(Run());
        }

        private IEnumerator Run()
        {
            _running = true;
            climber.BeginStun();
            var brawl = particles.Attach(particles.Library.barrageLoop, climber.transform, climber.HitPoint - climber.transform.position, 1.4f);
            banners.Push(BannerSide.Right, "Webhook", $"Boxing Gloves x{gloveCount}");
            GameAudio.Play(Sfx.Bell);
            rig.AddTrauma(0.35f);
            StartCoroutine(TitleSlam());
            StartCoroutine(Flash(_tint, new Color(1f, 0.15f, 0.1f, 0.35f), 0.6f));

            yield return new WaitForSeconds(0.25f);

            float offset = Random.Range(0f, 360f);
            var order = new int[gloveCount];
            for (int i = 0; i < gloveCount; i++)
                order[i] = i;
            for (int i = gloveCount - 1; i > 0; i--)
            {
                int j = Random.Range(0, i + 1);
                (order[i], order[j]) = (order[j], order[i]);
            }

            for (int i = 0; i < gloveCount; i++)
            {
                float angle = offset + order[i] * 360f / gloveCount;
                int sprite = 1 + i % (art.GloveCount - 1);
                StartCoroutine(Strike(_gloves[i], sprite, angle, gloveSize, false));
                yield return new WaitForSeconds(strikeInterval);
            }

            yield return new WaitForSeconds(flyTime + 0.3f);
            yield return Strike(_gloves[gloveCount], 0, -90f + Random.Range(-25f, 25f), finisherSize, true);

            ParticleFx.Release(brawl);
            climber.ReleaseStun(knockbackMeters);
            yield return new WaitForSeconds(0.8f);

            _running = false;
            if (_queued > 0 && level.IsInLevel)
            {
                _queued--;
                StartCoroutine(Run());
            }
            else
            {
                _queued = 0;
            }
        }

        private IEnumerator Strike(Image glove, int spriteIndex, float approachDegrees, float size, bool finisher)
        {
            var rt = glove.rectTransform;
            glove.sprite = art.gloves[spriteIndex];
            glove.color = Color.white;
            rt.sizeDelta = new Vector2(size, size);

            float rad = approachDegrees * Mathf.Deg2Rad;
            var dir = new Vector2(Mathf.Cos(rad), Mathf.Sin(rad));
            var target = ClimberOnStage() + Random.insideUnitCircle * 40f;
            var start = target + dir * (stage.rect.size.magnitude * 0.6f + size * 0.5f);
            var contact = target + dir * (size * 0.3f);

            float travel = Mathf.Atan2(-dir.y, -dir.x) * Mathf.Rad2Deg;
            rt.localRotation = Quaternion.Euler(0f, 0f, travel - art.GetGloveForward(spriteIndex));
            glove.gameObject.SetActive(true);
            GameAudio.Play(Sfx.Whoosh, 0.5f, 0.2f);

            float duration = finisher ? flyTime * 1.6f : flyTime;
            for (float t = 0f; t < duration; t += Time.deltaTime)
            {
                float k = t / duration;
                rt.anchoredPosition = Vector2.Lerp(start, contact, Ease.InQuad(k));
                rt.localScale = Vector3.one * Mathf.Lerp(0.8f, 1.1f, k);
                yield return null;
            }

            rt.anchoredPosition = contact;
            Impact(target, dir, finisher);

            var recoil = contact + dir * (size * 0.25f);
            for (float t = 0f; t < 0.3f; t += Time.deltaTime)
            {
                float k = t / 0.3f;
                rt.anchoredPosition = Vector2.Lerp(contact, recoil, Ease.OutQuad(k));
                glove.color = new Color(1f, 1f, 1f, 1f - k * k);
                yield return null;
            }

            glove.gameObject.SetActive(false);
        }

        private void Impact(Vector2 point, Vector2 fromDirection, bool finisher)
        {
            GameAudio.Play(Sfx.Punch, 1f, 0.15f);
            if (finisher)
                GameAudio.Play(Sfx.Hit, 1f);

            rig.AddTrauma(finisher ? 1f : 0.45f);
            rig.KickZoom(finisher ? -2f : -0.6f);
            HitStop.Freeze(finisher ? 0.16f : 0.035f);
            climber.Jolt(-fromDirection);
            if (finisher)
                particles.Play(particles.Library.barrageFinisherText, climber.HitPoint + Vector3.up * 1.5f, 1.6f, SortingOrders.Warnings);
            vfx.Impact(climber.HitPoint + (Vector3)(Random.insideUnitCircle * 0.4f), finisher ? 2f : 1f);

            Sprite[] bursts = { art.impactStar, art.explosion, art.energyFlash };
            var impact = _impacts[_nextImpact];
            _nextImpact = (_nextImpact + 1) % _impacts.Length;
            impact.sprite = finisher ? art.explosion : bursts[Random.Range(0, bursts.Length)];
            impact.rectTransform.anchoredPosition = point;
            impact.rectTransform.sizeDelta = Vector2.one * (finisher ? 800f : 320f);
            impact.rectTransform.localRotation = Quaternion.Euler(0f, 0f, Random.Range(0f, 360f));
            StartCoroutine(ImpactPop(impact));

            StartCoroutine(Flash(_flash, new Color(1f, 1f, 1f, finisher ? 0.85f : 0.35f), 0.15f));
            EmitSparks(point, finisher ? 16 : 6);
        }

        private IEnumerator ImpactPop(Image image)
        {
            image.gameObject.SetActive(true);
            for (float t = 0f; t < 0.3f; t += Time.deltaTime)
            {
                float k = t / 0.3f;
                image.rectTransform.localScale = Vector3.one * Mathf.Lerp(0.3f, 1.25f, Ease.OutBack(Mathf.Min(1f, k * 2f)));
                image.color = new Color(1f, 1f, 1f, 1f - Mathf.Max(0f, k - 0.4f) / 0.6f);
                yield return null;
            }
            image.gameObject.SetActive(false);
        }

        private IEnumerator TitleSlam()
        {
            var rt = _title.rectTransform;
            _title.gameObject.SetActive(true);
            _title.color = Color.white;

            float total = 1.4f + gloveCount * strikeInterval;
            for (float t = 0f; t < total; t += Time.deltaTime)
            {
                float slam = Mathf.Min(1f, t / 0.25f);
                rt.localScale = Vector3.one * Mathf.LerpUnclamped(3f, 1f, Ease.OutBack(slam));
                rt.localRotation = Quaternion.Euler(0f, 0f, Mathf.Sin(t * 18f) * 6f);
                if (t > total - 0.25f)
                    _title.color = new Color(1f, 1f, 1f, (total - t) / 0.25f);
                yield return null;
            }

            _title.gameObject.SetActive(false);
        }

        private static IEnumerator Flash(Image image, Color color, float duration)
        {
            image.enabled = true;
            for (float t = 0f; t < duration; t += Time.deltaTime)
            {
                image.color = new Color(color.r, color.g, color.b, color.a * (1f - t / duration));
                yield return null;
            }
            image.enabled = false;
        }

        private void EmitSparks(Vector2 origin, int count)
        {
            for (int i = 0; i < count; i++)
            {
                ref var spark = ref _sparks[_nextSpark];
                _nextSpark = (_nextSpark + 1) % _sparks.Length;

                float angle = Random.Range(0f, Mathf.PI * 2f);
                spark.Velocity = new Vector2(Mathf.Cos(angle), Mathf.Sin(angle)) * Random.Range(900f, 1800f);
                spark.Age = 0f;
                spark.Life = Random.Range(0.4f, 0.7f);
                var rt = spark.Image.rectTransform;
                rt.anchoredPosition = origin;
                rt.sizeDelta = Vector2.one * Random.Range(60f, 120f);
                spark.Image.gameObject.SetActive(true);
            }
        }

        private void UpdateSparks(float dt)
        {
            for (int i = 0; i < _sparks.Length; i++)
            {
                ref var spark = ref _sparks[i];
                if (!spark.Image.gameObject.activeSelf)
                    continue;

                spark.Age += dt;
                if (spark.Age >= spark.Life)
                {
                    spark.Image.gameObject.SetActive(false);
                    continue;
                }

                spark.Velocity *= 1f - 3f * dt;
                spark.Velocity.y -= 1500f * dt;
                var rt = spark.Image.rectTransform;
                rt.anchoredPosition += spark.Velocity * dt;
                rt.Rotate(0f, 0f, 720f * dt);
                spark.Image.color = new Color(1f, 1f, 1f, 1f - spark.Age / spark.Life);
            }
        }

        private Vector2 ClimberOnStage()
        {
            var screen = rig.Camera.WorldToScreenPoint(climber.HitPoint);
            RectTransformUtility.ScreenPointToLocalPointInRectangle(stage, screen, null, out var local);
            return local;
        }

        // ---- Runtime UI construction (pooled, created once) ---------------------------------

        private Image CreateImage(string objectName, Sprite sprite)
        {
            var go = new GameObject(objectName, typeof(RectTransform), typeof(Image));
            var rt = (RectTransform)go.transform;
            rt.SetParent(stage, false);
            rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.5f);
            var image = go.GetComponent<Image>();
            image.sprite = sprite;
            image.preserveAspect = true;
            image.raycastTarget = false;
            go.SetActive(false);
            return image;
        }

        private Image CreateFullScreen(string objectName)
        {
            var go = new GameObject(objectName, typeof(RectTransform), typeof(Image));
            var rt = (RectTransform)go.transform;
            rt.SetParent(stage, false);
            rt.anchorMin = new Vector2(-0.1f, -0.1f);
            rt.anchorMax = new Vector2(1.1f, 1.1f);
            rt.offsetMin = rt.offsetMax = Vector2.zero;
            var image = go.GetComponent<Image>();
            image.raycastTarget = false;
            image.enabled = false;
            return image;
        }

        private TMP_Text CreateTitle()
        {
            var go = new GameObject("Title", typeof(RectTransform), typeof(TextMeshProUGUI));
            var rt = (RectTransform)go.transform;
            rt.SetParent(stage, false);
            rt.anchorMin = rt.anchorMax = new Vector2(0.5f, 0.78f);
            rt.sizeDelta = new Vector2(1000f, 320f);

            var text = go.GetComponent<TextMeshProUGUI>();
            text.font = font;
            text.fontSharedMaterial = titleMaterial;
            text.fontSize = 230;
            text.alignment = TextAlignmentOptions.Center;
            text.textWrappingMode = TextWrappingModes.NoWrap;
            text.overflowMode = TextOverflowModes.Overflow;
            text.raycastTarget = false;
            text.text = "BUMP!";

            go.SetActive(false);
            return text;
        }
    }
}
