#ifndef __INTERFACE_PACKET_HH
#define __INTERFACE_PACKET_HH

#include <cstdlib>
#include <iostream>
/*
 * The interface of ChecksumXcel is as follows:
 * checksumxcel
 *  	- XcelReq
 *      	-- en [0:0]                         : input signals
 *          -- rdy [0:0]                        : output signals 
 *          -- msg(ReqType): XcelReqMsg [37:0]  : input signals
 *                  	- type_ [37:37] : the oprate {Write = 1, Read = 0}
 *                      - addr [36:32]  : the address of regfile you want to read or write
 *                      - data [31:0]  
 *          	
 *      
 *      - XcelResp
 *      	-- en [0:0]                         : output signals
 *          -- rdy [0:0]                        : input signals
 *          -- msg(RespType): XcelRespMsg [32:0]: output signals
 *                  	- type_ [32:32]
 *                      - data [31:0]   : the regfile value you want to read
 */

/*
 *   After you load the 128-bit data that needs to be calculated
 *    into reg[0] to reg[3], you need to perform a WRITE operation 
 *    on reg[4] as the checksum start signal. After one clock cycle, 
 *    you can read the calculation result from reg[5].
 */

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