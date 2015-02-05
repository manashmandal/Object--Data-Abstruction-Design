#include "Computer.h"
#include <sstream>
using std::ostringstream;



string Computer::toString() const
{
    ostringstream output;
    output << "Manufacturer: " << manufacturer << "\nCPU: " << processor << "\nRAM: " << ramSize << " gigabytes" << "\nDisk: " << diskSize << " gigabytes";
    return output.str();

}

