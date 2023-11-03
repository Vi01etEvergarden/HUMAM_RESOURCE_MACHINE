#include "game.hpp"
#include <stdio.h>
#include <stdlib.h> 

char* intToString(int num)
{
    char* str = (char*)malloc(4 * sizeof(char)); // 分配堆上的内存，多一个位置给终止符

    if (str != NULL)
    {
        if (num < 10)
        {
            snprintf(str, 4, " %1d ", num); // 一位数时格式化为空格数字空格
        }
        else if (num >= 10 && num < 100)
        {
            snprintf(str, 4, " %2d", num); // 两位数时格式化为空格两位数
        }
    }

    return str;
}


