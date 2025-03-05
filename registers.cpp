#include <iostream>
#include "registers.h"

using namespace std;

Registers::Registers ()
{
  programcount = 0;
  for(int i = 0; i < 32; i++) {
    regVal[i] = 0;
  }
}
void Registers::setRegisters (int reg,int value)
    {
  regVal[reg]=value;
  };

int Registers::getRegisters(int reg)
  {
    return regVal[reg];
}
void Registers::setPC (int count)
    {
  programcount=count;
  };

int Registers::getPC (){
  return programcount;
};
void Registers::print() {
  int columns = 6;  // Number of registers per row
  for (int i = 0; i < 32; i++) {
    cout << "Registers: [" << i << "] = " << regVal[i];

    // Print a new line after every 8 registers
    if ((i + 1) % columns == 0) {
      cout << endl;
    } else {
      cout << "\t";  // Add a tab space to separate columns
    }
  }
  cout << endl;  // Ensure the output ends with a newline
}