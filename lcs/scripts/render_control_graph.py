#!/usr/bin/env python3
"""Render control_surface.dot to a PNG.

The source may contain more than one digraph. Each graph is rendered with
Graphviz and the images are stacked, top to bottom.
"""

from __future__ import annotations

import argparse
import shutil
import subprocess
import tempfile
from pathlib import Path


def split_graphs(text: str) -> list[str]:
    graphs: list[str] = []
    chunk: list[str] = []
    depth = 0
    capturing = False
    for line in text.splitlines(keepends=True):
        stripped = line.lstrip()
        if not capturing and stripped.startswith("digraph"):
            capturing = True
        if not capturing:
            continue
        chunk.append(line)
        depth += line.count("{") - line.count("}")
        if depth <= 0:
            graphs.append("".join(chunk))
            chunk = []
            capturing = False
            depth = 0
    if not graphs:
        raise SystemExit("control_surface.dot contains no digraph")
    return graphs


def render(source: Path, output: Path) -> None:
    dot = shutil.which("dot")
    if dot is None:
        raise SystemExit("dot (Graphviz) is not on PATH")
    graphs = split_graphs(source.read_text())
    output.parent.mkdir(parents=True, exist_ok=True)
    with tempfile.TemporaryDirectory(prefix="control-graph-") as tmp_name:
        tmp = Path(tmp_name)
        pngs: list[Path] = []
        for index, graph in enumerate(graphs):
            src = tmp / f"{index}.dot"
            png = tmp / f"{index}.png"
            src.write_text(graph)
            subprocess.run([dot, "-Tpng", "-Gdpi=160", f"-o{png}", str(src)], check=True)
            pngs.append(png)
        if len(pngs) == 1:
            shutil.copyfile(pngs[0], output)
            return
        magick = shutil.which("magick")
        convert = [magick] if magick is not None else ["convert"] if shutil.which("convert") else None
        if convert is None:
            raise SystemExit("ImageMagick is required to stack multiple graphs")
        gap = tmp / "gap.png"
        subprocess.run(
            [*convert, "-size", "1x28", "xc:white", str(gap)],
            check=True,
        )
        stacked: list[str] = []
        for png in pngs:
            stacked.extend([str(png), str(gap)])
        stacked.pop()
        subprocess.run(
            [*convert, "-background", "white", *stacked, "-append", str(output)],
            check=True,
        )


def main() -> None:
    here = Path(__file__).resolve().parent
    parser = argparse.ArgumentParser(description="Render the control-surface graph to PNG.")
    parser.add_argument("--source", type=Path, default=here / "control_surface.dot")
    parser.add_argument("--output", type=Path, default=here / "control_surface.png")
    args = parser.parse_args()
    render(args.source, args.output)
    print(args.output)


if __name__ == "__main__":
    main()
