
## Running this script in the PyMTL3 environment translates 
##  ChecksumXcelRTL into the Verilog language.

from pymtl3 import *
import inspect
from ChecksumXcelRTL import ChecksumXcelRTL
from pymtl3.passes.backends.verilog import *
m = ChecksumXcelRTL()
m.elaborate()
m.set_metadata( VerilogTranslationPass.enable, True )
m.set_metadata( VerilogTranslationPass.explicit_module_name, 'ChecksumXcelRTL' )
m.set_metadata( VerilogTranslationPass.explicit_file_name, 'ChecksumXcelRTL.v' )
m.apply( VerilogTranslationPass() )
