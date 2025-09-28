#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers: %d\n", sum);
    return 0;
}