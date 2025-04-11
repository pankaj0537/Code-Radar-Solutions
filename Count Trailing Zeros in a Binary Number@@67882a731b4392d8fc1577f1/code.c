#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int count = 0;
    if (num == 0) {
        count = 32; // all bits are 0 in a 32-bit number
    } else {
        while ((num & 1) == 0) {
            count++;
            num >>= 1;
        }
    }

    printf("%d\n", count);
    return 0;
}