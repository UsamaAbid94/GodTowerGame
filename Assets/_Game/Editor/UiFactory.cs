using System;
using GodTower.UI;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using Object = UnityEngine.Object;

namespace GodTower.EditorTools
{
    internal enum TextStyle
    {
        /// <summary>Large headings: thick outline, deep drop shadow.</summary>
        Title,
        /// <summary>Regular labels and captions.</summary>
        Body,
        /// <summary>Dark text on a white outline, for numbers over the sky.</summary>
        Light,
        /// <summary>No outline or shadow.</summary>
        Plain
    }

    /// <summary>Small helpers for building uGUI hierarchies and wiring serialized fields from editor code.</summary>
    internal static class UiFactory
    {
        public static FontBuilder.Styles Fonts;

        private const string KitRoot = "Assets/Hyper_Casual_UI/Sprites/";

        public static Sprite Kit(string relativePath)
        {
            var sprite = AssetDatabase.LoadAssetAtPath<Sprite>(KitRoot + relativePath);
            if (sprite == null)
                throw new InvalidOperationException($"UI kit sprite missing: {relativePath}");
            return sprite;
        }

        public static RectTransform Rect(string name, Transform parent, Vector2 anchor, Vector2 pivot, Vector2 position, Vector2 size)
        {
            var go = new GameObject(name, typeof(RectTransform));
            var rt = (RectTransform)go.transform;
            rt.SetParent(parent, false);
            rt.anchorMin = rt.anchorMax = anchor;
            rt.pivot = pivot;
            rt.anchoredPosition = position;
            rt.sizeDelta = size;
            return rt;
        }

        public static RectTransform Stretch(string name, Transform parent, float inset = 0f)
        {
            var rt = Rect(name, parent, Vector2.zero, new Vector2(0.5f, 0.5f), Vector2.zero, Vector2.zero);
            rt.anchorMin = Vector2.zero;
            rt.anchorMax = Vector2.one;
            rt.offsetMin = new Vector2(inset, inset);
            rt.offsetMax = new Vector2(-inset, -inset);
            return rt;
        }

        public static Image Image(RectTransform rt, Sprite sprite, Color color, bool raycast = false, bool preserveAspect = false)
        {
            var image = rt.gameObject.AddComponent<Image>();
            image.sprite = sprite;
            image.color = color;
            image.raycastTarget = raycast;
            image.preserveAspect = preserveAspect;
            if (sprite != null && sprite.border != Vector4.zero)
                image.type = UnityEngine.UI.Image.Type.Sliced;
            return image;
        }

        public static Image Image(string name, Transform parent, Sprite sprite, Vector2 anchor, Vector2 position, Vector2 size, Color? color = null, bool preserveAspect = true)
        {
            var rt = Rect(name, parent, anchor, new Vector2(0.5f, 0.5f), position, size);
            return Image(rt, sprite, color ?? Color.white, false, preserveAspect);
        }

        /// <summary>
        /// TextMeshPro label in the game font. Title and Body text get a light-to-dark vertical gradient on
        /// top of their outline + drop-shadow material, so labels look like raised, glossy 2.5D stickers.
        /// </summary>
        public static TMP_Text Label(string name, Transform parent, string text, int size, Color color, TextAlignmentOptions align,
            Vector2 anchor, Vector2 pivot, Vector2 position, Vector2 box, TextStyle style = TextStyle.Body)
        {
            var rt = Rect(name, parent, anchor, pivot, position, box);
            var label = rt.gameObject.AddComponent<TextMeshProUGUI>();
            label.font = Fonts.Font;
            label.fontSharedMaterial = style switch
            {
                TextStyle.Title => Fonts.Title,
                TextStyle.Light => Fonts.Light,
                TextStyle.Plain => Fonts.Font.material,
                _ => Fonts.Body,
            };
            label.text = text;
            label.fontSize = size;
            label.alignment = align;
            label.textWrappingMode = TextWrappingModes.NoWrap;
            label.overflowMode = TextOverflowModes.Overflow;
            label.raycastTarget = false;

            label.color = Color.white;
            if (style == TextStyle.Title || style == TextStyle.Body)
            {
                var top = Color.Lerp(color, Color.white, 0.45f);
                var bottom = Color.Lerp(color, Color.black, 0.18f);
                label.enableVertexGradient = true;
                label.colorGradient = new VertexGradient(top, top, bottom, bottom);
            }
            else
            {
                label.color = color;
            }
            return label;
        }

        /// <summary>Button using a kit sprite as its background, with an optional centred caption.</summary>
        public static Button Button(string name, Transform parent, Sprite background, Vector2 anchor, Vector2 position, Vector2 size, string caption = null, int captionSize = 56)
        {
            var rt = Rect(name, parent, anchor, new Vector2(0.5f, 0.5f), position, size);
            var image = Image(rt, background, Color.white, true);
            var button = rt.gameObject.AddComponent<Button>();
            button.targetGraphic = image;
            var colors = button.colors;
            colors.disabledColor = new Color(0.6f, 0.6f, 0.6f, 0.8f);
            button.colors = colors;
            rt.gameObject.AddComponent<ButtonFeedback>();

            if (!string.IsNullOrEmpty(caption))
                Label("Caption", rt, caption, captionSize, Color.white, TextAlignmentOptions.Center,
                    new Vector2(0.5f, 0.5f), new Vector2(0.5f, 0.5f), new Vector2(0f, 6f), size);
            return button;
        }

        /// <summary>Full-screen dimmer that blocks clicks, used as the root of popups.</summary>
        public static RectTransform Overlay(string name, Transform parent, float alpha = 0.6f)
        {
            var rt = Stretch(name, parent);
            rt.anchorMin = new Vector2(-0.05f, -0.05f);
            rt.anchorMax = new Vector2(1.05f, 1.05f);
            Image(rt, null, new Color(0.02f, 0.05f, 0.12f, alpha), true);
            return rt;
        }

        // ---- Serialized field wiring ------------------------------------------------------------

        /// <summary>Assigns private [SerializeField]s by name. Throws on typos so wiring can't silently break.</summary>
        public static void Wire(Object target, params (string field, object value)[] fields)
        {
            var so = new SerializedObject(target);
            foreach (var (field, value) in fields)
            {
                var prop = so.FindProperty(field)
                           ?? throw new InvalidOperationException($"{target.GetType().Name} has no serialized field '{field}'");
                switch (value)
                {
                    case Object obj:
                        prop.objectReferenceValue = obj;
                        break;
                    case Object[] array:
                        prop.arraySize = array.Length;
                        for (int i = 0; i < array.Length; i++)
                            prop.GetArrayElementAtIndex(i).objectReferenceValue = array[i];
                        break;
                    case float f:
                        prop.floatValue = f;
                        break;
                    case int n:
                        prop.intValue = n;
                        break;
                    case bool b:
                        prop.boolValue = b;
                        break;
                    case Color c:
                        prop.colorValue = c;
                        break;
                    case null:
                        prop.objectReferenceValue = null;
                        break;
                    default:
                        throw new ArgumentException($"Unsupported value type {value.GetType().Name} for '{field}'");
                }
            }
            so.ApplyModifiedPropertiesWithoutUndo();
        }
    }
}
