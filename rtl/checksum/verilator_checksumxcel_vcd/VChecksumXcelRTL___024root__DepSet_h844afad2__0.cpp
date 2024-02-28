// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VChecksumXcelRTL.h for the primary calling header

#include "verilated.h"

#include "VChecksumXcelRTL__Syms.h"
#include "VChecksumXcelRTL___024root.h"

VL_INLINE_OPT void VChecksumXcelRTL___024root___ico_sequent__TOP__0(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->enq___05Fmsg_ = vlSelf->xcel___05Freq___05Fmsg;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata[0U] 
        = vlSelf->xcel___05Freq___05Fmsg;
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
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy 
        = ((~ (IData)(vlSelf->reset)) & (0U < (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount)));
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen[0U] 
        = ((IData)(vlSelf->xcel___05Freq___05Fen) & (IData)(vlSelf->xcel___05Freq___05Frdy));
}

extern const VlUnpacked<CData/*0:0*/, 32> VChecksumXcelRTL__ConstPool__TABLE_h883563d3_0;
extern const VlUnpacked<CData/*0:0*/, 32> VChecksumXcelRTL__ConstPool__TABLE_hd1f4dc81_0;
extern const VlUnpacked<CData/*0:0*/, 32> VChecksumXcelRTL__ConstPool__TABLE_h8df27c36_0;
extern const VlUnpacked<CData/*1:0*/, 32> VChecksumXcelRTL__ConstPool__TABLE_hb4cec0e3_0;

VL_INLINE_OPT void VChecksumXcelRTL___024root___ico_comb__TOP__0(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___ico_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 0;
    CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT_____05Ftmpvar___05Fup_rtl_send_go;
    ChecksumXcelRTL__DOT__checksum_unit__DOT_____05Ftmpvar___05Fup_rtl_send_go = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->checksum_unit___05Frecv___05Frdy_out) 
                     << 4U) | (((IData)(vlSelf->ChecksumXcelRTL__DOT__start_pulse) 
                                << 3U) | (((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy) 
                                           << 2U) | (IData)(vlSelf->ChecksumXcelRTL__DOT__state))));
    vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen 
        = VChecksumXcelRTL__ConstPool__TABLE_h883563d3_0
        [__Vtableidx1];
    vlSelf->xcel___05Fresp___05Fen = VChecksumXcelRTL__ConstPool__TABLE_h883563d3_0
        [__Vtableidx1];
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Frecv___05Fen 
        = VChecksumXcelRTL__ConstPool__TABLE_hd1f4dc81_0
        [__Vtableidx1];
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy 
        = VChecksumXcelRTL__ConstPool__TABLE_h8df27c36_0
        [__Vtableidx1];
    vlSelf->checksum_unit___05Frecv___05Fen_out = vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Frecv___05Fen;
    vlSelf->ChecksumXcelRTL__DOT__start_pulse = ((IData)(vlSelf->xcel___05Fresp___05Fen) 
                                                 & ((IData)(vlSelf->deq___05Fret_type_) 
                                                    & (4U 
                                                       == (IData)(vlSelf->deq___05Fret_addr))));
    vlSelf->checksum_unit___05Fsend___05Frdy_out = vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy;
    ChecksumXcelRTL__DOT__checksum_unit__DOT_____05Ftmpvar___05Fup_rtl_send_go 
        = (((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full)) 
           & (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy));
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen 
        = ChecksumXcelRTL__DOT__checksum_unit__DOT_____05Ftmpvar___05Fup_rtl_send_go;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen 
        = ChecksumXcelRTL__DOT__checksum_unit__DOT_____05Ftmpvar___05Fup_rtl_send_go;
    vlSelf->checksum_unit___05Frecv___05Frdy_out = 
        (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full)) 
                                             | (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen))));
    vlSelf->checksum_unit___05Fsend___05Fen_out = vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [0U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[0U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [1U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[1U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [2U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[2U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [3U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[3U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [4U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[4U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0 = 
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
        [5U];
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[5U] 
        = ChecksumXcelRTL__DOT____Vlvbound_he83b08e6__0;
    if (((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen) 
         & (IData)((vlSelf->deq___05Fret_ >> 0x25U)))) {
        vlSelf->ChecksumXcelRTL__DOT__up_wr_regfile__DOT__unnamedblk2__DOT__i = 6U;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((0U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [0U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[0U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((1U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [1U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[1U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((2U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [2U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[2U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((3U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [3U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[3U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((4U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [4U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[4U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0 
            = ((5U == (0x1fU & (IData)((vlSelf->deq___05Fret_ 
                                        >> 0x20U))))
                ? (IData)(vlSelf->deq___05Fret_) : 
               vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout
               [5U]);
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[5U] 
            = vlSelf->ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
    }
    if (vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen) {
        vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[5U] 
            = vlSelf->checksum_unit___05Fsend___05Fmsg_out;
    }
    __Vtableidx2 = (((IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen) 
                     << 4U) | (((IData)(vlSelf->checksum_unit___05Frecv___05Frdy_out) 
                                << 3U) | (((IData)(vlSelf->ChecksumXcelRTL__DOT__start_pulse) 
                                           << 2U) | (IData)(vlSelf->ChecksumXcelRTL__DOT__state))));
    vlSelf->ChecksumXcelRTL__DOT__state_next = VChecksumXcelRTL__ConstPool__TABLE_hb4cec0e3_0
        [__Vtableidx2];
}

void VChecksumXcelRTL___024root___eval_ico(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VChecksumXcelRTL___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VicoTriggered.word(0U))) {
        VChecksumXcelRTL___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VChecksumXcelRTL___024root___eval_act(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VChecksumXcelRTL___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> VChecksumXcelRTL__ConstPool__TABLE_h06c7d200_0;
extern const VlUnpacked<CData/*0:0*/, 128> VChecksumXcelRTL__ConstPool__TABLE_h48935bec_0;
extern const VlUnpacked<CData/*0:0*/, 128> VChecksumXcelRTL__ConstPool__TABLE_h7a7bcaf6_0;
extern const VlUnpacked<CData/*1:0*/, 128> VChecksumXcelRTL__ConstPool__TABLE_h9abd4c3f_0;

VL_INLINE_OPT void VChecksumXcelRTL___024root___nba_sequent__TOP__0(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___nba_sequent__TOP__0\n"); );
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
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdlyvdim0__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    __Vdlyvdim0__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0;
    QData/*37:0*/ __Vdlyvval__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    __Vdlyvval__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    __Vdlyvset__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0;
    // Body
    __Vdlyvset__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->checksum_unit___05Frecv___05Fen_out) 
                                         | ((IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full) 
                                            & (~ (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen)))));
    if (vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen
        [0U]) {
        __Vdlyvval__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata
            [0U];
        __Vdlyvset__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr
            [0U];
    }
    __Vtableidx3 = (((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail) 
                                << 4U) | ((((IData)(vlSelf->xcel___05Freq___05Fen) 
                                            & (IData)(vlSelf->xcel___05Freq___05Frdy)) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen) 
                                                & (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    if ((1U & VChecksumXcelRTL__ConstPool__TABLE_h06c7d200_0
         [__Vtableidx3])) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head 
            = VChecksumXcelRTL__ConstPool__TABLE_h48935bec_0
            [__Vtableidx3];
    }
    if ((2U & VChecksumXcelRTL__ConstPool__TABLE_h06c7d200_0
         [__Vtableidx3])) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail 
            = VChecksumXcelRTL__ConstPool__TABLE_h7a7bcaf6_0
            [__Vtableidx3];
    }
    if ((4U & VChecksumXcelRTL__ConstPool__TABLE_h06c7d200_0
         [__Vtableidx3])) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount 
            = VChecksumXcelRTL__ConstPool__TABLE_h9abd4c3f_0
            [__Vtableidx3];
    }
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [5U];
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [4U];
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [3U];
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [2U];
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [1U];
    vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out 
        = vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
        [0U];
    vlSelf->ChecksumXcelRTL__DOT__state = ((IData)(vlSelf->reset)
                                            ? 0U : (IData)(vlSelf->ChecksumXcelRTL__DOT__state_next));
    if (vlSelf->checksum_unit___05Frecv___05Fen_out) {
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U] 
            = vlSelf->checksum_unit___05Frecv___05Fmsg_out[0U];
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U] 
            = vlSelf->checksum_unit___05Frecv___05Fmsg_out[1U];
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U] 
            = vlSelf->checksum_unit___05Frecv___05Fmsg_out[2U];
        vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U] 
            = vlSelf->checksum_unit___05Frecv___05Fmsg_out[3U];
    }
    if (__Vdlyvset__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head;
    vlSelf->xcel___05Freq___05Frdy = ((~ (IData)(vlSelf->reset)) 
                                      & (2U > (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount)));
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy 
        = ((~ (IData)(vlSelf->reset)) & (0U < (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount)));
    vlSelf->reg5 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[5U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out;
    vlSelf->reg4 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[4U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out;
    vlSelf->reg3 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[3U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out;
    vlSelf->reg2 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[2U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out;
    vlSelf->reg1 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[1U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
    vlSelf->reg0 = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
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
    vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[0U] 
        = vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
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
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1 
        = (0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U]);
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp1);
    ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2 
        = vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out;
    vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out 
        = (0xffffU & ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05F0__DOT_____05Ftmpvar___05Fup_step_temp2);
    ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0 
        = vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs
        [vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr
        [0U]];
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata[0U] 
        = ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT____Vlvbound_hedac6328__0;
    vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen[0U] 
        = ((IData)(vlSelf->xcel___05Freq___05Fen) & (IData)(vlSelf->xcel___05Freq___05Frdy));
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

void VChecksumXcelRTL___024root___eval_nba(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VChecksumXcelRTL___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VChecksumXcelRTL___024root___ico_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void VChecksumXcelRTL___024root___eval_triggers__ico(VChecksumXcelRTL___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__ico(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG
void VChecksumXcelRTL___024root___eval_triggers__act(VChecksumXcelRTL___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__act(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VChecksumXcelRTL___024root___dump_triggers__nba(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG

void VChecksumXcelRTL___024root___eval(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VChecksumXcelRTL___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VChecksumXcelRTL___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ChecksumXcelRTL.v", 741, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VChecksumXcelRTL___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VChecksumXcelRTL___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VChecksumXcelRTL___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ChecksumXcelRTL.v", 741, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VChecksumXcelRTL___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VChecksumXcelRTL___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ChecksumXcelRTL.v", 741, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VChecksumXcelRTL___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VChecksumXcelRTL___024root___eval_debug_assertions(VChecksumXcelRTL___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->xcel___05Freq___05Fen 
                     & 0xfeU))) {
        Verilated::overWidthError("xcel__req__en");}
    if (VL_UNLIKELY((vlSelf->xcel___05Fresp___05Frdy 
                     & 0xfeU))) {
        Verilated::overWidthError("xcel__resp__rdy");}
}
#endif  // VL_DEBUG
