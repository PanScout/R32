A compact, standards-clean RV32I core in SystemVerilog. The architecture is a modified Harvard design: distinct instruction and data paths for throughput, while sharing a single, flat memory map. The core is a straightforward, non-pipelined 4-stage state machine—FETCH / DECODE / READ / EXECUTE—that’s easy to reason about and extend. It synthesizes cleanly for Gowin GW5A FPGAs and has been verified end-to-end in hardware; timing analysis reports ~271 MHz fMAX.

<p align="center">
  <img src=".images/syn.png" alt="Synthesis results for the RV32I core (Gowin GW5A)" title="Synthesis results (GW5A)" />
  <br/>
  <em>Figure 1 — Synthesis summary</em>
</p>

<p align="center">
  <img src=".images/timing.png" alt="Static timing analysis for the RV32I core showing ~271 MHz fMAX" title="Timing analysis (~271 MHz fMAX)" />
  <br/>
  <em>Figure 2 — Timing analysis</em>
</p>
