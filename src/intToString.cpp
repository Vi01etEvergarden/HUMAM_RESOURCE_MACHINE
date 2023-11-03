#include "game.hpp"
#include <stdio.h>
#include <stdlib.h> 

char* intToString(int num)
{
    char* str = (char*)malloc(4 * sizeof(char)); // ������ϵ��ڴ棬��һ��λ�ø���ֹ��

    if (str != NULL)
    {
        if (num < 10)
        {
            snprintf(str, 4, " %1d ", num); // һλ��ʱ��ʽ��Ϊ�ո����ֿո�
        }
        else if (num >= 10 && num < 100)
        {
            snprintf(str, 4, " %2d", num); // ��λ��ʱ��ʽ��Ϊ�ո���λ��
        }
    }

    return str;
}


