//
// Created by David Lacle on 19/02/2025.
//

#ifndef PROGRAM_H_INCLUDED
#define PROGRAM_H_INCLUDED
class Program{
private:

public:
    int numArith;
    int numStore;
    int numLoad;
    int numBranch;
    int numTotal;

    Program (int, int, int, int);
    Program (int,double,double,double);
    void printStats();
    // Getter functions

};
#endif //PROGRAM_H
