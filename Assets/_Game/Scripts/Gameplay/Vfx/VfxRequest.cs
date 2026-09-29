using UnityEngine;

namespace GodTower.Gameplay.Vfx
{
    /// <summary>Parameters for a single pooled sprite effect.</summary>
    public struct VfxRequest
    {
        public Sprite Sprite;
        public Vector3 Position;
        public float Scale;
        public float Lifetime;
        public float Rotation;
        public float Spin;
        public Vector3 Velocity;
        public float Gravity;
        /// <summary>Air resistance per second: confetti bursts out fast, then drifts.</summary>
        public float Drag;
        /// <summary>Paper-flip rate (radians per second) with a matching side-to-side sway. 0 = off.</summary>
        public float Flutter;
        public Color Color;
        public int SortingOrder;
        public Transform Follow;

        public static VfxRequest At(Sprite sprite, Vector3 position, float scale, float lifetime) => new VfxRequest
        {
            Sprite = sprite,
            Position = position,
            Scale = scale,
            Lifetime = lifetime,
            Color = Color.white,
            SortingOrder = SortingOrders.Effects,
        };
    }
}
