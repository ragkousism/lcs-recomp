#!/usr/bin/env python3
"""Local SEQPACKET client for the LCSNative control surface.

Control is asynchronous. The reply that accepts an act is not proof the guest
sampled it. Delivery is a later snapshot whose read_seq advanced and whose
pad.applied_seq equals the seq returned by act.

After release, disconnect, a bad message, or expiry, the next pad read is the
idle handoff: the physical sample, with that sample's camera and drive
republished, including when the poll is a 4 ms cache hit. One already-copied
guest sample can still coast a frame.

CONFIRM = "Sprint" and CANCEL = "Attack" name the PSP face buttons. They are
not extra opcodes. The action Camera is Select. Look is the camera object.

hello, act, observe, release, and ping each wait at most 1000 ms and raise
ControlError on timeout. close shuts the socket without a release message;
the host treats that EOF as a clear.
"""

from __future__ import annotations

import json
import socket
from typing import Any


class ControlError(Exception):
    pass


class ControlClient:
    def __init__(self, path: str) -> None:
        self._sock = socket.socket(socket.AF_UNIX, socket.SOCK_SEQPACKET)
        self._sock.settimeout(1.0)
        self._sock.connect(path)
        self._next_id = 1

    def close(self) -> None:
        try:
            self._sock.close()
        except OSError:
            pass

    def hello(self) -> dict[str, Any]:
        return self._request({"op": "hello", "version": 1})

    def act(
        self,
        hold: list[str] | None = None,
        tap: list[str] | None = None,
        move: tuple[int, int] | None = None,
        camera: tuple[int, int] | None = None,
        hold_ms: int | None = None,
        image: bool = False,
    ) -> dict[str, Any]:
        body: dict[str, Any] = {"op": "act"}
        if hold is not None:
            body["hold"] = list(hold)
        if tap is not None:
            body["tap"] = list(tap)
        if move is not None:
            body["move"] = {"x": int(move[0]), "y": int(move[1])}
        if camera is not None:
            body["camera"] = {"x": int(camera[0]), "y": int(camera[1])}
        if hold_ms is not None:
            body["hold_ms"] = int(hold_ms)
        if image:
            body["image"] = True
        return self._request(body)

    def observe(self, image: bool = False) -> dict[str, Any]:
        body: dict[str, Any] = {"op": "observe"}
        if image:
            body["image"] = True
        return self._request(body)

    def release(self) -> dict[str, Any]:
        return self._request({"op": "release"})

    def ping(self) -> dict[str, Any]:
        return self._request({"op": "ping"})

    def _request(self, body: dict[str, Any]) -> dict[str, Any]:
        message = dict(body)
        message["id"] = self._next_id
        self._next_id += 1
        payload = json.dumps(message, separators=(",", ":")).encode()
        try:
            self._sock.send(payload)
            data = self._sock.recv(65536)
        except socket.timeout as exc:
            raise ControlError("control reply timed out") from exc
        if not data:
            raise ControlError("control socket closed")
        reply = json.loads(data.decode())
        if not isinstance(reply, dict):
            raise ControlError("control reply was not an object")
        return reply
