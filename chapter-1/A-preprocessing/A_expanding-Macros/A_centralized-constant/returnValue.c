// returnValue.c

#include<stdio.h>
#include "returnValue.h"
#include "appVersion.h"

int main(void) {
    printf("%s", appName);
    printf("%s", appVersion);
    printf("SUCCESS: %d\n", SUCCESS);
    printf("FAILED: %d\n", FAILED);

    // return SUCCESS;
    // return FAILED;
}