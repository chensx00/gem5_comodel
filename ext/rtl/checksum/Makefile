DIR_VCD = verilator_checksumxcel_vcd
CC=gcc
CXX=g++
OBJS_VERILATE='*.v'
verilate_vcd: $(OBJS)
#	$(VERILATOR_ROOT)/bin/verilator -Wall -cc --trace ChecksumXcelRTL.v --Mdir $(DIR_VCD)
	$(VERILATOR_ROOT)/bin/verilator -Wno-fatal -cc --trace ChecksumXcelRTL.v --Mdir $(DIR_VCD)

build: verilate_vcd wrapper_checksumxcel.cc wrapper_checksumxcel.hh
	g++ -I $(DIR_VCD) -I $(VERILATOR_ROOT)/include wrapper_checksumxcel.cc $(DIR_VCD)/*.cpp \
	$(shell python3 ../extract_verilator.py $(VERILATOR_ROOT)/include/ $(DIR_VCD) VChecksumXcelRTL.mk) \
	-fpic  -shared -o libVerilatorChecksumXcel.so


install: libVerilatorChecksumXcel.so
	cp libVerilatorChecksumXcel.so ../
	cp wrapper_checksumxcel.hh ../
	cp interface_packet.hh ../

all: build
	cp libVerilatorChecksumXcel.so ../
	cp wrapper_checksumxcel.hh ../
	cp interface_packet.hh ../

.PHONY: clean cleanall

clean:
	rm -rf $(DIR_VCD) libVerilatorChecksumXcel.so

cleanall:
	rm -rf $(DIR_VCD) libVerilatorChecksumXcel.so
	rm -rf ../interface_packet.hh
	rm -rf ../libVerilatorChecksumXcel.so
	rm -rf ../wrapper_checksumxcel.hh