// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VChecksumXcelRTL.h for the primary calling header

#ifndef VERILATED_VCHECKSUMXCELRTL___024UNIT_H_
#define VERILATED_VCHECKSUMXCELRTL___024UNIT_H_  // guard

#include "verilated.h"


class VChecksumXcelRTL__Syms;

class alignas(VL_CACHE_LINE_BYTES) VChecksumXcelRTL___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VChecksumXcelRTL__Syms* const vlSymsp;

    // CONSTRUCTORS
    VChecksumXcelRTL___024unit(VChecksumXcelRTL__Syms* symsp, const char* v__name);
    ~VChecksumXcelRTL___024unit();
    VL_UNCOPYABLE(VChecksumXcelRTL___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
