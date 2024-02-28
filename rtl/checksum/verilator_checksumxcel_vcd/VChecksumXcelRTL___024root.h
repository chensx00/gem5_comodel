// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VChecksumXcelRTL.h for the primary calling header

#ifndef VERILATED_VCHECKSUMXCELRTL___024ROOT_H_
#define VERILATED_VCHECKSUMXCELRTL___024ROOT_H_  // guard

#include "verilated.h"


class VChecksumXcelRTL__Syms;

class alignas(VL_CACHE_LINE_BYTES) VChecksumXcelRTL___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(xcel___05Freq___05Fen,0,0);
        VL_OUT8(xcel___05Freq___05Frdy,0,0);
        VL_OUT8(xcel___05Fresp___05Fen,0,0);
        VL_IN8(xcel___05Fresp___05Frdy,0,0);
        VL_OUT8(deq___05Fret_type_,0,0);
        VL_OUT8(deq___05Fret_addr,4,0);
        VL_OUT8(checksum_unit___05Frecv___05Fen_out,0,0);
        VL_OUT8(checksum_unit___05Frecv___05Frdy_out,0,0);
        VL_OUT8(checksum_unit___05Fsend___05Fen_out,0,0);
        VL_OUT8(checksum_unit___05Fsend___05Frdy_out,0,0);
        CData/*0:0*/ ChecksumXcelRTL__DOT__start_pulse;
        CData/*1:0*/ ChecksumXcelRTL__DOT__state;
        CData/*1:0*/ ChecksumXcelRTL__DOT__state_next;
        CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit___05Frecv___05Fen;
        CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen;
        CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy;
        CData/*0:0*/ ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen;
        CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen;
        CData/*0:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full;
        CData/*1:0*/ ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount;
        CData/*0:0*/ ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy;
        CData/*0:0*/ ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head;
        CData/*0:0*/ ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail;
        CData/*0:0*/ __Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__1;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __Vtrigprevexpr___TOP__checksum_unit___05Frecv___05Frdy_out__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ChecksumXcelRTL__DOT__start_pulse__2;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        VL_OUT(deq___05Fret_data,31,0);
        VL_OUT(reg0,31,0);
        VL_OUT(reg1,31,0);
        VL_OUT(reg2,31,0);
        VL_OUT(reg3,31,0);
        VL_OUT(reg4,31,0);
        VL_OUT(reg5,31,0);
        VL_OUTW(checksum_unit___05Frecv___05Fmsg_out,127,0,4);
        VL_OUT(checksum_unit___05Fsend___05Fmsg_out,31,0);
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__up_wr_regfile__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ ChecksumXcelRTL__DOT____Vlvbound_hdd2b97e1__0;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out;
    };
    struct {
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out;
        IData/*31:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out;
        VlWide<4>/*127:0*/ ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry;
        IData/*31:0*/ ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(xcel___05Freq___05Fmsg,37,0);
        VL_OUT64(xcel___05Fresp___05Fmsg,32,0);
        VL_OUT64(deq___05Fret_,37,0);
        VL_OUT64(enq___05Fmsg_,37,0);
        VlUnpacked<CData/*0:0*/, 6> ChecksumXcelRTL__DOT__reg_file___05Fclk;
        VlUnpacked<IData/*31:0*/, 6> ChecksumXcelRTL__DOT__reg_file___05Fin_;
        VlUnpacked<IData/*31:0*/, 6> ChecksumXcelRTL__DOT__reg_file___05Fout;
        VlUnpacked<CData/*0:0*/, 6> ChecksumXcelRTL__DOT__reg_file___05Freset;
        VlUnpacked<SData/*15:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__words;
        VlUnpacked<CData/*0:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk;
        VlUnpacked<CData/*0:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset;
        VlUnpacked<IData/*31:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in;
        VlUnpacked<IData/*31:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out;
        VlUnpacked<IData/*31:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in;
        VlUnpacked<IData/*31:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out;
        VlUnpacked<SData/*15:0*/, 8> ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in;
        VlUnpacked<CData/*0:0*/, 1> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr;
        VlUnpacked<QData/*37:0*/, 1> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata;
        VlUnpacked<CData/*0:0*/, 1> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr;
        VlUnpacked<QData/*37:0*/, 1> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata;
        VlUnpacked<CData/*0:0*/, 1> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen;
        VlUnpacked<QData/*37:0*/, 2> ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<2> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VChecksumXcelRTL__Syms* const vlSymsp;

    // CONSTRUCTORS
    VChecksumXcelRTL___024root(VChecksumXcelRTL__Syms* symsp, const char* v__name);
    ~VChecksumXcelRTL___024root();
    VL_UNCOPYABLE(VChecksumXcelRTL___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
