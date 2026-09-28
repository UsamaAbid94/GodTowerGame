namespace GodTower.Core
{
    /// <summary>Conversion between world units and the "metres" shown to the player.</summary>
    public static class WorldScale
    {
        public const float MetersPerUnit = 20f;

        public static float ToMeters(float units) => units * MetersPerUnit;

        public static float ToUnits(float meters) => meters / MetersPerUnit;
    }
}
