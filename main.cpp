#include "simulator.h"
#include "program.h"
#include "registers.h"

// void loadProgram (Program *program)
// {
// 	program->appendInstruction (new OriInstruction (1, 0, 12));
// 	program->appendInstruction (new OriInstruction (2, 0, 4));
// 	program->appendInstruction (new OriInstruction (3, 0, 1));
// 	program->appendInstruction (new AddInstruction (4, 4, 1));
// 	program->appendInstruction (new SubInstruction (2, 2, 3));
// 	program->appendInstruction (new BrneInstruction (2, 0, -3));
// }


// int main (void)
// {
	// Registers A;
	// A.setRegisters(31,30);
	// A.Print();
	// cout << A.getRegisters(31)<<endl;
	// // Initialize registers with all zeros and PC set to 0
	// Registers regs;
	//
	// // Set initial register values for testing
	// regs.setRegisters(2, 10);  // $2 = 10
	// regs.setRegisters(3, 10);  // $3 = 20
	//
	// // Create an AddInstruction object: add $1, $2, $3
	// Instruction* instr = new AddInstruction(1, 2, 3);
	// Instruction* instr1= new BrneInstruction(2, 3, -4);
	// std::cout << "counter: " << regs.getPC() << std::endl;
	// // Test disassemble method
	// std::cout << "Disassembly: ";
	// instr->disassemble();
	// instr1->disassemble();
	// // Execute the instruction
	// regs.setPC(instr->execute(&regs));
	// std::cout << "counter: " << regs.getPC() << std::endl;
	// regs.setPC(instr1->execute(&regs));
	// std::cout << "counter: " << regs.getPC() << std::endl;
	// // Output result to verify correctness
	// std::cout << "Register $1 after addition: " << regs.getRegisters(4) << std::endl;
	// std::cout << "counter: " << regs.getPC() << std::endl;
	// // Cleanup
	// //regs.Print();
	//
	// delete instr;


// 	return 0;
// }


void loadProgram (Program *program)
{
	program->appendInstruction (new OriInstruction (1, 0, 12));
	program->appendInstruction (new OriInstruction (2, 0, 4));
	program->appendInstruction (new OriInstruction (3, 0, 1));
	program->appendInstruction (new AddInstruction (4, 4, 1));
	program->appendInstruction (new SubInstruction (2, 2, 3));
	// program->appendInstruction (new SubInstruction (2, 2, 3));
	// program->appendInstruction (new SubInstruction (2, 2, 3));
	// program->appendInstruction (new SubInstruction (2, 2, 3));
	program->appendInstruction (new BrneInstruction (2, 0, -3));
	//program->appendInstruction (new BrneInstruction (2, 0, -2));
}


int main (void)
{
	Registers *registers	= new Registers ();
	Program	*program	= new Program ();

	loadProgram (program);

	Simulator theSimulator = Simulator (registers, program);

	theSimulator.ui ();

	return 0;
}
