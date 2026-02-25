// arg.c - single & double argument

#include<stdio.h>
#include "header.h"
#include "../E_string/header.h"

int main(void) {
    float radiusValue = 0;
    printf(inputMessage);
    scanf("%f", &radiusValue);

    float areaCircle = _areaOfCircle(PI, radiusValue);

    printf(outputMessage, areaCircle);
}