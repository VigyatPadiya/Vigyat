from flask import Flask, render_template, request, jsonify, send_file
import yt_dlp
import tempfile
import os
from werkzeug.utils import secure_filename

app = Flask(__name__)

def is_valid_youtube_url(url):
    """Validate if the URL is a valid YouTube URL"""
    youtube_regex = (
        r'(https?://)?(www\.)?'
        r'(youtube|youtu|youtube-nocookie)\.(com|be)/'
        r'(watch\?v=|embed/|v/|.+\?v=)?([^&=%\?]{11})')
    
    youtube_regex_match = re.match(youtube_regex, url)
    if youtube_regex_match:
        return True
    
    # Also allow youtu.be short URLs
    if url.startswith(('https://youtu.be/', 'http://youtu.be/')):
        return True
    
    return False

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/info", methods=["POST"])
def info():
    data = request.get_json(silent=True) or {}
    url = (data.get("url") or "").strip()
    if not url:
        return jsonify({"error": "No URL provided"}), 400

    try:
        with yt_dlp.YoutubeDL({"quiet": True}) as ydl:
            info = ydl.extract_info(url, download=False)
    except Exception as e:
        return jsonify({"error": f"yt-dlp error: {e}"}), 400

    if "entries" in info and info["entries"]:
        info = info["entries"][0]

    formats = info.get("formats", []) or []

    def is_video_capable(f):
        return (f.get("vcodec") not in (None, "none"))

    reduced = []
    seen_keys = set()
    for f in formats:
        if not is_video_capable(f):
            continue
        key = (f.get("height") or 0, f.get("vcodec"), f.get("ext"))
        if key in seen_keys:
            continue
        seen_keys.add(key)
        reduced.append({
            "format_id": f.get("format_id"),
            "ext": f.get("ext"),
            "height": f.get("height"),
            "width": f.get("width"),
            "fps": f.get("fps"),
            "tbr": f.get("tbr"),
            "format_note": f.get("format_note"),
            "acodec": f.get("acodec"),
            "vcodec": f.get("vcodec"),
            # ✅ Always treat as has_audio, since we merge bestaudio
            "has_audio": True,
        })

    reduced.sort(key=lambda f: ((f["height"] or 0), (f["tbr"] or 0)), reverse=True)

    return jsonify({
        "title": info.get("title"),
        "thumbnail": info.get("thumbnail"),
        "video_formats": reduced,
    })

@app.route("/download", methods=["POST"])
def download():
    data = request.get_json(silent=True) or {}
    url = (data.get("url") or "").strip()
    format_id = (data.get("format_id") or "").strip()
    if not url or not format_id:
        return jsonify({"error": "Missing URL or format_id"}), 400

    try:
        with yt_dlp.YoutubeDL({"quiet": True}) as ydl:
            info = ydl.extract_info(url, download=False)
    except Exception as e:
        return jsonify({"error": f"yt-dlp error: {e}"}), 400

    if "entries" in info and info["entries"]:
        info = info["entries"][0]

    selected = None
    for f in (info.get("formats") or []):
        if f.get("format_id") == format_id:
            selected = f
            break

    if not selected:
        return jsonify({"error": "Selected format not found"}), 400

    has_video = (selected.get("vcodec") not in (None, "none"))
    if not has_video:
        return jsonify({"error": "Chosen format is not a video format"}), 400

    fmt_str = f"{format_id}+bestaudio/best"

    tmpdir = tempfile.mkdtemp(prefix="ytmp4_")
    outtmpl = os.path.join(tmpdir, "%(title)s.%(ext)s")

    ydl_opts = {
        "format": fmt_str,
        "outtmpl": outtmpl,
        "noplaylist": True,
        "quiet": True,
        "merge_output_format": "mp4",
        "postprocessors": [
            {"key": "FFmpegVideoConvertor", "preferedformat": "mp4"}
        ],
    }

    try:
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            finfo = ydl.extract_info(url, download=True)
            filepath = ydl.prepare_filename(finfo)
    except Exception as e:
        return jsonify({"error": f"yt-dlp download error: {e}"}), 500

    base, _ = os.path.splitext(filepath)
    mp4_path = base + ".mp4"
    final_path = mp4_path if os.path.exists(mp4_path) else filepath

    safe_name = secure_filename(os.path.basename(final_path))
    return send_file(final_path, as_attachment=True, download_name=safe_name)

if __name__ == "__main__":
    app.run(debug=True)
