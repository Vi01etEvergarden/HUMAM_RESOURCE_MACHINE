#include "game.hpp"
#include <stdio.h>
extern conveyor inCnv , outCnv;
extern int area[MAX_AREA];
extern int boxInHand; 
extern char lInfo[40];
extern operate cmd[MAX_CMD];


void logMessage(const char* message) {
    // 打开日志文件以追加方式写入
    FILE* logFile = fopen("data/my_log.txt", "a");
    
    if (logFile) {
        // 写入日志信息
        fprintf(logFile, "%s\n", message);
        
        // 关闭日志文件
        fclose(logFile);
    }
}
