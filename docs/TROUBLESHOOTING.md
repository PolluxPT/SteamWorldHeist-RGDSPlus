# Troubleshooting

- **Unsupported game build:** Dig and Heist bridges are tied to exact i386 executable hashes. Obtain the matching Linux build from your own store library; do not rename a Windows file or bypass the hash.
- **Runtime package 404 or hash error:** stop; do not disable integrity checks. Use a matching pinned package from Debian snapshot/archive, then pass `--runtime-debs /path/to/debs` to Prepare_Game.sh. A maintainer can update runtime-lock.json after verifying official Debian package metadata and re-test the console. Do not download replacement libraries from random mirrors.
- **No graphical environment:** launch from Applications, inside the console firmware session, rather than an ordinary remote shell.
- **Black screen or crash:** inspect `SteamWorldHeist/Arranque_SteamWorldHeist.txt` and `SteamWorldHeist/logs/`. For Dig 2, game output is in the launcher log. Record firmware and executable hash when reporting; review logs for private paths before posting.
- **No volume buttons:** Python 3, `amixer`, ALSA and access to `/dev/input/event*` are required on the console. Sound uses the firmware's OpenAL/ALSA support.
- **Lower screen remains off after a forced shutdown:** reboot. Normal exits have a restore handler and independent guard.
- **Missing SDL/OpenAL:** these are firmware dependencies. No native SDL binary is distributed by this kit; the tested launchers use firmware SDL. Do not copy Windows DLLs or ARM32 libraries into the ARM64 runtime.
- **Existing destination:** choose a new empty output folder. Back up saves before updating an existing installation. The importer will not overwrite it.
- **Offline preparation:** obtain the exact .deb files listed in runtime-lock.json on another computer and use `sh Prepare_Game.sh "/path/to/game" "/private/APPS" --runtime-debs "/path/to/debs"`. No runtime packages are installed system-wide.
