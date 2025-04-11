#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int started = 0; // To skip leading zeros

    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit || started) {
            printf("%d", bit);
            started = 1;
        }
    }

    if (!started) {
        printf("0"); // If input is 0
    }

    printf("\n");
    return 0;
}