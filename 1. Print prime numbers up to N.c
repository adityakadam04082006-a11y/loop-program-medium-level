#include <stdio.h>
int main() {
    int num, i, j, isPrime;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}