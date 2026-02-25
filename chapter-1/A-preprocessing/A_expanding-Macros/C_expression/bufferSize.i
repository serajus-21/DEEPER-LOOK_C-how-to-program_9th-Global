# 0 "bufferSize.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "bufferSize.c"



# 1 "bufferSize.h" 1
# 5 "bufferSize.c" 2

int main(void) {
    int allocatedMemory = 48;
    int remainingBuffer = (128+64) - allocatedMemory;
    printf("Remaining Buffer Size: %d\n", remainingBuffer);
}
