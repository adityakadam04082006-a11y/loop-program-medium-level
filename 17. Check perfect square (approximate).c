#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i * i <= num; i++) {
        if (i * i == num) {
            printf("Perfect square\n");
            return 0;
        }
    }
    printf("Not a perfect square\n");
    return 0;
}