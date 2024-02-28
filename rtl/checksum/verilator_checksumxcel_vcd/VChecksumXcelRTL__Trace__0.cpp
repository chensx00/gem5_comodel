// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VChecksumXcelRTL__Syms.h"


void VChecksumXcelRTL___024root__trace_chg_sub_0(VChecksumXcelRTL___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VChecksumXcelRTL___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root__trace_chg_top_0\n"); );
    // Init
    VChecksumXcelRTL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VChecksumXcelRTL___024root*>(voidSelf);
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VChecksumXcelRTL___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VChecksumXcelRTL___024root__trace_chg_sub_0(VChecksumXcelRTL___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[0]));
        bufp->chgBit(oldp+1,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[1]));
        bufp->chgBit(oldp+2,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[2]));
        bufp->chgBit(oldp+3,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[3]));
        bufp->chgBit(oldp+4,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[4]));
        bufp->chgBit(oldp+5,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fclk[5]));
        bufp->chgBit(oldp+6,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[0]));
        bufp->chgBit(oldp+7,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[1]));
        bufp->chgBit(oldp+8,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[2]));
        bufp->chgBit(oldp+9,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[3]));
        bufp->chgBit(oldp+10,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[4]));
        bufp->chgBit(oldp+11,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Freset[5]));
        bufp->chgBit(oldp+12,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[0]));
        bufp->chgBit(oldp+13,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[1]));
        bufp->chgBit(oldp+14,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[2]));
        bufp->chgBit(oldp+15,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[3]));
        bufp->chgBit(oldp+16,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[4]));
        bufp->chgBit(oldp+17,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[5]));
        bufp->chgBit(oldp+18,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[6]));
        bufp->chgBit(oldp+19,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fclk[7]));
        bufp->chgBit(oldp+20,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[0]));
        bufp->chgBit(oldp+21,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[1]));
        bufp->chgBit(oldp+22,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[2]));
        bufp->chgBit(oldp+23,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[3]));
        bufp->chgBit(oldp+24,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[4]));
        bufp->chgBit(oldp+25,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[5]));
        bufp->chgBit(oldp+26,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[6]));
        bufp->chgBit(oldp+27,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Freset[7]));
        bufp->chgQData(oldp+28,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwdata
                                [0U]),38);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[2U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+30,(vlSelf->ChecksumXcelRTL__DOT__start_pulse));
        bufp->chgCData(oldp+31,(vlSelf->ChecksumXcelRTL__DOT__state_next),2);
        bufp->chgBit(oldp+32,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Frecv___05Fen));
        bufp->chgBit(oldp+33,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Fen));
        bufp->chgBit(oldp+34,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit___05Fsend___05Frdy));
        bufp->chgBit(oldp+35,(vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen));
        bufp->chgIData(oldp+36,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[0]),32);
        bufp->chgIData(oldp+37,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[1]),32);
        bufp->chgIData(oldp+38,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[2]),32);
        bufp->chgIData(oldp+39,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[3]),32);
        bufp->chgIData(oldp+40,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[4]),32);
        bufp->chgIData(oldp+41,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_[5]),32);
        bufp->chgBit(oldp+42,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q___05Fdeq___05Fen));
        bufp->chgIData(oldp+43,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [0U]),32);
        bufp->chgIData(oldp+44,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [1U]),32);
        bufp->chgIData(oldp+45,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [2U]),32);
        bufp->chgIData(oldp+46,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [3U]),32);
        bufp->chgIData(oldp+47,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [4U]),32);
        bufp->chgIData(oldp+48,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fin_
                                [5U]),32);
        bufp->chgIData(oldp+49,(vlSelf->ChecksumXcelRTL__DOT__up_wr_regfile__DOT__unnamedblk2__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+50,(vlSelf->ChecksumXcelRTL__DOT__state),2);
        bufp->chgCData(oldp+51,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fcount),2);
        bufp->chgIData(oldp+52,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[0]),32);
        bufp->chgIData(oldp+53,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[1]),32);
        bufp->chgIData(oldp+54,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[2]),32);
        bufp->chgIData(oldp+55,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[3]),32);
        bufp->chgIData(oldp+56,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[4]),32);
        bufp->chgIData(oldp+57,(vlSelf->ChecksumXcelRTL__DOT__reg_file___05Fout[5]),32);
        bufp->chgIData(oldp+58,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum1_out),32);
        bufp->chgIData(oldp+59,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F7__sum2_out),32);
        bufp->chgSData(oldp+60,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[0]),16);
        bufp->chgSData(oldp+61,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[1]),16);
        bufp->chgSData(oldp+62,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[2]),16);
        bufp->chgSData(oldp+63,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[3]),16);
        bufp->chgSData(oldp+64,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[4]),16);
        bufp->chgSData(oldp+65,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[5]),16);
        bufp->chgSData(oldp+66,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[6]),16);
        bufp->chgSData(oldp+67,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__words[7]),16);
        bufp->chgBit(oldp+68,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full));
        bufp->chgWData(oldp+69,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry),128);
        bufp->chgIData(oldp+73,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[4]),32);
        bufp->chgIData(oldp+78,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[5]),32);
        bufp->chgIData(oldp+79,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[6]),32);
        bufp->chgIData(oldp+80,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_in[7]),32);
        bufp->chgIData(oldp+81,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[0]),32);
        bufp->chgIData(oldp+82,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[1]),32);
        bufp->chgIData(oldp+83,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[2]),32);
        bufp->chgIData(oldp+84,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[3]),32);
        bufp->chgIData(oldp+85,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[4]),32);
        bufp->chgIData(oldp+86,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[5]),32);
        bufp->chgIData(oldp+87,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[6]),32);
        bufp->chgIData(oldp+88,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum1_out[7]),32);
        bufp->chgIData(oldp+89,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[0]),32);
        bufp->chgIData(oldp+90,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[1]),32);
        bufp->chgIData(oldp+91,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[2]),32);
        bufp->chgIData(oldp+92,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[3]),32);
        bufp->chgIData(oldp+93,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[4]),32);
        bufp->chgIData(oldp+94,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[5]),32);
        bufp->chgIData(oldp+95,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[6]),32);
        bufp->chgIData(oldp+96,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_in[7]),32);
        bufp->chgIData(oldp+97,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[0]),32);
        bufp->chgIData(oldp+98,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[1]),32);
        bufp->chgIData(oldp+99,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[2]),32);
        bufp->chgIData(oldp+100,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[3]),32);
        bufp->chgIData(oldp+101,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[4]),32);
        bufp->chgIData(oldp+102,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[5]),32);
        bufp->chgIData(oldp+103,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[6]),32);
        bufp->chgIData(oldp+104,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fsum2_out[7]),32);
        bufp->chgSData(oldp+105,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[0]),16);
        bufp->chgSData(oldp+106,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[1]),16);
        bufp->chgSData(oldp+107,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[2]),16);
        bufp->chgSData(oldp+108,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[3]),16);
        bufp->chgSData(oldp+109,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[4]),16);
        bufp->chgSData(oldp+110,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[5]),16);
        bufp->chgSData(oldp+111,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[6]),16);
        bufp->chgSData(oldp+112,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__steps___05Fword_in[7]),16);
        bufp->chgIData(oldp+113,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum1_out),32);
        bufp->chgIData(oldp+114,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F0__sum2_out),32);
        bufp->chgSData(oldp+115,((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U])),16);
        bufp->chgIData(oldp+116,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum1_out),32);
        bufp->chgIData(oldp+117,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F1__sum2_out),32);
        bufp->chgSData(oldp+118,((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[0U] 
                                  >> 0x10U)),16);
        bufp->chgIData(oldp+119,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum1_out),32);
        bufp->chgIData(oldp+120,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F2__sum2_out),32);
        bufp->chgSData(oldp+121,((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U])),16);
        bufp->chgIData(oldp+122,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum1_out),32);
        bufp->chgIData(oldp+123,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F3__sum2_out),32);
        bufp->chgSData(oldp+124,((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[1U] 
                                  >> 0x10U)),16);
        bufp->chgIData(oldp+125,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum1_out),32);
        bufp->chgIData(oldp+126,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F4__sum2_out),32);
        bufp->chgSData(oldp+127,((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U])),16);
        bufp->chgIData(oldp+128,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum1_out),32);
        bufp->chgIData(oldp+129,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F5__sum2_out),32);
        bufp->chgSData(oldp+130,((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[2U] 
                                  >> 0x10U)),16);
        bufp->chgIData(oldp+131,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum1_out),32);
        bufp->chgIData(oldp+132,(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT____Vcellout__steps___05F6__sum2_out),32);
        bufp->chgSData(oldp+133,((0xffffU & vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U])),16);
        bufp->chgSData(oldp+134,((vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__entry[3U] 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+135,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__head));
        bufp->chgBit(oldp+136,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl__DOT__tail));
        bufp->chgBit(oldp+137,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fraddr[0]));
        bufp->chgQData(oldp+138,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Frdata
                                 [0U]),38);
        bufp->chgBit(oldp+140,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwaddr[0]));
        bufp->chgQData(oldp+141,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs
                                 [0U]),38);
        bufp->chgQData(oldp+143,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__regs
                                 [1U]),38);
        bufp->chgIData(oldp+145,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+146,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F0__out),32);
        bufp->chgIData(oldp+147,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F1__out),32);
        bufp->chgIData(oldp+148,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F2__out),32);
        bufp->chgIData(oldp+149,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F3__out),32);
        bufp->chgIData(oldp+150,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F4__out),32);
        bufp->chgIData(oldp+151,(vlSelf->ChecksumXcelRTL__DOT____Vcellout__reg_file___05F5__out),32);
    }
    bufp->chgBit(oldp+152,(vlSelf->clk));
    bufp->chgBit(oldp+153,(vlSelf->reset));
    bufp->chgBit(oldp+154,(vlSelf->xcel___05Freq___05Fen));
    bufp->chgQData(oldp+155,(vlSelf->xcel___05Freq___05Fmsg),38);
    bufp->chgBit(oldp+157,(vlSelf->xcel___05Freq___05Frdy));
    bufp->chgBit(oldp+158,(vlSelf->xcel___05Fresp___05Fen));
    bufp->chgQData(oldp+159,(vlSelf->xcel___05Fresp___05Fmsg),33);
    bufp->chgBit(oldp+161,(vlSelf->xcel___05Fresp___05Frdy));
    bufp->chgQData(oldp+162,(vlSelf->deq___05Fret_),38);
    bufp->chgQData(oldp+164,(vlSelf->enq___05Fmsg_),38);
    bufp->chgBit(oldp+166,(vlSelf->deq___05Fret_type_));
    bufp->chgCData(oldp+167,(vlSelf->deq___05Fret_addr),5);
    bufp->chgIData(oldp+168,(vlSelf->deq___05Fret_data),32);
    bufp->chgIData(oldp+169,(vlSelf->reg0),32);
    bufp->chgIData(oldp+170,(vlSelf->reg1),32);
    bufp->chgIData(oldp+171,(vlSelf->reg2),32);
    bufp->chgIData(oldp+172,(vlSelf->reg3),32);
    bufp->chgIData(oldp+173,(vlSelf->reg4),32);
    bufp->chgIData(oldp+174,(vlSelf->reg5),32);
    bufp->chgBit(oldp+175,(vlSelf->checksum_unit___05Frecv___05Fen_out));
    bufp->chgWData(oldp+176,(vlSelf->checksum_unit___05Frecv___05Fmsg_out),128);
    bufp->chgBit(oldp+180,(vlSelf->checksum_unit___05Frecv___05Frdy_out));
    bufp->chgBit(oldp+181,(vlSelf->checksum_unit___05Fsend___05Fen_out));
    bufp->chgIData(oldp+182,(vlSelf->checksum_unit___05Fsend___05Fmsg_out),32);
    bufp->chgBit(oldp+183,(vlSelf->checksum_unit___05Fsend___05Frdy_out));
    bufp->chgBit(oldp+184,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy));
    bufp->chgBit(oldp+185,(((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->ChecksumXcelRTL__DOT__checksum_unit__DOT__in_q__DOT__q__DOT__full))));
    bufp->chgBit(oldp+186,(((IData)(vlSelf->xcel___05Freq___05Fen) 
                            & (IData)(vlSelf->xcel___05Freq___05Frdy))));
    bufp->chgBit(oldp+187,(((IData)(vlSelf->ChecksumXcelRTL__DOT__in_q___05Fdeq___05Fen) 
                            & (IData)(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__ctrl___05Fdeq_rdy))));
    bufp->chgBit(oldp+188,(vlSelf->ChecksumXcelRTL__DOT__in_q__DOT__dpath__DOT__queue___05Fwen[0]));
}

void VChecksumXcelRTL___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VChecksumXcelRTL___024root__trace_cleanup\n"); );
    // Init
    VChecksumXcelRTL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VChecksumXcelRTL___024root*>(voidSelf);
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
