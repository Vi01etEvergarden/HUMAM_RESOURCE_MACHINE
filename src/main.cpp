#include <iostream>
#include "game.hpp"
#include <cstring>
conveyor inCnv , outCnv;
int area[MAX_AREA];
int boxInHand; 
char lInfo[40]="temp level info";
operate cmd[MAX_CMD];
bool Hand;
int cmdNum;


int main(int argc, char *argv[])
{
    std::cout << "Hello world!" << std::endl;
//test
    inCnv.Idx[0]=2;
    inCnv.Top = -1;
    outCnv.Idx[0] = 3;
    outCnv.Top = 3;
    Hand = true;
    boxInHand = 5;
    cmdNum=1;
    strcpy(cmd[1].command,"inbox"); 
    printf("%s\n",cmd[1].command);
//test    
    stdPrint(2);
}
