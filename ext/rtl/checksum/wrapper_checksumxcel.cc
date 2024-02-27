#include "wrapper_checksumxcel.hh"
#include "VChecksumXcelRTL.h"

#include "verilated.h"

#include "verilated_vcd_c.h"

#include "interface_packet.hh"

Wrapper_ChecksumXcel::Wrapper_ChecksumXcel(bool traceOn,std::string name):
    sim_time(0),
    fst(NULL),
    fstname(name),
    traceOn(traceOn)
{
    VChecksumXcelRTL* p_rtl = new VChecksumXcelRTL;
    VerilatedVcdC *p_fst = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    
    rtl = p_rtl;
    fst = p_fst;

    if(!p_fst){
        return;
    }

    p_rtl->trace(p_fst,5);
    p_fst->open(fstname.c_str());
    reset();
}

Wrapper_ChecksumXcel::~Wrapper_ChecksumXcel() 
{
    VChecksumXcelRTL* p_rtl = (VChecksumXcelRTL*)rtl;
    VerilatedVcdC* p_fst = (VerilatedVcdC*)fst;

    if (p_fst) {
        p_fst->dump(sim_time);
        p_fst->close();
        delete p_fst;
    }
    p_rtl->final();

    delete p_rtl;
    exit(EXIT_SUCCESS);
}

void 
Wrapper_ChecksumXcel::reset()
{
    VChecksumXcelRTL* p_rtl = (VChecksumXcelRTL*)rtl;

    p_rtl->reset = 1;

    this->tick();

    p_rtl->reset = 0;
}

void 
Wrapper_ChecksumXcel::tick()
{
    VChecksumXcelRTL* p_rtl = (VChecksumXcelRTL*)rtl;
    
    p_rtl->clk = 0;
    p_rtl->eval();
    updateTrace();
    p_rtl->clk = 1;
    p_rtl->eval();
    updateTrace();
}

void 
Wrapper_ChecksumXcel::getdata(XcelReq* req, XcelResp* resp)
{
    VChecksumXcelRTL* p_rtl = (VChecksumXcelRTL*)rtl;

    req->en = p_rtl->xcel___05Freq___05Fen;
    req->rdy = p_rtl->xcel___05Freq___05Frdy;
    req->msg.type_ = (p_rtl->xcel___05Freq___05Fmsg >> 37) & 0x1;
    req->msg.addr = (p_rtl->xcel___05Freq___05Fmsg >> 32) & 0x1f;
    req->msg.data = (p_rtl->xcel___05Freq___05Fmsg );

    resp->en = p_rtl->xcel___05Fresp___05Fen;
    resp->rdy = p_rtl->xcel___05Fresp___05Frdy;
    resp->msg.type_ = (p_rtl->xcel___05Fresp___05Fmsg >> 1) & 0x1;
    resp->msg.data = p_rtl->xcel___05Fresp___05Fmsg ;
}

void 
Wrapper_ChecksumXcel::setdata(XcelReq *req, XcelResp *resp)
{
    VChecksumXcelRTL* p_rtl = (VChecksumXcelRTL*)rtl;
    p_rtl->xcel___05Freq___05Fen = req->en;
    p_rtl->xcel___05Fresp___05Frdy = resp->rdy;
    p_rtl->xcel___05Freq___05Fmsg = 0;
    p_rtl->xcel___05Freq___05Fmsg |= ((uint64_t)req->msg.type_ << 37);
    p_rtl->xcel___05Freq___05Fmsg |= ((uint64_t)req->msg.addr << 32);
    p_rtl->xcel___05Freq___05Fmsg |= (req->msg.data);
}


void
Wrapper_ChecksumXcel::updateTrace()
{
    VerilatedVcdC* p_fst = (VerilatedVcdC*)fst;
        if (p_fst and traceOn) {
        p_fst->dump(sim_time);
    }
    sim_time++;
}