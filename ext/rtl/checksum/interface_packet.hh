#ifndef __INTERFACE_PACKET_HH
#define __INTERFACE_PACKET_HH

#include <cstdlib>
#include <iostream>


struct XcelReq
{
    uint en : 1;
    uint rdy : 1;
    struct //XcelReqMsg
    {
        uint type_  : 1;
        uint addr   : 5;
        uint32_t data;
    }msg;
};

struct XcelResp
{
    uint en : 1;
    uint rdy : 1;
    struct //XcelRespMsg
    {
        uint type_  : 1;
        uint32_t data;
    }msg;

};

#endif