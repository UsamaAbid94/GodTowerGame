using System;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using UnityEngine;

namespace GodTower.Webhook
{
    /// <summary>
    /// Minimal HTTP/1.1 listener on port 56789 exposing GET/POST /bump.
    ///
    /// Sockets are served on a background thread; accepted bumps are counted with
    /// Interlocked and drained in Update() so <see cref="BumpReceived"/> always fires on
    /// Unity's main thread. A raw TcpListener is used instead of HttpListener because it
    /// behaves identically in the Editor and in IL2CPP Android builds and needs no URL ACLs.
    /// </summary>
    public sealed class BumpServer : MonoBehaviour
    {
        public const int Port = 56789;
        private const int MaxHeaderBytes = 8 * 1024;
        private const int ReadTimeoutMs = 2000;

        private static int _acceptingBumps;

        private TcpListener _listener;
        private Thread _thread;
        private volatile bool _running;
        private int _pendingBumps;

        /// <summary>Raised on the main thread once per accepted /bump request.</summary>
        public static event Action BumpReceived;

        /// <summary>
        /// Set by the level while it is being played. Read from the socket thread so the
        /// HTTP response can tell the caller whether the bump will be shown.
        /// </summary>
        public static bool AcceptingBumps
        {
            get => Volatile.Read(ref _acceptingBumps) == 1;
            set => Volatile.Write(ref _acceptingBumps, value ? 1 : 0);
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void Bootstrap()
        {
            var go = new GameObject(nameof(BumpServer));
            DontDestroyOnLoad(go);
            go.AddComponent<BumpServer>();
        }

        private void OnEnable()
        {
            try
            {
                _listener = new TcpListener(IPAddress.Any, Port);
                _listener.Start();
            }
            catch (SocketException e)
            {
                Debug.LogWarning($"[BumpServer] Could not listen on port {Port}: {e.Message}");
                _listener = null;
                return;
            }

            _running = true;
            _thread = new Thread(AcceptLoop) { IsBackground = true, Name = "BumpServer" };
            _thread.Start();
            Debug.Log($"[BumpServer] Listening on http://localhost:{Port}/bump");
        }

        private void OnDisable()
        {
            _running = false;
            _listener?.Stop();
            _listener = null;
            _thread = null;
        }

        private void Update()
        {
            int count = Interlocked.Exchange(ref _pendingBumps, 0);
            for (int i = 0; i < count; i++)
                BumpReceived?.Invoke();
        }

        // ---- Socket thread ------------------------------------------------------------------

        private void AcceptLoop()
        {
            while (_running)
            {
                TcpClient client;
                try
                {
                    client = _listener.AcceptTcpClient();
                }
                catch (SocketException)
                {
                    break; // Listener stopped.
                }
                catch (ObjectDisposedException)
                {
                    break;
                }

                try
                {
                    using (client)
                        Handle(client);
                }
                catch (Exception e) when (e is IOException || e is SocketException)
                {
                    // Client hung up or timed out; keep serving.
                }
            }
        }

        private void Handle(TcpClient client)
        {
            client.ReceiveTimeout = ReadTimeoutMs;
            client.SendTimeout = ReadTimeoutMs;
            var stream = client.GetStream();

            string header = ReadHeader(stream, out int contentLength);
            if (header == null)
                return;
            DrainBody(stream, contentLength);

            string[] requestLine = header.Split(new[] { "\r\n" }, StringSplitOptions.None)[0].Split(' ');
            string method = requestLine.Length > 0 ? requestLine[0].ToUpperInvariant() : string.Empty;
            string path = requestLine.Length > 1 ? requestLine[1] : string.Empty;
            int query = path.IndexOf('?');
            if (query >= 0)
                path = path.Substring(0, query);
            path = path.TrimEnd('/');

            if (method == "OPTIONS")
            {
                Respond(stream, 204, "No Content", null);
                return;
            }

            if (path != "/bump")
            {
                Respond(stream, 404, "Not Found", "{\"ok\":false,\"error\":\"unknown path, use /bump\"}");
                return;
            }

            if (method != "GET" && method != "POST")
            {
                Respond(stream, 405, "Method Not Allowed", "{\"ok\":false,\"error\":\"use GET or POST\"}");
                return;
            }

            if (!AcceptingBumps)
            {
                Respond(stream, 409, "Conflict", "{\"ok\":false,\"error\":\"no level is being played\"}");
                return;
            }

            Interlocked.Increment(ref _pendingBumps);
            Respond(stream, 200, "OK", "{\"ok\":true,\"event\":\"bump\"}");
        }

        private static string ReadHeader(NetworkStream stream, out int contentLength)
        {
            contentLength = 0;
            var buffer = new byte[MaxHeaderBytes];
            int total = 0;

            while (total < buffer.Length)
            {
                int read = stream.Read(buffer, total, buffer.Length - total);
                if (read <= 0)
                    return null;
                total += read;

                string text = Encoding.ASCII.GetString(buffer, 0, total);
                int end = text.IndexOf("\r\n\r\n", StringComparison.Ordinal);
                if (end < 0)
                    continue;

                string header = text.Substring(0, end);
                foreach (var line in header.Split(new[] { "\r\n" }, StringSplitOptions.None))
                {
                    if (line.StartsWith("Content-Length:", StringComparison.OrdinalIgnoreCase))
                        int.TryParse(line.Substring(15).Trim(), out contentLength);
                }

                // Body bytes already received count towards the content length.
                contentLength = Math.Max(0, contentLength - (total - (end + 4)));
                return header;
            }

            return null;
        }

        private static void DrainBody(NetworkStream stream, int remaining)
        {
            var scratch = new byte[1024];
            remaining = Math.Min(remaining, 64 * 1024);
            while (remaining > 0)
            {
                int read = stream.Read(scratch, 0, Math.Min(scratch.Length, remaining));
                if (read <= 0)
                    return;
                remaining -= read;
            }
        }

        private static void Respond(NetworkStream stream, int status, string reason, string json)
        {
            byte[] body = json != null ? Encoding.UTF8.GetBytes(json + "\n") : Array.Empty<byte>();
            string head =
                $"HTTP/1.1 {status} {reason}\r\n" +
                "Content-Type: application/json\r\n" +
                "Access-Control-Allow-Origin: *\r\n" +
                "Access-Control-Allow-Methods: GET, POST, OPTIONS\r\n" +
                $"Content-Length: {body.Length}\r\n" +
                "Connection: close\r\n\r\n";

            byte[] headBytes = Encoding.ASCII.GetBytes(head);
            stream.Write(headBytes, 0, headBytes.Length);
            if (body.Length > 0)
                stream.Write(body, 0, body.Length);
            stream.Flush();
        }
    }
}
