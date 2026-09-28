using System;
using UnityEngine;

namespace GodTower.Sound
{
    /// <summary>
    /// Persistent audio service. Created on first use, survives scene loads,
    /// and owns the synthesised clip bank.
    /// </summary>
    public sealed class GameAudio : MonoBehaviour
    {
        private const string MutedKey = "godtower.muted";
        private const int VoiceCount = 10;

        private static GameAudio _instance;

        private AudioClip[] _clips;
        private AudioSource[] _voices;
        private AudioSource _music;
        private int _nextVoice;

        public static GameAudio Instance
        {
            get
            {
                if (_instance == null)
                {
                    var go = new GameObject(nameof(GameAudio));
                    DontDestroyOnLoad(go);
                    _instance = go.AddComponent<GameAudio>();
                }
                return _instance;
            }
        }

        public bool Muted
        {
            get => AudioListener.volume <= 0f;
            set
            {
                AudioListener.volume = value ? 0f : 1f;
                PlayerPrefs.SetInt(MutedKey, value ? 1 : 0);
            }
        }

        public static void Play(Sfx sfx, float volume = 1f, float pitchJitter = 0f) =>
            Instance.PlayInternal(sfx, volume, pitchJitter);

        private void Awake()
        {
            var values = (Sfx[])Enum.GetValues(typeof(Sfx));
            _clips = new AudioClip[values.Length];
            foreach (var sfx in values)
                _clips[(int)sfx] = SfxSynth.Create(sfx);

            _voices = new AudioSource[VoiceCount];
            for (int i = 0; i < VoiceCount; i++)
            {
                _voices[i] = gameObject.AddComponent<AudioSource>();
                _voices[i].playOnAwake = false;
            }

            _music = gameObject.AddComponent<AudioSource>();
            _music.clip = SfxSynth.CreateMusicLoop();
            _music.loop = true;
            _music.volume = 0.35f;
            _music.Play();

            AudioListener.volume = PlayerPrefs.GetInt(MutedKey, 0) == 1 ? 0f : 1f;
        }

        private void PlayInternal(Sfx sfx, float volume, float pitchJitter)
        {
            var voice = _voices[_nextVoice];
            _nextVoice = (_nextVoice + 1) % _voices.Length;

            voice.pitch = 1f + UnityEngine.Random.Range(-pitchJitter, pitchJitter);
            voice.PlayOneShot(_clips[(int)sfx], volume);
        }
    }
}
