using UnityEngine;

namespace GodTower.Sound
{
    /// <summary>
    /// Procedural sound design: every SFX and the music loop are synthesised at start-up,
    /// so the build ships with zero audio files and no licensing questions.
    /// </summary>
    public static class SfxSynth
    {
        private const int SampleRate = 44100;
        private const float TwoPi = Mathf.PI * 2f;

        private delegate float SampleFn(float t, float duration);

        public static AudioClip Create(Sfx sfx)
        {
            switch (sfx)
            {
                case Sfx.Click: return Render("click", 0.07f, (t, d) => Sine(1250f, t) * Decay(t, 45f) * 0.5f);
                case Sfx.Grab: return Render("grab", 0.08f, Grab);
                case Sfx.Whoosh: return Render("whoosh", 0.45f, Whoosh);
                case Sfx.Punch: return Render("punch", 0.32f, Punch);
                case Sfx.Hit: return Render("hit", 0.4f, Hit);
                case Sfx.Boost: return Render("boost", 0.7f, Boost);
                case Sfx.Warning: return Render("warning", 0.3f, Warning);
                case Sfx.Bell: return Render("bell", 1.1f, Bell);
                case Sfx.Win: return Render("win", 1.3f, Win);
                case Sfx.Lose: return Render("lose", 1.2f, Lose);
                case Sfx.Thunder: return Render("thunder", 1.6f, Thunder);
                case Sfx.Countdown: return Render("countdown", 0.18f, (t, d) => Square(660f, t) * Decay(t, 14f) * 0.25f);
                case Sfx.Go: return Render("go", 0.4f, (t, d) => Square(990f, t) * Decay(t, 6f) * 0.25f);
                default: return null;
            }
        }

        /// <summary>A light 16 s I–vi–IV–V arpeggio loop at 120 bpm.</summary>
        public static AudioClip CreateMusicLoop()
        {
            float[] roots = { 130.81f, 110.00f, 87.31f, 98.00f };          // C3 A2 F2 G2
            int[][] chordSteps = { new[] { 0, 4, 7, 12 }, new[] { 0, 3, 7, 12 }, new[] { 0, 4, 7, 12 }, new[] { 0, 4, 7, 12 } };
            const float barSeconds = 2f;
            const float eighth = 0.25f;

            return Render("music", barSeconds * 8f, (t, d) =>
            {
                int chord = (int)(t / (barSeconds * 2f)) % roots.Length;
                float root = roots[chord];

                float noteT = t % eighth;
                int noteIndex = (int)(t / eighth);
                int[] steps = chordSteps[chord];
                int step = steps[(noteIndex % 8) < 4 ? noteIndex % 4 : 3 - noteIndex % 4];
                float arpFreq = root * 4f * Mathf.Pow(2f, step / 12f);
                float arp = Triangle(arpFreq, t) * Decay(noteT, 9f) * 0.16f;

                float beatT = t % 0.5f;
                float bass = Sine(root, t) * Decay(beatT, 4f) * 0.28f;

                float padFreq = root * 2f * Mathf.Pow(2f, steps[1] / 12f);
                float pad = (Sine(root * 2f, t) + Sine(padFreq, t)) * 0.045f;

                float hat = noteT < 0.02f ? Noise() * (1f - noteT / 0.02f) * 0.04f : 0f;
                return arp + bass + pad + hat;
            });
        }

        private static float Grab(float t, float d) =>
            (Noise() * Decay(t, 70f) * 0.5f) + Sine(420f, t) * Decay(t, 40f) * 0.35f;

        private static float Whoosh(float t, float d)
        {
            float env = Mathf.Sin(Mathf.PI * t / d);
            return LowPassNoise(Mathf.Lerp(0.05f, 0.35f, t / d)) * env * 0.6f;
        }

        private static float Punch(float t, float d)
        {
            float freq = Mathf.Lerp(170f, 42f, Mathf.Sqrt(t / d));
            float body = Sine(freq, t) * Decay(t, 9f);
            float slap = Noise() * Decay(t, 38f);
            return Saturate((body * 1.4f + slap * 0.9f) * 1.3f) * 0.8f;
        }

        private static float Hit(float t, float d)
        {
            float freq = Mathf.Lerp(320f, 70f, t / d);
            return Saturate(Square(freq, t) * Decay(t, 8f) * 0.6f + Noise() * Decay(t, 22f) * 0.7f) * 0.7f;
        }

        private static float Boost(float t, float d)
        {
            float freq = Mathf.Lerp(260f, 1100f, t / d) * (1f + 0.03f * Mathf.Sin(TwoPi * 18f * t));
            float env = Mathf.Min(1f, t * 20f) * (1f - t / d);
            return (Saw(freq, t) * 0.25f + LowPassNoise(0.3f) * 0.25f) * env;
        }

        private static float Warning(float t, float d)
        {
            bool on = t < 0.1f || (t > 0.15f && t < 0.25f);
            return on ? Square(880f, t) * 0.22f : 0f;
        }

        private static float Bell(float t, float d)
        {
            // Two strikes of a boxing-ring bell.
            float strike = t < 0.35f ? t : t - 0.35f;
            float partials = Sine(830f, strike) + 0.6f * Sine(1340f, strike) + 0.35f * Sine(2210f, strike);
            return partials * Decay(strike, 5f) * 0.3f;
        }

        private static float Win(float t, float d)
        {
            float[] notes = { 523.25f, 659.25f, 783.99f, 1046.5f };
            const float step = 0.13f;
            int i = Mathf.Min((int)(t / step), notes.Length - 1);
            float noteT = t - i * step;
            float lead = Triangle(notes[i], t) * Decay(noteT, i == notes.Length - 1 ? 2.5f : 10f);
            float harmony = i == notes.Length - 1 ? (Triangle(659.25f, t) + Triangle(783.99f, t)) * 0.5f * Decay(noteT, 2.5f) : 0f;
            return (lead + harmony) * 0.3f;
        }

        private static float Lose(float t, float d)
        {
            float[] notes = { 392f, 370f, 349.23f, 293.66f };
            const float step = 0.28f;
            int i = Mathf.Min((int)(t / step), notes.Length - 1);
            float noteT = t - i * step;
            float wobble = i == notes.Length - 1 ? 1f + 0.03f * Mathf.Sin(TwoPi * 7f * t) : 1f;
            return Triangle(notes[i] * wobble, t) * Decay(noteT, i == notes.Length - 1 ? 2f : 6f) * 0.35f;
        }

        private static float Thunder(float t, float d)
        {
            float crack = Noise() * Decay(t, 25f);
            float rumble = LowPassNoise(0.03f) * Decay(t, 2f) * 2.2f;
            return Saturate(crack * 0.6f + rumble) * 0.7f;
        }

        // --- Rendering helpers -------------------------------------------------------------

        private static float _lowPassState;
        private static uint _noiseSeed = 22222;

        private static AudioClip Render(string name, float duration, SampleFn fn)
        {
            int count = Mathf.CeilToInt(duration * SampleRate);
            var data = new float[count];
            _lowPassState = 0f;
            for (int i = 0; i < count; i++)
            {
                float t = i / (float)SampleRate;
                float fadeOut = Mathf.Clamp01((count - i) / (SampleRate * 0.01f));
                data[i] = Mathf.Clamp(fn(t, duration) * fadeOut, -1f, 1f);
            }

            var clip = AudioClip.Create(name, count, 1, SampleRate, false);
            clip.SetData(data, 0);
            return clip;
        }

        private static float Sine(float f, float t) => Mathf.Sin(TwoPi * f * t);
        private static float Square(float f, float t) => Mathf.Sign(Mathf.Sin(TwoPi * f * t));
        private static float Saw(float f, float t) => 2f * (f * t - Mathf.Floor(0.5f + f * t));
        private static float Triangle(float f, float t) => 2f * Mathf.Abs(Saw(f, t)) - 1f;
        private static float Decay(float t, float rate) => Mathf.Exp(-rate * t);
        private static float Saturate(float x) => (float)System.Math.Tanh(x);

        private static float Noise()
        {
            // xorshift: deterministic and allocation free.
            _noiseSeed ^= _noiseSeed << 13;
            _noiseSeed ^= _noiseSeed >> 17;
            _noiseSeed ^= _noiseSeed << 5;
            return (_noiseSeed / (float)uint.MaxValue) * 2f - 1f;
        }

        private static float LowPassNoise(float alpha)
        {
            _lowPassState += alpha * (Noise() - _lowPassState);
            return _lowPassState * 2.5f;
        }
    }
}
