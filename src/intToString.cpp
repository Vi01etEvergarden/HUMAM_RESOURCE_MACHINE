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
    char* str = (char*)malloc(20 * sizeof(char)); // ������ϵ��ڴ�

    if (str != NULL)
    {
        snprintf(str, 20, "%d", num); // ʹ�� snprintf ��� sprintf���Ա��⻺�������
    }

    return str;
}
