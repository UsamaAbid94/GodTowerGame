using GodTower.Gameplay.Hazards;
using UnityEngine;

namespace GodTower.Gameplay.Powers
{
    /// <summary>Applies collected power-up orbs: a Super Saiyan rush up the tower, or a Kamehameha that clears the screen.</summary>
    public class PowerUpController : MonoBehaviour
    {
        [SerializeField] private HazardSpawner hazards;
        [SerializeField] private ClimberController climber;
        [SerializeField] private KiBlast kiBlast;
        [SerializeField] private float superSaiyanDuration = 2f;

        private void OnEnable() => hazards.PowerUpCollected += Apply;

        private void OnDisable() => hazards.PowerUpCollected -= Apply;

        private void Apply(PowerUp powerUp)
        {
            switch (powerUp)
            {
                case PowerUp.SuperSaiyan:
                    climber.StartBoost(superSaiyanDuration);
                    break;
                case PowerUp.Kamehameha:
                    kiBlast.Fire();
                    break;
            }
        }
    }
}
