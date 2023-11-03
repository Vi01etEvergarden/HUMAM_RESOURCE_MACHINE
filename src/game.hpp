#pragma once

#define MAX_CNV 10
#define MAX_AREA 5
#define MAX_CMD 20

#define inDisplay(x) ((inCnv.Top>=x) ? intToString(inCnv.Idx[x]) : " X ")      //display box on inCnv or "X"	x refers to row index in stdPrint
#define outDisplay(x) ((outCnv.Top>=x) ? intToString(outCnv.Idx[x]) : " X ")	//display box on outCnv or "X"	x referd to row index in stdPrint
#define arrowDis(x,cmdIdx) (cmdIdx==x ? '>' : '*')								//display '>' in front of current cmd otherwise '*'		x refers to rowIdx+1 in stdPrint
#define cmdDis(x) (x<=cmdNum ? intToString(x) : "   "),(x<=cmdNum ? cmd[x].command : " ")    //display cmd index and text if available

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

char* intToString(int num);		//format transfer an int into a string (length == 3)
void logMessage(const char* message);	//print logmessage into my_log.txt
void stdPrint(int cmdIdx);	//input current cmd index


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
extern int cmdNum;
