// conditional.c

#include<stdio.h>
#include "header.h"

int main(void) {
    int a=0, b=0;
    printf(prompt);
    scanf("%d %d", &a, &b);
    printf(outputMessage, a,b);

    // -------RESET---------
    int resetIns = 0;
    printf(qPrompt);
    scanf("%d", &resetIns);
    if(resetIns == 1) {
        reset(a,b);
        printf(outputMessage, a,b);
    } else if(resetIns == 2) {
        printf(outputMessage, a,b);
    } else {
        printf(invalidMessage);
    }
}