# 0 "area.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "area.c"



# 1 "header.h" 1
# 5 "area.c" 2

int main(void) {
    printf("%s", "AREA CALCULATOR\n");
    printf("%s", "3.1.1\n");

    float radius = 0;
    printf("Enter Radius: ");
    scanf("%f", &radius);

    float area = 3.1416 * ((radius)*(radius));

    printf("Area of Circle is: %.2f\n", area);

    return 0;
}
