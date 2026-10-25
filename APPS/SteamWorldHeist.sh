#!/bin/sh
BASE="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
GAME="$BASE/SteamWorldHeist"
LOG="$GAME/Arranque_SteamWorldHeist.txt"
mkdir -p "$GAME/logs" "$GAME/savedata/SteamWorld Heist"
exec >"$LOG" 2>&1
printf 'SteamWorld Heist RGDS+ FINAL RELEASE 3.0 - 2026-10-24\n'
export LANG=en_US.UTF-8 LANGUAGE=en LC_ALL=C
date; uname -a
cd "$GAME" || exit 1
for f in game/Heist runtime/box64-box32 runtime/gl4es/libGL.so.1 runtime/libs.x86/libheist_sdl_bridge.so runtime/libs.x86/libheist_glx_compat.so; do
 [ -s "$f" ] || { echo "Falta ficheiro: $f"; exit 2; }
done
# Embedded utility fallbacks target this exact GOG i386 executable.
if command -v sha256sum >/dev/null 2>&1; then
 actual=$(sha256sum "$GAME/game/Heist"); actual=${actual%% *}
else
 echo 'ERROR: sha256sum unavailable; cannot validate executable'; exit 6
fi
[ "$actual" = "cb9009ac77b685865f9bb9fc1797bb4cf638f36f6bd029e8cfde91d15b04c2ac" ] || {
 echo "ERROR: unexpected Heist executable: $actual"; exit 6;
}
# Settings: preserve saves and other user options; force known-working graphics and screen values.
SETTINGS="$GAME/savedata/SteamWorld Heist/settings.xml"
if [ ! -s "$SETTINGS" ]; then cp "$GAME/runtime/default-settings.xml" "$SETTINGS" || exit 3; fi
if [ ! -e "$SETTINGS.before-final3" ]; then
 cp "$SETTINGS" "$SETTINGS.before-final3" || exit 7
fi
for entry in 'Language.Custom:en' 'Language.Fallback:en' 'Visualizer.Bloom:0' 'Visualizer.EnableAO:0' 'Visualizer.HiQualityLight:0' 'Visualizer.ResolutionScale:1' 'Screen.Fullscreen:1' 'Screen.FullscreenSize:desktop' 'Screen.WindowSize:640;480' 'Screen.WindowResizable:0' 'Screen.VSync:1' 'MusicVolume:0.80' 'SoundVolume:0.90'; do
 key=${entry%%:*}; val=${entry#*:}
 if grep -Fq "Key=\"$key\"" "$SETTINGS"; then
  sed -i "s/\(Key=\"$key\" Value=\"\)[^\"]*/\1$val/" "$SETTINGS" || :
 else
  sed -i "/<\/Settings>/i\\ <Setting Key=\"$key\" Value=\"$val\" />" "$SETTINGS" || :
 fi
done
# Apply the RGDS+ controller preset once; keep backups of earlier user configs.
PROFILE="$GAME/savedata/SteamWorld Heist"
if [ ! -f "$PROFILE/.rgds-final3-controls" ]; then
 for config in gamepads.cfg controls.cfg; do
  if [ -f "$PROFILE/$config" ] && [ ! -e "$PROFILE/$config.before-final3" ]; then
   cp "$PROFILE/$config" "$PROFILE/$config.before-final3" || exit 7
  fi
  cp "$GAME/runtime/presets/$config" "$PROFILE/$config" || exit 7
 done
 touch "$PROFILE/.rgds-final3-controls" || exit 7
fi
# Expose the same verified RGDS+ mapping to native SDL.
export SDL_GAMECONTROLLERCONFIG="$(cat "$GAME/runtime/rgds-controller.txt")"
export SDL_GAMECONTROLLER_IGNORE_DEVICES_EXCEPT=''
echo "Comandos SDL: $SDL_GAMECONTROLLERCONFIG"
export XDG_DATA_HOME="$GAME/savedata"
export BOX64_DYNAREC=1 BOX64_LOG=1 BOX64_SHOWSEGV=1
export BOX64_LD_LIBRARY_PATH="$GAME/runtime/libs.x86:$GAME/game:$GAME"
# Use the firmware SDL, matching Dig2. The bundled sdl-native build has no
# Wayland bootstrap and must not shadow the firmware library.
export LD_LIBRARY_PATH="$GAME/runtime/gl4es:${LD_LIBRARY_PATH:-}"
export SDL_VIDEO_GL_DRIVER="$GAME/runtime/gl4es/libGL.so.1"
export LIBGL_ES=2 LIBGL_GL=21 LIBGL_FB=0
export SDL_AUDIODRIVER=alsa
if [ -n "${WAYLAND_DISPLAY:-}" ]; then export SDL_VIDEODRIVER=wayland;
elif [ -n "${DISPLAY:-}" ]; then export SDL_VIDEODRIVER=x11;
else echo 'Sem ambiente grafico'; exit 4; fi
unset BOX64_EMULATED_LIBS BOX64_PREFER_EMULATED
export BOX64_LD_PRELOAD="$GAME/runtime/libs.x86/libheist_glx_compat.so"
export BOX64_BOX32=1
export BOX64_LIBGL="$GAME/runtime/gl4es/libGL.so.1"
export SDL_DYNAMIC_API="$GAME/runtime/libs.x86/libheist_sdl_bridge.so"
LOWER=/sys/class/backlight/backlight/brightness
VOLUME=/sys/class/anbernic_misc/openbor_volume
lower_saved='' volume_saved='' guard_pid='' audio_pid='' game_pid=''
if [ -r "$LOWER" ] && [ -w "$LOWER" ]; then
 lower_saved=$(cat "$LOWER" 2>/dev/null)
 case "$lower_saved" in ''|*[!0-9]*) lower_saved='';; esac
fi
if [ -r "$VOLUME" ] && [ -w "$VOLUME" ]; then
 volume_saved=$(cat "$VOLUME" 2>/dev/null)
 case "$volume_saved" in ''|*[!0-9]*) volume_saved='';; *) [ "$volume_saved" -le 10 ] || volume_saved='';; esac
fi
restore() {
 trap - EXIT INT TERM HUP
 [ -z "$game_pid" ] || { kill "$game_pid" 2>/dev/null || :; wait "$game_pid" 2>/dev/null || :; }
 [ -z "$audio_pid" ] || { kill "$audio_pid" 2>/dev/null || :; wait "$audio_pid" 2>/dev/null || :; }
 [ -z "$guard_pid" ] || { kill "$guard_pid" 2>/dev/null || :; wait "$guard_pid" 2>/dev/null || :; }
 [ -z "$lower_saved" ] || printf '%s\n' "$lower_saved" > "$LOWER" 2>/dev/null || :
 [ -z "$volume_saved" ] || printf '%s\n' "$volume_saved" > "$VOLUME" 2>/dev/null || :
}
trap 'restore' EXIT
trap 'exit 130' INT
trap 'exit 143' TERM HUP
[ -z "$lower_saved" ] || { printf '0\n' > "$LOWER" 2>/dev/null || :; echo 'Ecra inferior desligado'; }
# System hardware volume remains adjustable via its physical buttons.
# Start at moderate level, restore the original system level when leaving.
[ -z "$volume_saved" ] || { printf '6\n' > "$VOLUME" 2>/dev/null || :; echo 'Volume inicial: 6/10'; }
# Audio keys require active monitoring; the sysfs level alone does not control OpenAL.
if command -v python3 >/dev/null 2>&1; then
 python3 -u "$GAME/runtime/rgds-audio-keys.py" "$VOLUME" >>"$LOG" 2>&1 &
 audio_pid=$!
else
 echo 'AVISO: python3 indisponivel; teclas de volume sem monitorizacao'
fi
cd "$GAME/game" || exit 5
"$GAME/runtime/box64-box32" "$GAME/game/Heist" >"$GAME/logs/Heist_Game.txt" 2>&1 &
game_pid=$!
# Independent guard restores hardware state if launcher is interrupted.
if [ -n "$lower_saved$volume_saved" ]; then
 /bin/sh "$GAME/runtime/rgds-guard.sh" "$game_pid" "$lower_saved" "$volume_saved" &
 guard_pid=$!
fi
wait "$game_pid"; rc=$?; game_pid=''
echo "Heist exit code: $rc"
exit "$rc"
