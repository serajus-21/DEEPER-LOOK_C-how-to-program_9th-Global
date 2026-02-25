//bufferSize.c

#include<stdio.h>
#include "bufferSize.h"

int main(void) {
    int allocatedMemory = 48;
    int remainingBuffer = bufferSize - allocatedMemory;
    printf("Remaining Buffer Size: %d\n", remainingBuffer);
}