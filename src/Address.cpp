#include "Address.h"
#include <sstream>
using std::ostringstream;

string GermanAddress::toString() const
{
    ostringstream result;
    result << streetName << " " << houseNumber << "\n" << postalCode << " " << municipality << "\n" << "Germany\n";
    return result.str();
}


string USAddress::toString() const
{
    ostringstream result;
    result << houseNumber << " " << streetName << "\n" << municipality << " " << stateOrProvince <<  " " <<  postalCode << "\n" << "US";
    return result.str();
}
