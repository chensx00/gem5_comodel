// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL.h"
#include "VChecksumXcelRTL___024root.h"
#include "VChecksumXcelRTL___024unit.h"

// FUNCTIONS
VChecksumXcelRTL__Syms::~VChecksumXcelRTL__Syms()
{
}

VChecksumXcelRTL__Syms::VChecksumXcelRTL__Syms(VerilatedContext* contextp, const char* namep, VChecksumXcelRTL* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
