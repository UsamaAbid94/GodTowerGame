using GodTower.Gameplay.Vfx;
using GodTower.Sound;
using UnityEngine;

namespace GodTower.Gameplay.Powers
{
    /// <summary>
    /// Dragon Ball style power-up look for the climber's boost: an explosive power-up flash, a golden
    /// aura and crackling electricity that follow the climber, and a pulsing golden glow on the body.
    /// Driven purely by <see cref="ClimberController.BoostStarted"/> / <see cref="ClimberController.BoostEnded"/>.
    /// </summary>
    public class SuperSaiyanFx : MonoBehaviour
    {
        [SerializeField] private ClimberController climber;
        [SerializeField] private SpriteRenderer body;
        [SerializeField] private CameraRig rig;
        [SerializeField] private ParticleFx particles;
        [SerializeField] private Color glow = new Color(1f, 0.9f, 0.45f);
        [SerializeField] private float pulseSpeed = 14f;

        private GameObject _aura;
        private GameObject _electric;
        private GameObject _speedLines;
        private bool _active;

        private void OnEnable()
        {
            climber.BoostStarted += PowerUp;
            climber.BoostEnded += PowerDown;
        }

        private void OnDisable()
        {
            climber.BoostStarted -= PowerUp;
            climber.BoostEnded -= PowerDown;
            PowerDown();
        }

        private void PowerUp()
        {
            var library = particles.Library;
            var center = climber.HitPoint - climber.transform.position;

            particles.Play(library.powerUpBurst, climber.HitPoint, 1.6f);
            _aura = particles.Attach(library.superAura, climber.transform, center, 1.4f, SortingOrders.Climber - 2);
            _electric = particles.Attach(library.superElectric, climber.transform, center, 1.1f, SortingOrders.Climber + 1);
            _speedLines = particles.Attach(library.speedLines, climber.transform, center + Vector3.up * 2f, 1.2f, SortingOrders.Climber - 3);

            rig.AddTrauma(0.5f);
            rig.KickZoom(1.2f);
            GameAudio.Play(Sfx.Thunder, 0.7f);
            _active = true;
        }

        private void PowerDown()
        {
            if (!_active)
                return;

            _active = false;
            ParticleFx.Release(_aura);
            ParticleFx.Release(_electric);
            ParticleFx.Release(_speedLines);
            _aura = _electric = _speedLines = null;
            SetTint(Color.white);
        }

        private void LateUpdate()
        {
            if (_active)
                SetTint(Color.Lerp(Color.white, glow, 0.55f + 0.45f * Mathf.Sin(Time.time * pulseSpeed)));
        }

        /// <summary>Changes RGB only; the climber owns alpha (invulnerability blink).</summary>
        private void SetTint(Color tint)
        {
            tint.a = body.color.a;
            body.color = tint;
        }
    }
}
