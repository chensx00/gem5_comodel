// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHECKSUMXCELRTL__SYMS_H_
#define VERILATED_VCHECKSUMXCELRTL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VChecksumXcelRTL.h"

// INCLUDE MODULE CLASSES
#include "VChecksumXcelRTL___024root.h"
#include "VChecksumXcelRTL___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VChecksumXcelRTL__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VChecksumXcelRTL* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VChecksumXcelRTL___024root     TOP;

    // CONSTRUCTORS
    VChecksumXcelRTL__Syms(VerilatedContext* contextp, const char* namep, VChecksumXcelRTL* modelp);
    ~VChecksumXcelRTL__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
