#!/usr/bin/env python3
"""Hold walk-and-sprint for three seconds and print position when the pose is ready.

This is a fixed script on the control socket. It is not a stress policy and it
does not block saves. Delivery of each renewal is asynchronous: look at a later
observe, not at the act reply.
"""

from __future__ import annotations

import sys
import time

from lcs_control import ControlClient, ControlError


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: control_example.py <socket>", file=sys.stderr)
        return 2
    client = ControlClient(sys.argv[1])
    try:
        hello = client.hello()
        if not hello.get("ok"):
            raise ControlError(f"hello failed: {hello}")
        deadline = time.monotonic() + 3.0
        while time.monotonic() < deadline:
            client.act(hold=["MoveForward", "Sprint"], hold_ms=250)
            snap = client.observe()
            if snap.get("pose_ready"):
                print(snap.get("position"))
            time.sleep(0.25)
        return 0
    except (ControlError, OSError, KeyError, ValueError) as exc:
        print(f"control example failed: {exc}", file=sys.stderr)
        return 1
    finally:
        client.close()


if __name__ == "__main__":
    sys.exit(main())
