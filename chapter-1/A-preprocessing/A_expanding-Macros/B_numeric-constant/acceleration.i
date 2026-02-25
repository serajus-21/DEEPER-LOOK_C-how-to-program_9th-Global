# 0 "acceleration.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "acceleration.c"




# 1 "mathConstant.h" 1
# 6 "acceleration.c" 2

int main(void) {
    printf("%s", "-------Velocity After Certain Times-------\n");

    float time = 0;
    printf("Enter times(second): ");
    scanf("%f", &time);


    float vEarth = 9.81 * time;
    float vMoon = 1.62 * time;
    float vMars = 3.71 * time;

    printf("Velocity in Earth: %.2f\n", vEarth);
    printf("Velocity in Moon: %.2f\n", vMoon);
    printf("Velocity in Mars: %.2f\n", vMars);

    return 0;
}
