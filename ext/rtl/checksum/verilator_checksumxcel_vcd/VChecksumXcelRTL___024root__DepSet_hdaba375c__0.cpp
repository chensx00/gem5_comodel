// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChecksumXcelRTL.h for the primary calling header

#include "verilated.h"

#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__ico(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG

void VChecksumXcelRTL___024root___eval_triggers__ico(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
    vlSelf->__VicoTriggered.set(1U, (((IData)(vlSelf->checksum_unit___05Frecv___05Frdy_out) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__1)) 
                                     | ((IData)(vlSelf->ChecksumXcelRTL__DOT__start_pulse) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__1))));
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__1 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__1 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VicoDidInit))))) {
        vlSelf->__VicoDidInit = 1U;
        vlSelf->__VicoTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VChecksumXcelRTL___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__act(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG

void VChecksumXcelRTL___024root___eval_triggers__act(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->checksum_unit___05Frecv___05Frdy_out) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__2)) 
                                     | ((IData)(vlSelf->ChecksumXcelRTL__DOT__start_pulse) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__2))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__2 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__2 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VChecksumXcelRTL___024root___dump_triggers__act(vlSelf);
    }
#endif
}
