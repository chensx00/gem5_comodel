
#include "comodel/sample_checksum.hh"
#include "debug/ComoIO.hh"
#include "mem/packet_access.hh"

namespace gem5
{

SampleChecksum::SampleChecksum(const SampleChecksumParams &params) :
    BasicPioDevice(params, IO_SIZE)//, 
    //Ticked(*this,NULL)
{
    wr = new Wrapper_ChecksumXcel(true,"dev.vcd");


    //It seems gem5 cannot call destructor of SimObject. But calling
    // destructor of Checksum to terminate RTL simulation is necessary because of
    // generate Wave file.
    // See https://www.mail-archive.com/gem5-users@gem5.org/msg20324.html
    registerExitCallback([this]() {
        delete this->wr;
        this->wr = nullptr;
    });
}

// void
// SampleChecksum::regStats()
// {
//     Ticked::regStats();
// }

Tick
SampleChecksum::read(PacketPtr pkt)
{
    const Addr offset = pkt->getAddr() - pioAddr;
    const uint size = pkt->getSize();


    DPRINTF(ComoIO,"Reading %u byte @ 0x%x:\n",size,offset);
    panic_if(offset %4 != 0, "Bad read offset 0x%x\n", offset);
    panic_if(size != 4, "Bad read size @ 0x%x: %u\n", offset, size);

    uint addr = offset >> 2;
    req.en = 1;
    req.msg.type_ = 0; //type_ : {READ = 0, WRITE = 1}
    req.msg.addr = addr;
    resp.rdy = 1;
    wr->setdata(&req,&resp);
    wr->tick();
    wr->tick();
    wr->getdata(&req,&resp);

    uint32_t value = resp.msg.data;
    DPRINTF(ComoIO, "    value: 0x%x (%d)\n", value, value);
    pkt->makeResponse();
    pkt->setLE<uint32_t>(value);

    return 0;

}

Tick
SampleChecksum::write(PacketPtr pkt)
{
    const Addr offset = pkt->getAddr() - pioAddr;
    const uint size = pkt->getSize();
    uint32_t value = pkt->getLE<uint32_t>();

    DPRINTF(ComoIO, "Writing %u bytes @ 0x%x:\n", size, offset);
    panic_if(offset %4 != 0, "Bad write offset 0x%x\n", offset);
    panic_if(size != 4, "Bad write size @ 0x%x: %u\n", offset, size);
    
    uint addr = offset >> 2;
    req.en = 1;
    req.msg.type_ = 1; //type_ : {READ = 0, WRITE = 1}
    req.msg.addr = addr;
    req.msg.data = value;
    wr->setdata(&req,&resp);
    wr->tick();
    wr->tick();

    DPRINTF(ComoIO, "    value: 0x%x (%d)\n", value, value);
    pkt->makeResponse();
    
    return 0;
}

// void
// SampleChecksum::evaluate()
// {
//     wr->tick(); 
// }


} // namespace gem5