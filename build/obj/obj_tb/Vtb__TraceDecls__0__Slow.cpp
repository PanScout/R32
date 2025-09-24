// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vtb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"S_IDLE", "S_FETCH", "S_DECODE", "S_READ", 
                                "S_EXECUTE", "S_ERROR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101"};
        tracep->declDTypeEnum(1, "control_unit.state", 6, 3, __VenumItemNames, __VenumItemValues);
    }
}

void Vtb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vtb___024root__traceDeclTypesSub0(tracep);
}
