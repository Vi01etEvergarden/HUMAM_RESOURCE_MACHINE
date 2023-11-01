#include "game.hpp"
#include <stdio.h>
#include<stdlib.h> 

extern conveyor inCnv , outCnv;
extern int area[MAX_AREA];
extern int boxInHand; 
extern char lInfo[40];
extern operate cmd[MAX_CMD];

char* intToString(int num)
{
    char* str = (char*)malloc(20 * sizeof(char)); // 分配堆上的内存

    if (str != NULL)
    {
        snprintf(str, 20, "%d", num); // 使用 snprintf 替代 sprintf，以避免缓冲区溢出
    }

    return str;
}
