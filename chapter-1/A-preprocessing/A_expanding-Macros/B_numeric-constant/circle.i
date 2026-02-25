# 0 "circle.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "circle.c"



# 1 "mathConstant.h" 1
# 5 "circle.c" 2

int main(void) {

    float radius = 0;
    print("Enter Radius: ");
    scanf("%f", radius);


    float area = 3.1416 * ((radius)*(radius));
    printf("Area of Circle: %.2f\n", area);

    return 0;
}
