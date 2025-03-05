#ifndef _REGISTERS_H_
#define _REGISTERS_H_

class Registers
{
private:
    int regVal[32];
    int programcount;

public:
    Registers ();
    void setRegisters (int reg ,int value);
    int getRegisters (int reg);
    void setPC (int count);
    int getPC();
    void print();
};

#endif	/* _REGISTERS_H_ */
