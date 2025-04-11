#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    // Set the nth bit
    num = num | (1 << n);

    printf("%d\n", num);
    return 0;
}