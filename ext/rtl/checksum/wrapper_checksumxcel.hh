#ifndef __WRAPPER_CHECKSUMXCEL_HH__
#define __WRAPPER_CHECKSUMXCEL_HH__

#include <cstdlib>
#include <iostream>

#include "interface_packet.hh"

class Wrapper_ChecksumXcel
{
    public:
        Wrapper_ChecksumXcel (bool traceOn, std::string name);

        ~Wrapper_ChecksumXcel ();

        void tick();

        void reset();

        // get all signals from XcelReq and XcelResp
        void getdata(XcelReq* req, XcelResp* resp);

        // set all input_signals in XcelReq and XcelResp
        void setdata(XcelReq* req, XcelResp* resp);

    private:

        //pointer to Verilog Model generate from verilator
        void *rtl;
        //pointer to Wave file
        void *fst;

        uint64_t sim_time;

        std::string fstname;

        bool traceOn;

        void updateTrace();
        
};



#endif