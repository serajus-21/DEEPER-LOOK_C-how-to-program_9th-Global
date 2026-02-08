#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    /* Variables for circle */
    float circleRadius;
    float circleArea;

    /* Variables for triangle */
    float triangleBase;
    float triangleHeight;
    float triangleArea;

    /* ---- Circle Input ---- */
    printf("Enter radius of the circle: ");
    scanf("%f", &circleRadius);

    /* Function call */
    circleArea = areaOfCircle(circleRadius);

    printf("Area of the circle = %.2f\n\n", circleArea);

    /* ---- Triangle Input ---- */
    printf("Enter base of the triangle: ");
    scanf("%f", &triangleBase);

    printf("Enter height of the triangle: ");
    scanf("%f", &triangleHeight);

    /* Function call */
    triangleArea = areaOfTriangle(triangleBase, triangleHeight);

    printf("Area of the triangle = %.2f\n", triangleArea);

    return 0;
}