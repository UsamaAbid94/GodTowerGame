using System.Collections;
using GodTower.Core;
using GodTower.Gameplay.Hazards;
using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using UnityEngine;

namespace GodTower.Gameplay.Powers
{
    /// <summary>
    /// Kamehameha: the climber charges a ki ball at their hands, then fires a huge energy beam up the
    /// tower that blasts every hazard on screen. The beam is three sliced sprites (outer glow, hot core,
    /// spinning ball) stretched each frame from the hands to past the top of the view.
    /// </summary>
    public class KiBlast : MonoBehaviour
    {
        [SerializeField] private ClimberController climber;
        [SerializeField] private CameraRig rig;
        [SerializeField] private ParticleFx particles;
        [SerializeField] private HazardSpawner hazards;

        [Header("Beam")]
        [SerializeField] private SpriteRenderer beamGlow;
        [SerializeField] private SpriteRenderer beamCore;
        [SerializeField] private SpriteRenderer ball;
        [SerializeField] private float beamWidth = 1.6f;
        [Tooltip("Hands position relative to the climber's hit point.")]
        [SerializeField] private Vector2 handsOffset = new Vector2(0f, 1.1f);

        [Header("Timing")]
        [SerializeField] private float chargeTime = 0.45f;
        [SerializeField] private float extendTime = 0.12f;
        [SerializeField] private float beamTime = 0.9f;
        [SerializeField] private float fadeTime = 0.25f;

        public bool IsFiring { get; private set; }

        private Vector3 Hands => climber.HitPoint + (Vector3)handsOffset;

        private void Awake() => SetBeamVisible(false);

        public void Fire()
        {
            if (!IsFiring)
                StartCoroutine(Run());
        }

        private IEnumerator Run()
        {
            IsFiring = true;

            // Charge: a growing, spinning ki ball with a glow at the hands.
            var charge = particles.Attach(particles.Library.kiCharge, climber.transform,
                Hands - climber.transform.position, 1.2f, SortingOrders.Effects);
            GameAudio.Play(Sfx.Boost);
            ball.enabled = true;
            for (float t = 0f; t < chargeTime; t += Time.deltaTime)
            {
                float k = t / chargeTime;
                PlaceBall(Mathf.Lerp(0.2f, 1.1f, k) * (1f + Mathf.Sin(t * 50f) * 0.08f));
                rig.AddTrauma(0.6f * Time.deltaTime);
                yield return null;
            }
            ParticleFx.Release(charge);

            // Fire.
            particles.Play(particles.Library.kiBlast, Hands, 1.6f);
            rig.AddTrauma(0.8f);
            rig.KickZoom(1.8f);
            HitStop.Freeze(0.08f);
            GameAudio.Play(Sfx.Thunder);
            SetBeamVisible(true);

            float total = extendTime + beamTime + fadeTime;
            for (float t = 0f; t < total; t += Time.deltaTime)
            {
                float extend = Mathf.Clamp01(t / extendTime);
                float fade = Mathf.Clamp01((t - extendTime - beamTime) / fadeTime);
                float width = beamWidth * (1f - fade) * (1f + Mathf.Sin(t * 60f) * 0.08f);
                DrawBeam(extend, width);
                PlaceBall((1.1f + Mathf.Sin(t * 40f) * 0.15f) * (1f - fade));

                if (fade <= 0f)
                    hazards.BlastAll();
                yield return null;
            }

            SetBeamVisible(false);
            IsFiring = false;
        }

        private void DrawBeam(float extend01, float width)
        {
            var origin = Hands;
            float top = rig.FocusY + rig.ViewSize.y * 0.5f + 2f;
            float length = Mathf.Max(0.01f, (top - origin.y) * extend01);
            var center = origin + Vector3.up * (length * 0.5f);

            beamGlow.transform.position = center;
            beamGlow.size = new Vector2(width * 1.7f, length);
            beamCore.transform.position = center;
            beamCore.size = new Vector2(width * 0.55f, length);
        }

        private void PlaceBall(float scale)
        {
            ball.transform.position = Hands;
            ball.transform.localScale = Vector3.one * scale;
            ball.transform.Rotate(0f, 0f, 720f * Time.deltaTime);
        }

        private void SetBeamVisible(bool visible)
        {
            beamGlow.enabled = visible;
            beamCore.enabled = visible;
            ball.enabled = visible;
        }
    }
}
