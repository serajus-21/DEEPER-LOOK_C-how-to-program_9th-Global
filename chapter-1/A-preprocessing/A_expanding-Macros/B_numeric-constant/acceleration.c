//acceleration.c
// formula : velocity after certain times = g*t

#include<stdio.h>
#include "mathConstant.h"

int main(void) {
    printf("%s", appName);
    //variable definitions & userInput
    float time = 0;
    printf("Enter times(second): ");
    scanf("%f", &time);
    
    //process & print
    float vEarth = gEarth * time;
    float vMoon = gMoon * time;
    float vMars = gMars * time;

    printf("Velocity in Earth: %.2f %s\n", vEarth, gUNIT);
    printf("Velocity in Moon: %.2f %s\n", vMoon, gUNIT);
    printf("Velocity in Mars: %.2f %s\n", vMars, gUNIT);

    return SUCCESS;
}
