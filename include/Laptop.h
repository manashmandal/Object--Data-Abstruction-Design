#ifndef LAPTOP_H
#define LAPTOP_H
#include "Computer.h"


class Laptop : public Computer
{
    public:
        Laptop(const string& man, const string& proc, int ram, int disk, double screen, double wei) : Computer(man, proc, ram, disk), screenSize(screen), weight(wei) {}
        string toString() const;

        Laptop(const string&proc, int ram, int disk, double screen, double wei) : Computer(DEFAULT_LT_MAN, proc, ram, disk), screenSize(screen), weight(wei) {}
    protected:
    private:
        static const char* DEFAULT_LT_MAN;
        double screenSize, weight;
};

#endif // LAPTOP_H
