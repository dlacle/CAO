//
// Created by David Lacle on 19/02/2025.
//

#include "program.h"
#include <iostream>
using namespace std;

// Constructor Implementation
Program::Program(int arithmetic,int store,int load,int branch ){
    numArith = arithmetic;  // in GHz
    numStore = store;
    numLoad = load;
    numBranch = branch;
    numTotal = numArith+numStore+numLoad+numBranch;
}

Program::Program(int totalInstructions, double fracArith, double fracStore, double fracLoad) {
    numArith = static_cast<int>(totalInstructions * fracArith);
    numStore = static_cast<int>(totalInstructions * fracStore);
    numLoad = static_cast<int>(totalInstructions * fracLoad);
    numBranch = totalInstructions - (numArith + numStore + numLoad); // Remaining instructions
    numTotal = totalInstructions;

}

void Program::printStats() {
    cout << "Program Specifications:" << endl;
    cout << "num (Arithmetic): " << numArith << endl;
    cout << "num (Store): " << numStore << endl;
    cout << "num (Load): " << numLoad << endl;
    cout << "num (Branch): " << numBranch << endl;
    cout << "num (Total): "<< numTotal<<endl;

}


