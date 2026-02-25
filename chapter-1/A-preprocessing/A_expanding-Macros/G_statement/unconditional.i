# 0 "unconditional.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "unconditional.c"


# 1 "header.h" 1
# 4 "unconditional.c" 2

int main(void) {
    int a=0, b=0;
    printf("Enter X,Y: ");
    scanf("%d %d", &a, &b);
    printf("The values are: %d ||| %d\n", a,b);


    int resetIns = 0;
    printf("Do you wanna reset? (1.YES, 2.NO): ");
    scanf("%d", &resetIns);
    if(resetIns == 1) {
        a = 0; b = 0;
        printf("The values are: %d ||| %d\n", a,b);
    } else if(resetIns == 2) {
        printf("The values are: %d ||| %d\n", a,b);
    } else {
        printf("Invalid Input\n");
    }
}
