#!/usr/bin/env python3
"""Run unattended movement against disposable saves and a copied configuration."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import tempfile
import time


def fingerprint(root):
    """Compare contents and paths; report new/deleted files as well as changes."""
    if not root.exists():
        return None
    return {str(p.relative_to(root)): (hashlib.sha256(p.read_bytes()).hexdigest()
                                      if p.is_file() else '<directory>')
            for p in sorted(root.rglob('*'))}


def main():
    repo = Path(__file__).resolve().parents[2]
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--seconds', type=int, default=600)
    parser.add_argument('--driving', action='store_true')
    parser.add_argument('--game', type=Path, default=repo / 'lcs/game')
    parser.add_argument('--binary', type=Path, default=repo / 'out/lcs-linux/lcs/LCSNative')
    parser.add_argument('--config', type=Path, default=repo / 'lcs/config/LCSNative.ini')
    parser.add_argument('--output', type=Path)
    args = parser.parse_args()
    if args.seconds <= 0:
        parser.error('--seconds must be positive')
    game, binary, config = args.game.resolve(), args.binary.resolve(), args.config.resolve()
    if not binary.is_file() or not (game / 'EBOOT.ELF').is_file() or not (game / 'PSP_GAME').is_dir():
        parser.error('build LCSNative and supply a game root containing EBOOT.ELF and PSP_GAME')
    output = (args.output or repo / 'out/stress' / time.strftime('%Y%m%d-%H%M%S')).resolve()
    # Avoid overwriting artifacts or configuration in a previous run.
    output.mkdir(parents=True, exist_ok=False)
    source_saves = game / 'PSP/SAVEDATA'
    before = fingerprint(source_saves)
    config_before = hashlib.sha256(config.read_bytes()).hexdigest()
    shutil.copyfile(config, output / 'LCSNative.ini')
    result = 1
    peak_rss_kib = 0
    timed_out = False
    with tempfile.TemporaryDirectory(prefix='lcs-stress-') as scratch:
        isolated = Path(scratch) / 'game'
        isolated.mkdir()
        (isolated / 'EBOOT.ELF').symlink_to(game / 'EBOOT.ELF')
        (isolated / 'PSP_GAME').symlink_to(game / 'PSP_GAME', target_is_directory=True)
        (isolated / 'PSP').mkdir()
        if source_saves.exists():
            shutil.copytree(source_saves, isolated / 'PSP/SAVEDATA')
        env = os.environ.copy()
        env['PSPRECOMP_CONFIG'] = str(output / 'LCSNative.ini')
        command = [str(binary), '--game', str(isolated),
                   '--stress-driving' if args.driving else '--stress-test',
                   '--max-seconds', str(args.seconds), '--stress-output', str(output)]
        print(f'Unattended test: {args.seconds}s; driving={args.driving}; output={output}', flush=True)
        with (output / 'runtime.log').open('w') as log:
            process = subprocess.Popen(command, env=env, stdout=log, stderr=subprocess.STDOUT)
            try:
                deadline = time.monotonic() + args.seconds + 30
                while process.poll() is None:
                    # Linux-only telemetry; the test itself also runs on Windows.
                    try:
                        status = Path(f'/proc/{process.pid}/status').read_text()
                        for line in status.splitlines():
                            if line.startswith(('VmRSS:', 'VmHWM:')):
                                peak_rss_kib = max(peak_rss_kib, int(line.split()[1]))
                    except (OSError, ValueError):
                        pass
                    if time.monotonic() >= deadline:
                        timed_out = True
                        process.kill()
                        break
                    time.sleep(0.5)
                result = process.wait()
            finally:
                if process.poll() is None:
                    process.kill()
                    process.wait()
    unchanged = before == fingerprint(source_saves)
    config_unchanged = config_before == hashlib.sha256(config.read_bytes()).hexdigest()
    report = {'exit_code': result, 'watchdog_timeout': timed_out,
              'original_saves_unchanged': unchanged, 'original_config_unchanged': config_unchanged,
              'peak_rss_kib': peak_rss_kib,
              'requested_seconds': args.seconds, 'driving_requested': args.driving}
    (output / 'runner.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))
    print(f'Logs: {output / "runtime.log"}')
    return 0 if result == 0 and unchanged and config_unchanged and not timed_out else 1


if __name__ == '__main__':
    raise SystemExit(main())
