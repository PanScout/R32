# tests/_runner.py
from __future__ import annotations
from pathlib import Path
from typing import Iterable, Mapping, Sequence, Union, Optional
import sys

from cocotb_tools.runner import get_runner, Verilog

Pathish = Union[str, Path]


def _normalize_sv_sources(proj: Path, sources: Optional[Iterable[Pathish]]) -> list[str]:
    """If sources is None, default to all Verilog/SystemVerilog under src/. Otherwise, absolutize."""
    if sources is None:
        patterns = ("*.sv", "*.v")
        found = []
        for pat in patterns:
            found.extend(sorted((proj / "src").rglob(pat)))
        return [str(p) for p in sorted(set(found))]
    out: list[str] = []
    for s in sources:
        p = Path(s)
        out.append(str(p if p.is_absolute() else (proj / p)))
    return out


def _discover_lib_sv(proj: Path) -> list[Path]:
    """
    Collect Verilog/SystemVerilog sources under lib/<name>/**.{sv,v}.
    Returned list is a flat list of files (Verilator does not use VHDL-style named libs).
    """
    lib_root = proj / "lib"
    if not lib_root.is_dir():
        return []
    files: list[Path] = []
    for pat in ("*.sv", "*.v"):
        files.extend(sorted(lib_root.rglob(pat)))
    return files


def _discover_include_dirs(proj: Path) -> list[str]:
    """
    Gather include directories for Verilator:
      - src/
      - Every directory that contains a .svh/.vh anywhere under lib/ or src/
    Verilator's -I is NOT recursive, so we collect all parent dirs of headers.
    """
    include_dirs: set[Path] = set()
    include_dirs.add(proj / "src")

    for root in (proj / "src", proj / "lib"):
        if not root.exists():
            continue
        for pat in ("*.svh", "*.vh"):
            for hdr in root.rglob(pat):
                include_dirs.add(hdr.parent)

    # Also add each first-level lib/<name> directory (good for common headers)
    lib_root = proj / "lib"
    if lib_root.is_dir():
        for child in lib_root.iterdir():
            if child.is_dir():
                include_dirs.add(child)

    return [str(p) for p in sorted(include_dirs)]


def run_cocotb(
    pyfile: Pathish,                 # __file__ of the test module
    dut: str,                        # HDL toplevel module (e.g., "and_gate")
    sources: Optional[Iterable[Pathish]] = None,  # SV/V files (defaults to src/**/*.{sv,v})
    build_subdir: str = "build/runner",
    waves: bool = False,             # False = no wave dumps; True adds --trace/--trace-fst/--trace-structs
    parameters: Optional[Mapping[str, object]] = None,  # Verilog parameters
    test_args: Optional[Sequence[str]] = None,   # extra sim args (e.g., ["+dumpfile=dump.fst"])
    defines: Optional[Mapping[str, object]] = None,     # `-DNAME=VALUE` preprocessor defines
    include_dirs: Optional[Iterable[Pathish]] = None,   # extra -I dirs (auto-discovered if None)
) -> None:
    """
    Minimal, portable wrapper around cocotb’s Python runner for **Verilator**.
    - Compiles SystemVerilog/Verilog from src/ and lib/.
    - Auto-discovers header include dirs.
    - Passes parameters (-G...), defines (-D...), and optional wave tracing.
    """
    mod_path = Path(pyfile).resolve()
    proj = mod_path.parents[1]            # repo root
    test_module = mod_path.stem           # filename without .py
    build_dir = proj / build_subdir
    build_dir.mkdir(parents=True, exist_ok=True)

    # 1) Collect sources: DUT + any libs under lib/
    verilog_sources = _normalize_sv_sources(proj, sources)
    lib_sources = [str(p) for p in _discover_lib_sv(proj)]
    all_sources = sorted(set(verilog_sources + lib_sources))

    if not all_sources:
        print("ERROR: No Verilog/SystemVerilog sources found under src/ or lib/")
        sys.exit(2)

    # 2) Include dirs & defines
    incs = [str(Path(p)) for p in (include_dirs or _discover_include_dirs(proj))]
    defs = dict(defines or {})
    params = dict(parameters or {})
    extra_test = list(test_args or [])

    # 3) Build args (waves adds Verilator tracing; runner already injects --trace and VM_TRACE)
    build_args: list[object] = []
    if waves:
        # Prefer compact FST + structured tracing; cocotb runner will also add --trace & VM_TRACE=1.
        build_args += [Verilog("--trace-fst"), Verilog("--trace-structs")]

    # 4) Build with Verilator
    runner = get_runner("verilator")
    runner.build(
        verilog_sources=all_sources,
        includes=incs,
        defines=defs,
        parameters=params,
        hdl_toplevel=dut,
        build_dir=str(build_dir),
        always=True,
        waves=waves,
        build_args=build_args,
    )

    # 5) Run tests
    runner.test(
        hdl_toplevel=dut,
        test_module=test_module,
        build_dir=str(build_dir),
        test_dir=str(build_dir),
        parameters=params,
        waves=waves,
        test_args=extra_test,
    )
