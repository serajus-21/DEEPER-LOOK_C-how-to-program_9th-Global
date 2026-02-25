# 0 "singleArg-powerCalc.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "singleArg-powerCalc.c"



# 1 "header.h" 1
# 5 "singleArg-powerCalc.c" 2
# 1 "../E_string/header.h" 1
# 6 "singleArg-powerCalc.c" 2

int main(void) {
    float radiusValue = 0;
    printf("Enter Radius: ");
    scanf("%f", &radiusValue);

    float areaCircle = areaOfCircle(3.1416, radiusValue);

    printf("Area of Circle is: %.2f\n", areaCircle);
}
