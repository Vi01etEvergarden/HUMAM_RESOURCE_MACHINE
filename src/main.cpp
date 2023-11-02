#include <iostream>
#include "game.hpp"

conveyor inCnv , outCnv;
int area[MAX_AREA];
int boxInHand; 
char lInfo[40]="temp level info";
operate cmd[MAX_CMD];
bool Hand;

int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
//test
    inCnv.Idx[0]=2;
    inCnv.Top = 2;
    Hand = true;
    boxInHand = 5;
//test    
    stdPrint(1);
}
