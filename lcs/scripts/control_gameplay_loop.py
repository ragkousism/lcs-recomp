#!/usr/bin/env python3
"""Predetermined gameplay-loop steps on the control socket.

The sequence is: hello, observe, act MoveForward+Sprint, then a later observe
that shows that act was consumed. A pose that fails the checked read is
not-ready (pose_ready false and position null). A ready pose carries a
position. Requesting an image stays not-ready with image null.
"""

from __future__ import annotations

import sys
import time
from typing import Any

from lcs_control import ControlClient, ControlError


def main() -> int:
    if len(sys.argv) != 2:
        print("usage: control_gameplay_loop.py <socket>", file=sys.stderr)
        return 2
    client = ControlClient(sys.argv[1])
    try:
        hello = client.hello()
        if not hello.get("ok"):
            raise ControlError(f"hello failed: {hello}")
        before = client.observe()
        if not before.get("ok"):
            raise ControlError(f"observe failed: {before}")
        before_read = int(before["read_seq"])
        acted = client.act(hold=["MoveForward", "Sprint"], hold_ms=2000)
        if not acted.get("ok"):
            raise ControlError(f"act failed: {acted}")
        seq = int(acted["seq"])
        consumed: dict[str, Any] | None = None
        deadline = time.monotonic() + 3.0
        while time.monotonic() < deadline:
            snap = client.observe()
            pad = snap.get("pad") or {}
            if int(snap.get("read_seq", 0)) > before_read and int(pad.get("applied_seq", 0)) == seq:
                consumed = snap
                break
            time.sleep(0.02)
        if consumed is None:
            raise ControlError("issued command was not consumed")
        if consumed.get("pose_ready"):
            position = consumed.get("position")
            if not isinstance(position, list) or len(position) != 3:
                raise ControlError("pose_ready without a position")
            print(f"position {position}")
        else:
            if consumed.get("position") is not None or consumed.get("forward") is not None:
                raise ControlError("failed pose reported a position")
            print("pose not-ready")
        image = client.observe(image=True)
        if not image.get("ok") or image.get("image") is not None or image.get("error") != "not_ready":
            raise ControlError(f"image readback was not not-ready: {image}")
        print("sequence completed")
        print("gameplay loop ok")
        return 0
    except (ControlError, OSError, KeyError, ValueError, TypeError) as exc:
        print(f"gameplay loop failed: {exc}", file=sys.stderr)
        return 1
    finally:
        client.close()


if __name__ == "__main__":
    sys.exit(main())
