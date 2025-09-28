#include <stdio.h>
int main() {
    int a, b, max, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;
    for (i = max; ; i += max) {
        if (i % a == 0 && i % b == 0) {
            printf("LCM: %d\n", i);
            break;
        }
    }
    return 0;
}