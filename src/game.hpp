#pragma once

#define MAX_CNV 10
#define MAX_AREA 5
#define pXX %s
#define dXX %3d
#define MAX_CMD 20

#define inDisplay(x) (inCnv.Top>=x) ? intToString(inCnv.Idx[x]) : " X ")
/*
need global variables:
	int	boxInHand
	int inConv[]
	int outConv[]	
	int area[]       
				//using func intToString to the num as a string " 3 " or " X "
need functions :
	
	init interface
	level selection
	
	input commands (from FILE* or stdin)
	clear screen
	std print screen
	
	inBox
	outBox
	addBox
	subBox
	copyTo
	copyFrom
	jumpTo
	jumpIfZero




*/

char* intToString(int num);
void logMessage(const char* message);
void stdPrint(int cmdIdx);


typedef struct _conveyor
{
	int Idx[MAX_CNV];
	int Top;
}conveyor;


typedef struct _operate
{
	int Idx;
	char command[20];

}operate;

extern conveyor inCnv , outCnv;
extern int area[MAX_AREA];
extern int boxInHand;
extern bool Hand; 
extern char lInfo[40];
extern operate cmd[MAX_CMD];

