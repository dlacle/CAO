#include <iostream>
#include "computer.h"
#include "program.h"
using namespace std;

int main() {
    // Creating an object of Computer class

    Program Program_A(2000,100,100,50);
    Program Program_B(2000,0.1, 0.4, 0.25);
    Program Program_C(500,100,2000,200);
    // Create different computer instances
    Computer Computer1(1.0, 2.0, 2.0, 3.0, 4.0);
    Computer Computer2(1.2, 2.0, 3.0, 4.0, 3.0);
    Computer Computer3(2.0, 2.0, 2.0, 4.0, 6.0);


    // Display Specifications

    Computer1.printStats();
    Computer1.calculateExecutionTime(Program_A);
    cout << "computer 1 program A" << std::endl;
    // cout<<"Execution Time: "<<Computer2.calculateExecutionTime(Program_B)<<std::endl;
    cout<<"Execution Time: "<<Computer1.calulateExecutionTimelocal(Program_A)<<std::endl;
    cout<<"mips: "<<Computer1.calculatemips(Program_A)<<std::endl;
    cout<<"global mips: "<<Computer1.calculatemipsglobal(Program_A)<<std::endl;
    cout << "computer 1 program B" << std::endl;
    Computer1.calculateExecutionTime(Program_B);
    // cout<<"Execution Time: "<<Computer1.calculateExecutionTime(Program_A)<<std::endl;
    cout<<"Execution Time: "<<Computer1.calulateExecutionTimelocal(Program_B)<<std::endl;
    cout<<"mips: "<<Computer1.calculatemips(Program_B)<<std::endl;
    cout<<"global mips: "<<Computer1.calculatemipsglobal(Program_B)<<std::endl;

    cout << "computer 1 program C" << std::endl;
    Computer1.calculateExecutionTime(Program_C);
    // cout<<"Execution Time: "<<Computer1.calculateExecutionTime(Program_C)<<std::endl;
    cout<<"Execution Time: "<<Computer1.calulateExecutionTimelocal(Program_C)<<std::endl;
    cout<<"global mips: "<<Computer1.calculatemipsglobal(Program_C)<<std::endl;
    cout<<"mips: "<<Computer1.calculatemips(Program_C)<<std::endl;

    // double globalCPI = Computer1.calculateGlobalCPI(); // Store the result
    // std::cout << "Global CPI: " << globalCPI << std::endl; // Print the result

    // Computer 2 Stats and Calculations
    Computer2.printStats();
    cout << "computer 2 program A" << std::endl;
    Computer2.calculateExecutionTime(Program_A);
    cout << "Execution Time: " << Computer2.calulateExecutionTimelocal(Program_A) << std::endl;
    cout << "mips: " << Computer2.calculatemips(Program_A) << std::endl;
    cout << "global mips: " << Computer2.calculatemipsglobal(Program_A) << std::endl;

    cout << "computer 2 program B" << std::endl;    Computer2.calculateExecutionTime(Program_B);
    cout << "Execution Time: " << Computer2.calulateExecutionTimelocal(Program_B) << std::endl;
    cout << "mips: " << Computer2.calculatemips(Program_B) << std::endl;
    cout << "global mips: " << Computer2.calculatemipsglobal(Program_B) << std::endl;

    Computer2.calculateExecutionTime(Program_C);
    cout << "computer 2 program C" << std::endl;
    cout << "Execution Time: " << Computer2.calulateExecutionTimelocal(Program_C) << std::endl;
    cout << "global mips: " << Computer2.calculatemipsglobal(Program_C) << std::endl;
    cout << "mips: " << Computer2.calculatemips(Program_C) << std::endl;

    // Computer 3 Stats and Calculations
    Computer3.printStats();
    cout << "computer 3 program A" << std::endl;
    Computer3.calculateExecutionTime(Program_A);
    cout << "Execution Time: " << Computer3.calulateExecutionTimelocal(Program_A) << std::endl;
    cout << "mips: " << Computer3.calculatemips(Program_A) << std::endl;
    cout << "global mips: " << Computer3.calculatemipsglobal(Program_A) << std::endl;
    cout << "computer 3 program B" << std::endl;
    Computer3.calculateExecutionTime(Program_B);
    cout << "Execution Time: " << Computer3.calulateExecutionTimelocal(Program_B) << std::endl;
    cout << "mips: " << Computer3.calculatemips(Program_B) << std::endl;
    cout << "global mips: " << Computer3.calculatemipsglobal(Program_B) << std::endl;
    cout << "computer 3 program C" << std::endl;
    Computer3.calculateExecutionTime(Program_C);
    cout << "Execution Time: " << Computer3.calulateExecutionTimelocal(Program_C) << std::endl;
    cout << "global mips: " << Computer3.calculatemipsglobal(Program_C) << std::endl;
    cout << "mips: " << Computer3.calculatemips(Program_C) << std::endl;

    return 0;
}
