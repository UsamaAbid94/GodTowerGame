namespace GodTower.Gameplay
{
    /// <summary>Sprite sorting layout, back to front.</summary>
    public static class SortingOrders
    {
        public const int Sky = -100;
        public const int Horizon = -90;
        public const int FarClouds = -50;
        public const int Tower = 0;
        public const int TowerTrim = 5;
        /// <summary>Drop shadows cast onto the tower face (2.5D depth).</summary>
        public const int Shadows = 8;
        public const int Pickups = 15;
        public const int Climber = 20;
        public const int Hazards = 30;
        public const int Effects = 40;
        public const int NearClouds = 60;
        public const int Warnings = 80;
    }
}
