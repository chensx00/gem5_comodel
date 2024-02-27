// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChecksumXcelRTL.h for the primary calling header

#include "verilated.h"

#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL___024root.h"

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_static(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_static\n"); );
}

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_initial__TOP(VChecksumXcelRTL___024root* vlSelf);

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_initial(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_initial\n"); );
    // Body
    VChecksumXcelRTL___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__0 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__0 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__1 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__1 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__2 
        = vlSelf->checksum_unit___05Frecv___05Frdy_out;
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__2 
        = vlSelf->ChecksumXcelRTL__DOT__start_pulse;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_initial__TOP(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[0U] = 0U;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[0U] = 0U;
}

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_final(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_final\n"); );
}

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_triggers__stl(VChecksumXcelRTL___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__stl(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_stl(VChecksumXcelRTL___024root* vlSelf);

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_settle(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VChecksumXcelRTL___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VChecksumXcelRTL___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("ChecksumXcelRTL.v", 741, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VChecksumXcelRTL___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__stl(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] checksum_unit__recv__rdy_out or [hybrid] ChecksumXcelRTL.start_pulse)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VChecksumXcelRTL___024root___stl_sequent__TOP__0(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp1;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp1 = 0;
    IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp2;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp2 = 0;
    QData/*37:0*/ ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0;
    ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0 = 0;
    // Body
    vlSelf->enq___05Fmsg_ = vlSelf->xcel___05Freq___05Fmsg;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata[0U] 
        = vlSelf->xcel___05Freq___05Fmsg;
    vlSelf->reg0 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
    vlSelf->reg1 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
    vlSelf->reg2 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out;
    vlSelf->reg3 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out;
    vlSelf->reg4 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out;
    vlSelf->reg5 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail;
    vlSelf->checksum_unit___05Frecv___05Fmsg_out[0U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
    vlSelf->checksum_unit___05Frecv___05Fmsg_out[1U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
    vlSelf->checksum_unit___05Frecv___05Fmsg_out[2U] 
        = (IData)((((QData)((IData)(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out)) 
                    << 0x20U) | (QData)((IData)(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out))));
    vlSelf->checksum_unit___05Frecv___05Fmsg_out[3U] 
        = (IData)(((((QData)((IData)(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out))) 
                   >> 0x20U));
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[0U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[1U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[2U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[3U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[4U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[5U] 
        = vlSelf->clk;
    vlSelf->xcel___05Freq___05Frdy = ((~ (IData)(vlSelf->reset)) 
                                      & (2U > (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount)));
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[0U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[1U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[2U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[3U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[4U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[5U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[0U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[1U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[2U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[3U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[4U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[5U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[6U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[7U] 
        = vlSelf->clk;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[0U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[1U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[2U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[3U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[4U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[5U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[6U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[7U] 
        = vlSelf->reset;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[0U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[1U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[2U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[3U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[4U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[5U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[6U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[7U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[0U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[1U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[2U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[3U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[4U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[5U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[6U] 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[7U] 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U] 
           >> 0x10U);
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[0U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[1U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[2U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[3U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[4U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[5U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy 
        = ((~ (IData)(vlSelf->reset)) & (0U < (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount)));
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen[0U] 
        = ((IData)(vlSelf->xcel___05Freq___05Fen) & (IData)(vlSelf->xcel___05Freq___05Frdy));
    ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs
        [vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr
        [0U]];
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata[0U] 
        = ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[1U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[1U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U] 
            >> 0x10U) + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F1__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->deq___05Fret_data = (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata
                                        [0U]);
    vlSelf->deq___05Fret_type_ = (1U & (IData)((vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata
                                                [0U] 
                                                >> 0x25U)));
    vlSelf->deq___05Fret_addr = (0x1fU & (IData)((vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata
                                                  [0U] 
                                                  >> 0x20U)));
    vlSelf->deq___05Fret_ = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[2U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[1U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[2U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[1U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U]) 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F2__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->xcel___05Fresp___05Fmsg = ((QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->deq___05Fret_ 
                                                                   >> 0x25U))))) 
                                       << 0x20U);
    if ((1U & (~ (IData)((vlSelf->deq___05Fret_ >> 0x25U))))) {
        vlSelf->xcel___05Fresp___05Fmsg = ((0x100000000ULL 
                                            & vlSelf->xcel___05Fresp___05Fmsg) 
                                           | (IData)((IData)(
                                                             ((5U 
                                                               >= 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSelf->deq___05Fret_ 
                                                                           >> 0x20U))))
                                                               ? 
                                                              vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
                                                              [
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->deq___05Fret_ 
                                                                          >> 0x20U)))]
                                                               : 0U))));
    }
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[3U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[2U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[3U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[2U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U] 
            >> 0x10U) + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F3__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[4U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[3U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[4U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[3U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U]) 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F4__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[5U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[4U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[5U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[4U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U] 
            >> 0x10U) + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F5__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[6U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[5U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[6U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[5U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U]) 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F6__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[7U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[6U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[7U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[6U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out;
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp1 
        = ((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U] 
            >> 0x10U) + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp2 
        = (vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out 
           + vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F7__DOT_____05Ftmpvar___05Fup_step_temp2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[7U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[7U] 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out;
    vlSelf->checksum_unit___05Fsend___05Fmsg_out = 
        ((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out 
          << 0x10U) | vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out);
}

void VChecksumXcelRTL___024root___ico_comb__TOP__0(VChecksumXcelRTL___024root* vlSelf);

VL_ATTR_COLD void VChecksumXcelRTL___024root___eval_stl(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VChecksumXcelRTL___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        VChecksumXcelRTL___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__ico(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] checksum_unit__recv__rdy_out or [hybrid] ChecksumXcelRTL.start_pulse)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__act(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] checksum_unit__recv__rdy_out or [hybrid] ChecksumXcelRTL.start_pulse)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__nba(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] checksum_unit__recv__rdy_out or [hybrid] ChecksumXcelRTL.start_pulse)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VChecksumXcelRTL___024root___ctor_var_reset(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->xcel___05Freq___05Fen = VL_RAND_RESET_I(1);
    vlSelf->xcel___05Freq___05Fmsg = VL_RAND_RESET_Q(38);
    vlSelf->xcel___05Freq___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->xcel___05Fresp___05Fen = VL_RAND_RESET_I(1);
    vlSelf->xcel___05Fresp___05Fmsg = VL_RAND_RESET_Q(33);
    vlSelf->xcel___05Fresp___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->deq___05Fret_ = VL_RAND_RESET_Q(38);
    vlSelf->enq___05Fmsg_ = VL_RAND_RESET_Q(38);
    vlSelf->deq___05Fret_type_ = VL_RAND_RESET_I(1);
    vlSelf->deq___05Fret_addr = VL_RAND_RESET_I(5);
    vlSelf->deq___05Fret_data = VL_RAND_RESET_I(32);
    vlSelf->reg0 = VL_RAND_RESET_I(32);
    vlSelf->reg1 = VL_RAND_RESET_I(32);
    vlSelf->reg2 = VL_RAND_RESET_I(32);
    vlSelf->reg3 = VL_RAND_RESET_I(32);
    vlSelf->reg4 = VL_RAND_RESET_I(32);
    vlSelf->reg5 = VL_RAND_RESET_I(32);
    vlSelf->checksum_unit___05Frecv___05Fen_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->checksum_unit___05Frecv___05Fmsg_out);
    vlSelf->checksum_unit___05Frecv___05Frdy_out = VL_RAND_RESET_I(1);
    vlSelf->checksum_unit___05Fsend___05Fen_out = VL_RAND_RESET_I(1);
    vlSelf->checksum_unit___05Fsend___05Fmsg_out = VL_RAND_RESET_I(32);
    vlSelf->checksum_unit___05Fsend___05Frdy_out = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__start_pulse = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->ChecksumXcelRTL__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Frecv___05Fen = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__up_wr_regfile__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out = VL_RAND_RESET_I(32);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount = VL_RAND_RESET_I(2);
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head = VL_RAND_RESET_I(1);
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata[__Vi0] = VL_RAND_RESET_Q(38);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs[__Vi0] = VL_RAND_RESET_Q(38);
    }
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
