// circle.c

#include<stdio.h>
#include "mathConstant.h"

int main(void) {
    //variable definition & userInput
    float radius = 0;
    printf("Enter Radius: ");
    scanf("%f", &radius);

    //processing & printing
    float area = PI * mySquare(radius);
    printf("Area of Circle: %.2f\n", area);

    return SUCCESS;
}

