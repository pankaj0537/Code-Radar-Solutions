#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Use unsigned int for correct bit manipulation
    unsigned int mask = 1 << 31;

    if ((unsigned int)num & mask)
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}