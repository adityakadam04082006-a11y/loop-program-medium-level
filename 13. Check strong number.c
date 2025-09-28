#include <stdio.h>
int main() {
    int num, original, remainder, fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        remainder = original % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        original /= 10;
    }
    if (sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not a strong number\n");
    }
    return 0;
}