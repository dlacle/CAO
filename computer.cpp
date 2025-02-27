//
// Created by David Lacle on 19/02/2025.
//

#include "computer.h"
#include "program.h"
#include <iostream>
using namespace std;
// Constructor Implementation
Computer::Computer(double rate, double arithmetic,double store,double load,double branch ){
    clockRateGHz = rate;  // in GHz
    cpiArith = arithmetic;
    cpiStore = store;
    cpiLoad = load;
    cpiBranch = branch;
}

void Computer::printStats() {
    cout << "Computer Specifications:" << endl;
    cout << "Clock Rate: " << clockRateGHz << " GHz" << endl;
    cout << "CPI (Arithmetic): " << cpiArith << endl;
    cout << "CPI (Store): " << cpiStore << endl;
    cout << "CPI (Load): " << cpiLoad << endl;
    cout << "CPI (Branch): " << cpiBranch << endl;
}

double Computer::calculateGlobalCPI() {
    totalcpi=(cpiArith + cpiStore + cpiLoad + cpiBranch) / 4.0;

    return totalcpi;
}
double Computer::calculateExecutionTime(Program prog) {
    executionTime = (calculateGlobalCPI()*prog.numTotal)/(clockRateGHz*1e9);
    return executionTime;
}
double Computer::calulateExecutionTimelocal(Program prog) {
    executionTimelocal = (cpiArith*prog.numArith+cpiBranch*prog.numBranch+cpiLoad*prog.numLoad+cpiStore*prog.numStore)/(clockRateGHz*1e9);
    return executionTimelocal;
}

double Computer::calculatemipsglobal(Program prog){
    double mips1 = (prog.numTotal/1e6)/(executionTime);
    return mips1;
}

double Computer::calculatemips(Program prog){
    double mips = (prog.numTotal/1e6)/ (executionTimelocal);
    return mips;
}

