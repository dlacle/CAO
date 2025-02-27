//
// Created by David Lacle on 19/02/2025.
//

#include "program.h"
#ifndef COMPUTER_H_INCLUDED
#define COMPUTER_H_INCLUDED
class Computer{
private:
    double clockRateGHz;  // in GHz
    double cpiArith;
    double cpiStore;
    double cpiLoad;
    double cpiBranch;
    double totalcpi;
    double executionTime;

public:
    double executionTimelocal;

    Computer(double, double, double, double, double);
    void printStats();
    double calculateGlobalCPI();
    double calculateExecutionTime (Program);
    double calculatemipsglobal (Program);
    double calculatemips (Program);
    double calulateExecutionTimelocal(Program);
};
#endif //COMPUTER_H
