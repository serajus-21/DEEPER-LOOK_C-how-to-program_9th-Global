//area.c

#include<stdio.h>
#include "header.h"

int main(void) {
    printf("%s", appName);
    printf("%s", version);
    
    float radius = 0;
    printf(inputMessage);
    scanf("%f", &radius);

    float area = PI * mySquare(radius);

    printf(outputMessage, area);

    osMessage SUCCESS;
}