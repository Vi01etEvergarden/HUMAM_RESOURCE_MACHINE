#include "game.hpp"
#include <stdio.h>
#include<stdlib.h> 



char* intToString(int num)
{
    int numLength = 3; // 初始化为3，以保证有足够的空间
    if (num < 10) {
        numLength = 2; // 如果是一位数，将长度改为2
    }

    char* str = (char*)malloc(numLength * sizeof(char)); // 分配堆上的内存

    if (str != NULL)
    {
    	    if (num < 10) {
        	snprintf(str, numLength + 1, "%2d ", num);
    	}
    	else{
	
        	snprintf(str, numLength + 1, "%3d", num); // 使用 snprintf 替代 sprintf，以避免缓冲区溢出
    		}
	}

    return str;
}

