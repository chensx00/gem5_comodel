#ifndef __COMODEL_SAMPLE__CHECKSUM_HH__
#define __COMODEL_SAMPLE__CHECKSUM_HH__

#include "dev/io_device.hh"
#include "sim/ticked_object.hh"
#include "params/SampleChecksum.hh"
#include "wrapper_checksumxcel.hh"

namespace gem5
{


/*
 * We plan to use the evaluate() function of the Ticked class 
 *  to tick the RTL clock in gem5 for each tick. Currently, we 
 *  are temporarily ticking the RTL in the write() and read() functions.
 */
class SampleChecksum : public BasicPioDevice //, public Ticked
{
        enum { IO_SIZE = 64 };
    public:
        SampleChecksum(const SampleChecksumParams &params);


        Tick read(PacketPtr pkt) override;
        Tick write(PacketPtr pkt) override;

        
        //All stats have been initialized. It is necessary
        // to call Ticked::regStats in SampleChecksum::regStats 
        //void regStats() override;

        //For each tick, gem5 will call evaluate()
        // as the clock period for the RTL model
        //void evaluate() override;
    

    
    private:
        Wrapper_ChecksumXcel *wr;
        XcelReq req;
        XcelResp resp;

        
};


} // namespace gem5


#endif // __COMODEL_SAMPLE__CHECKSUM_HH__