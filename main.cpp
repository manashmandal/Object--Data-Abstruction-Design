#include <iostream>
#include "Computer.h"
#include "Laptop.h"
#include "Food.h"
#include "Address.h"


using namespace std;

int main()
{
    Address *add1 = new GermanAddress("345", "fuckinghell", "bitch", "asshole");
    Address *add2 = new USAddress ("345", "fuckinghell", "bitch", "state", "asshole");
    cout << add1->toString() << endl << endl;
    cout << add2->toString() << endl << endl;

}
