#include "game.hpp"
#include <stdio.h>
#include<stdlib.h> 



char* intToString(int num)
{
    int numLength = 3; // ��ʼ��Ϊ3���Ա�֤���㹻�Ŀռ�
    if (num < 10) {
        numLength = 2; // �����һλ���������ȸ�Ϊ2
    }

    char* str = (char*)malloc(numLength * sizeof(char)); // ������ϵ��ڴ�

    if (str != NULL)
    {
    	    if (num < 10) {
        	snprintf(str, numLength + 1, "%2d ", num);
    	}
    	else{
	
        	snprintf(str, numLength + 1, "%3d", num); // ʹ�� snprintf ��� sprintf���Ա��⻺�������
    		}
	}

    return str;
}

