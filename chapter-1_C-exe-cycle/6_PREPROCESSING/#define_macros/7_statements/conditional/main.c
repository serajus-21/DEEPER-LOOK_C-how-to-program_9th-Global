#include<stdio.h>
#include "header.h"

int main(void) {
    int x=998, y=9;
    printf("x=%d, y=%d", x,y);

    _reset(x,y);

    printf("AFTER RESET\n");
    printf("x=%d, y=%d\n", x,y);
}