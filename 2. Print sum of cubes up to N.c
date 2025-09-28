#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        int cube = i * i * i;
        sum += cube;
    }
    printf("Sum of cubes: %d\n", sum);
    return 0;
}