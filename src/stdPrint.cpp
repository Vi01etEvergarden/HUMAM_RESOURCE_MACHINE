#include <stdio.h>
#include "game.hpp"


void stdPrint(int cmdIdx)
{
    printf("Level information: %20s\n",lInfo);
    printf("\n\n");
    printf("    +---+       +---+                                           +---+        | ===== CODE ===== \n");
    printf(" IN |%3s|       |%3s|                                           |%3s|  OUT   | %c  %3s  %-12s          \n",inDisplay(0),((Hand) ? intToString(boxInHand) : " X "),outDisplay(0),arrowDis(1,cmdIdx),cmdDis(1));
//    printf("    +---+       +---+                                           +---+        | %c  %3s  %12s          \n");
//    printf("    +---+       @   @                                           +---+        | %c  %3s  %12s          \n");
//    printf("    |%3s|       -----                                           |%3s|        | %c  %3s  %12s          \n");
//    printf("    +---+       |@ @|                                           +---+        | %c  %3s  %12s          \n");
//    printf("    +---+         +                                             +---+        | %c  %3s  %12s          \n");
//    printf("    |%3s|       /   \\                                           |%3s|        | %c  %3s  %12s          \n");
//    printf("    +---+        | |                                            +---+        | %c  %3s  %12s          \n");
//    printf("    +---+                                                       +---+        | %c  %3s  %12s          \n");
//    printf("    |%3s|       +---+ +---+ +---+ +---+                         |%3s|        | %c  %3s  %12s          \n");
//    printf("    +---+       |%3s| |%3s| |%3s| |%3s|                         +---+        | %c  %3s  %12s          \n");
//    printf("    +---+       +---+ +---+ +---+ +---+                                      | %c  %3s  %12s          \n");
//    printf("    |%3s|         0     1     2     3                                        | %c  %3s  %12s          \n");
//    printf("    +---+                                                                    | %c  %3s  %12s          \n");
//    printf("    +---+                                                                    | %c  %3s  %12s          \n");
//    printf("    |%3s|                                                                    | %c  %3s  %12s          \n");
//    printf("    +---+                                                                    | %c  %3s  %12s          \n");
    char message[20];
    sprintf(message,"successful print cmd%d",cmdIdx);
    logMessage(message);
//
}
