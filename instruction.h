
#ifndef INSTRUCTION_H
#define INSTRUCTION_H
#include <iostream>
#include "registers.h"

using namespace std;




class Instruction {
protected:
    int param1;
    int param2;
    int param3;

public:
    // Constructor
    Instruction(int p1, int p2, int p3)
        : param1(p1), param2(p2), param3(p3) {}

    // Virtual destructor
    virtual ~Instruction() {}

    // Pure virtual functions
    virtual void disassemble() = 0;
    virtual int execute(Registers* regs) = 0;
};

class AddInstruction : public Instruction {
public:
    AddInstruction(int p1, int p2, int p3)
        : Instruction(p1, p2, p3) {}

    void disassemble() override {
        std::cout << "add $" << param1 << ", $" << param2 << ", $" << param3 << std::endl;
    }

    int execute(Registers* regs) override {
        regs->setRegisters(param1, regs->getRegisters(param2) + regs->getRegisters(param3));
        return regs->getPC() + 1;
    }
};

class SubInstruction : public Instruction {
public:
    SubInstruction(int p1, int p2, int p3)
        : Instruction(p1, p2, p3) {}

    void disassemble() override {
        std::cout << "sub $" << param1 << ", $" << param2 << ", $" << param3 << std::endl;
    }

    int execute(Registers* regs) override {
        regs->setRegisters(param1, regs->getRegisters(param2) - regs->getRegisters(param3));
        return regs->getPC() + 1;
    }
};



class OriInstruction : public Instruction {
public:
    OriInstruction(int p1, int p2, int immediate)
        : Instruction(p1, p2, immediate) {}

    void disassemble() override {
        std::cout << "ori $" << param1 << ", $" << param2 << ", " << param3 << std::endl;
    }

    int execute(Registers* regs) override {
        // Perform bitwise OR between register value and the immediate value
        int result = regs->getRegisters(param2) | param3;

        // Store result in the destination register
        regs->setRegisters(param1, result);

        return regs->getPC() + 1;
    }
};

class BrneInstruction : public Instruction {
public:
    BrneInstruction(int p1, int p2, int p3)
        : Instruction(p1, p2, p3) {}

    void disassemble() override {
        std::cout << "brne $" << param1 << ", $" << param2 << ", $" << param3 << std::endl;
    }

    int execute (Registers* regs) override {
        if (param1 != param2) {
        return regs->getPC() + 1 + param3;
        }
        else {
            return regs->getPC() + 1;
        }
    }
};

#endif /* _INSTRUCTION_H_ */
