#include "Laptop.h"
#include "Computer.h"
#include <sstream>
using std::string;
using std::ostringstream;


string Laptop::toString () const
{
    ostringstream output;
    output << Computer::toString()
        << "\nScreen Size: " << screenSize
        << "\nWeight: " << weight;
        return output.str();
}

const char* Laptop::DEFAULT_LT_MAN = "MyBand";
