#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>
using namespace std;


class Address
{
    public:
        Address(const std::string& hn, const std::string& str,
const std::string muni, const std::string& stpro,
const std::string& pc) : houseNumber(hn), streetName(str), municipality(muni),
stateOrProvince(stpro), postalCode(pc) {}




    virtual string toString() const = 0;
    void setHouseNumber(string newHouseNumber)
    {
        houseNumber = newHouseNumber;
    }
        //virtual ~Address() = 0;
    protected:
        string houseNumber;
        string streetName;
        string municipality;
        string stateOrProvince;
        string postalCode;


};

class GermanAddress : public Address
{
public:
    GermanAddress(const string& hn, const string& str, const string& muni, const string& pc) : Address(hn, str, muni, "" , pc) {}
    string toString() const;
};

class USAddress : public Address
{
public:
    USAddress(const string& hn, const string& str, const string& muni, const string& stpro ,  const string& pc) : Address(hn, str, muni, stpro , pc) {}
    string toString() const;
};

#endif // ADDRESS_H
