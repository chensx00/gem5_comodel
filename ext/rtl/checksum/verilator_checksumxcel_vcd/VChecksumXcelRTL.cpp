// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VChecksumXcelRTL.h"
#include "VChecksumXcelRTL__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VChecksumXcelRTL::VChecksumXcelRTL(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VChecksumXcelRTL__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , xcel___05Freq___05Fen{vlSymsp->TOP.xcel___05Freq___05Fen}
    , xcel___05Freq___05Frdy{vlSymsp->TOP.xcel___05Freq___05Frdy}
    , xcel___05Fresp___05Fen{vlSymsp->TOP.xcel___05Fresp___05Fen}
    , xcel___05Fresp___05Frdy{vlSymsp->TOP.xcel___05Fresp___05Frdy}
    , deq___05Fret_type_{vlSymsp->TOP.deq___05Fret_type_}
    , deq___05Fret_addr{vlSymsp->TOP.deq___05Fret_addr}
    , checksum_unit___05Frecv___05Fen_out{vlSymsp->TOP.checksum_unit___05Frecv___05Fen_out}
    , checksum_unit___05Frecv___05Frdy_out{vlSymsp->TOP.checksum_unit___05Frecv___05Frdy_out}
    , checksum_unit___05Fsend___05Fen_out{vlSymsp->TOP.checksum_unit___05Fsend___05Fen_out}
    , checksum_unit___05Fsend___05Frdy_out{vlSymsp->TOP.checksum_unit___05Fsend___05Frdy_out}
    , deq___05Fret_data{vlSymsp->TOP.deq___05Fret_data}
    , reg0{vlSymsp->TOP.reg0}
    , reg1{vlSymsp->TOP.reg1}
    , reg2{vlSymsp->TOP.reg2}
    , reg3{vlSymsp->TOP.reg3}
    , reg4{vlSymsp->TOP.reg4}
    , reg5{vlSymsp->TOP.reg5}
    , checksum_unit___05Frecv___05Fmsg_out{vlSymsp->TOP.checksum_unit___05Frecv___05Fmsg_out}
    , checksum_unit___05Fsend___05Fmsg_out{vlSymsp->TOP.checksum_unit___05Fsend___05Fmsg_out}
    , xcel___05Freq___05Fmsg{vlSymsp->TOP.xcel___05Freq___05Fmsg}
    , xcel___05Fresp___05Fmsg{vlSymsp->TOP.xcel___05Fresp___05Fmsg}
    , deq___05Fret_{vlSymsp->TOP.deq___05Fret_}
    , enq___05Fmsg_{vlSymsp->TOP.enq___05Fmsg_}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VChecksumXcelRTL::VChecksumXcelRTL(const char* _vcname__)
    : VChecksumXcelRTL(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VChecksumXcelRTL::~VChecksumXcelRTL() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VChecksumXcelRTL___024root___eval_debug_assertions(VChecksumXcelRTL___024root* vlSelf);
#endif  // VL_DEBUG
void VChecksumXcelRTL___024root___eval_static(VChecksumXcelRTL___024root* vlSelf);
void VChecksumXcelRTL___024root___eval_initial(VChecksumXcelRTL___024root* vlSelf);
void VChecksumXcelRTL___024root___eval_settle(VChecksumXcelRTL___024root* vlSelf);
void VChecksumXcelRTL___024root___eval(VChecksumXcelRTL___024root* vlSelf);

void VChecksumXcelRTL::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VChecksumXcelRTL::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VChecksumXcelRTL___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VChecksumXcelRTL___024root___eval_static(&(vlSymsp->TOP));
        VChecksumXcelRTL___024root___eval_initial(&(vlSymsp->TOP));
        VChecksumXcelRTL___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VChecksumXcelRTL___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VChecksumXcelRTL::eventsPending() { return false; }

uint64_t VChecksumXcelRTL::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VChecksumXcelRTL::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VChecksumXcelRTL___024root___eval_final(VChecksumXcelRTL___024root* vlSelf);

VL_ATTR_COLD void VChecksumXcelRTL::final() {
    VChecksumXcelRTL___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VChecksumXcelRTL::hierName() const { return vlSymsp->name(); }
const char* VChecksumXcelRTL::modelName() const { return "VChecksumXcelRTL"; }
unsigned VChecksumXcelRTL::threads() const { return 1; }
void VChecksumXcelRTL::prepareClone() const { contextp()->prepareClone(); }
void VChecksumXcelRTL::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VChecksumXcelRTL::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VChecksumXcelRTL___024root__trace_init_top(VChecksumXcelRTL___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VChecksumXcelRTL___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VChecksumXcelRTL___024root*>(voidSelf);
    VChecksumXcelRTL__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VChecksumXcelRTL___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VChecksumXcelRTL___024root__trace_register(VChecksumXcelRTL___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VChecksumXcelRTL::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VChecksumXcelRTL::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VChecksumXcelRTL___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
