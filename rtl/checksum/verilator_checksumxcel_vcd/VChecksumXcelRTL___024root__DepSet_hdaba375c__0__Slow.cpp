// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChecksumXcelRTL.h for the primary calling header

#include "verilated.h"

#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__stl(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_triggers__stl(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
    vlSelf->__VstlTriggered.set(1U, (((IData)(vlSelf->checksum_unit___05Frecv___05Frdy_out) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__0)) 
                                     | ((IData)(vlSelf->ChecksumXcelRTL__DOT__start_pulse) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__0))));
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__0 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__0 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VChecksumXcelRTL___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
