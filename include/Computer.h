#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>


using namespace std;


class Computer
{
    public:
        Computer(const string& man, const string& proc, int ram, int disk) : manufacturer(man), processor(proc), ramSize(ram), diskSize(disk) {}

        int getRamSize() const { return ramSize; }
        int getDiskSize() const {return diskSize; }

      virtual  string toString() const;


    protected:
    private:
        string manufacturer;
        string processor;
        int ramSize;
        int diskSize;
};

#endif // COMPUTER_H
