#include <stdio.h>
#include "game.hpp"


void stdPrint(int cmdIdx)
{
    printf("Level information: %20s\n",lInfo);
    printf("\n\n");
    printf("    +---+       +---+                                       +---+        | ===== CODE ===== \n");
    printf(" IN |p~~|       |p~~|                                       |p~~|  OUT   |d~~  p~~          \n");
    printf("    +---+       +---+                                       +---+        |d~~  p~~          \n");
    printf("    +---+       @   @                                       +---+        |d~~  p~~          \n");
    printf("    |p~~|       -----                                       |p~~|        |d~~  p~~          \n");
    printf("    +---+       |@ @|                                       +---+        |d~~  p~~          \n");
    printf("    +---+         +                                         +---+        |d~~  p~~          \n");
    printf("    |p~~|       /   \\                                       |p~~|        |d~~  p~~          \n");
    printf("    +---+        | |                                        +---+        |d~~  p~~          \n");
    printf("    +---+                                                   +---+        |d~~  p~~          \n");
    printf("    |p~~|       +---+ +---+ +---+ +---+                     |p~~|        |d~~  p~~          \n");
    printf("    +---+       |p~~| |p~~| |p~~| |p~~|                     +---+        |d~~  p~~          \n");
    printf("    +---+       +---+ +---+ +---+ +---+                                  |d~~  p~~          \n");
    printf("    |p~~|         0     1     2     3                                    |d~~  p~~          \n");
    printf("    +---+                                                                |d~~  p~~          \n");
    printf("    +---+                                                                |d~~  p~~          \n");
    printf("    |p~~|                                                                |d~~  p~~          \n");
    printf("    +---+                                                                |d~~  p~~          \n");
    char message[20];
    sprintf(message,"successful print cmd%d",cmdIdx);
    logMessage(message);

}