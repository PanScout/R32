# ------------------------------------------------------------
# Verilator + SystemVerilog Project Makefile (auto-libs)
# Layout (unchanged):
#   build/obj        -> Verilator obj_dir equivalents (per-top)
#   build/bin        -> runnable simulators (V<top> symlinked as <top>)
#   build/waves      -> traces (fst|vcd)
#   lib/<L>/...      -> user libraries (auto-discovered)
#   src/             -> RTL/packages
#   tb/              -> SystemVerilog testbenches (top is a module)
#
# Usage:
#   make                    # builds TB=tb_top and runs, dumps FST
#   make TB=my_tb           # choose top module
#   make DUMP=vcd           # switch to VCD
#   make TIMING=1           # honor #delays (verilator --timing)*
#   make RUNARGS="+foo=1"   # pass plusargs to sim
#
# * Note: #delays with Verilator need --timing; otherwise they are ignored
#   (cocotb notes this explicitly). See docs. 
# ------------------------------------------------------------

# -------- Project directories --------
BUILD        := build
OBJROOT      := $(BUILD)/obj
BINDIR       := $(BUILD)/bin
WAVDIR       := $(BUILD)/waves
LIBROOT      := lib

OBJROOT_ABS  := $(abspath $(OBJROOT))
BINDIR_ABS   := $(abspath $(BINDIR))
WAVDIR_ABS   := $(abspath $(WAVDIR))
LIBROOT_ABS  := $(abspath $(LIBROOT))

# -------- Top-level module (SystemVerilog) --------
TB           ?= tb

# -------- Waves and runtime --------
DUMP         ?= fst            # fst|vcd
RUNARGS      ?=

# -------- Verilator tool/flags --------
VERILATOR    ?= verilator

# Core warnings/quality: be strict, be fast.
VFLAGS_BASE  := -Wall --sv -O3 --assert --x-assign unique --x-initial unique
# Respect #delays only if requested; default off for speed.
ifeq ($(strip $(TIMING)),1)
VFLAGS_BASE  += --timing
endif

# Include paths (lib/*, src, tb) for headers (.svh) and such
INCDIRS      := -Isrc -Itb $(addprefix -I,$(wildcard $(LIBROOT)/*))

# Trace selection (compile-time switches)
ifeq ($(DUMP),vcd)
TRACEFLAGS   := --trace --trace-structs
WAVE_EXT     := vcd
else
TRACEFLAGS   := --trace --trace-fst --trace-structs
WAVE_EXT     := fst
endif

# Multithread FST trace writing can help big dumps (optional)
# Uncomment to experiment:
# TRACEFLAGS  += --trace-threads 2

# Output directories per-top (mirror verilator obj_dir)
OBJDIR       := $(OBJROOT_ABS)/obj_$(TB)
WAVEFILE     := $(WAVDIR_ABS)/$(TB).$(WAVE_EXT)

# Source discovery (SV + Verilog; headers included via -I)
SV_SRC       := $(shell find src tb $(LIBROOT) -type f \( -name '*.sv' -o -name '*.v' \) 2>/dev/null | sort)

# Phonies
.PHONY: all run build wave clean distclean tree help \
        venv deps pytest py py-clean cocotb

# -------- Default --------
all: run

help:
	@echo "Targets:"
	@echo "  run            - build TB and run (dumps $(DUMP))"
	@echo "  build          - just build"
	@echo "  clean          - remove objects/binaries/waves"
	@echo "  distclean      - nuke build/ tree"
	@echo ""
	@echo "Vars:"
	@echo "  TB=<top_module>          (default: tb_top)"
	@echo "  DUMP=fst|vcd             (default: fst)"
	@echo "  TIMING=1                 (enable #delays via --timing)"
	@echo "  RUNARGS=\"+plusargs...\"   (passed to sim at runtime)"

tree:
	@echo "Discovered libs: $$(find $(LIBROOT) -maxdepth 1 -mindepth 1 -type d -printf '%f ' 2>/dev/null || echo '<none>')"
	@printf "\nSV sources:\n"; printf "  %s\n" $(SV_SRC)

# -------- Build: verilate & compile to native binary --------
# We use the modern one-shot --binary/--build flow.
# Top selection is explicit via --top-module (recommended per docs).
# Tracing flags select VCD/FST; output/obj dirs are controlled via --Mdir.
$(BINDIR_ABS)/$(TB): $(SV_SRC)
	@mkdir -p "$(OBJDIR)" "$(BINDIR_ABS)" "$(WAVDIR_ABS)"
	$(VERILATOR) $(VFLAGS_BASE) $(TRACEFLAGS) \
	  --top-module $(TB) \
	  --Mdir $(OBJDIR) \
	  $(INCDIRS) \
	  --binary --build \
	  $(SV_SRC)
	@# Verilator places the exe at $(OBJDIR)/V$(TB); provide a stable path:
	@ln -sf "$(OBJDIR)/V$(TB)" "$@"

build: $(BINDIR_ABS)/$(TB)

# -------- Run --------
run: build
	@echo "Running $(BINDIR_ABS)/$(TB) -> $(WAVEFILE)"
	@cd "$(OBJDIR)" && "./V$(TB)" $(RUNARGS)
	@if [ -f "$(OBJDIR)/dump.$(WAVE_EXT)" ]; then mv -f "$(OBJDIR)/dump.$(WAVE_EXT)" "$(WAVEFILE)"; fi
	@if [ -f "dump.$(WAVE_EXT)" ]; then mv -f "dump.$(WAVE_EXT)" "$(WAVEFILE)"; fi
	@if [ -f "$(OBJDIR)/sim.$(WAVE_EXT)" ]; then mv -f "$(OBJDIR)/sim.$(WAVE_EXT)" "$(WAVEFILE)"; fi
	@if [ -f "$(OBJDIR)/tb.$(WAVE_EXT)" ]; then mv -f "$(OBJDIR)/tb.$(WAVE_EXT)" "$(WAVEFILE)"; fi


wave: run

# -------- Cleaning --------
clean: py-clean
	@echo "Cleaning build artifacts..."
	@rm -rf "$(OBJROOT)" "$(BINDIR_ABS)" "$(WAVDIR_ABS)" "$(VENV_DIR)"



distclean: clean

# ===================== cocotb (Python-first) =====================
# We keep the same virtualenv bootstrap. For Verilator tracing under cocotb,
# set EXTRA_ARGS appropriately; VERILATOR_TRACE=1 also enables basic VCD
# in the Antmicro integration. See cocotb docs. 
#   e.g. DUMP=fst -> EXTRA_ARGS="--trace --trace-fst --trace-structs"
#   e.g. TIMING=1 -> EXTRA_ARGS+=" --timing"
# ---------------------------------------------------------------

VENV_DIR   ?= .venv
VENV_BIN    := $(VENV_DIR)/bin
PYTHON      := $(VENV_BIN)/python
PIP         := $(VENV_BIN)/pip
REQS_TXT   ?= requirements.txt

# Expose tests/ to Python path
TESTDIR      ?= tests
export PYTHONPATH := $(abspath $(TESTDIR)):$(PYTHONPATH)

venv:
	@python3 -m venv "$(VENV_DIR)"; \
	"$(PYTHON)" -V

deps: venv
	@$(PIP) install -U pip wheel >/dev/null
ifneq ("$(wildcard $(REQS_TXT))","")
	@echo "[deps] installing from $(REQS_TXT)"
	@$(PIP) install -r "$(REQS_TXT)"
else
	@echo "[deps] $(REQS_TXT) not found; installing minimal deps"
	@$(PIP) install cocotb pytest cocotb-test
endif
	@echo "[deps] ready"

pytest: deps
	@echo "[pytest] SIM=verilator (quiet)"
	@SIM=verilator \
	VERILATOR_COMPILE_ARGS="--quiet" \
	EXTRA_ARGS="$(if $(filter $(DUMP),vcd),--trace --trace-structs,--trace --trace-fst --trace-structs)$(if $(strip $(TIMING)), --timing,)" \
	MAKEFLAGS="-s" \
	COCOTB_LOG_LEVEL=INFO GPI_LOG_LEVEL=WARNING \
	"$(PYTHON)" -m pytest -q --disable-warnings

py: deps
	@if [ -z "$(FILE)" ]; then echo "Usage: make py FILE=tests/<file>.py"; exit 2; fi
	@SIM=verilator \
	VERILATOR_COMPILE_ARGS="--quiet" \
	EXTRA_ARGS="$(if $(filter $(DUMP),vcd),--trace --trace-structs,--trace --trace-fst --trace-structs)$(if $(strip $(TIMING)), --timing,)" \
	MAKEFLAGS="-s" \
	COCOTB_LOG_LEVEL=INFO GPI_LOG_LEVEL=WARNING \
	"$(PYTHON)" "$(FILE)" +verilator+quiet


py-clean:
	@# Python bytecode + __pycache__ in build/ and tests/
	@find build -type f -name "*.pyc" -delete 2>/dev/null || true
	@find build -type d -name "__pycache__" -exec rm -rf {} + 2>/dev/null || true
	@find "$(TESTDIR)" -type f -name "*.pyc" -delete 2>/dev/null || true
	@find "$(TESTDIR)" -type d -name "__pycache__" -exec rm -rf {} + 2>/dev/null || true



# Just prepare the env for cocotb work
cocotb: deps
	@echo "[cocotb] virtualenv ready at $(VENV_DIR)"
	@echo "[cocotb] SIM=verilator EXTRA_ARGS='--trace ... [--timing]' for wave/timing"
