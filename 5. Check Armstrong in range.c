#include <stdio.h>
int main() {
    int start, end, num, original, remainder, result, digits;
    printf("Enter start and end numbers: ");
    scanf("%d %d", &start, &end);
    for (num = start; num <= end; num++) {
        original = num;
        digits = 0;
        while (original != 0) {
            digits++;
            original /= 10;
        }
        original = num;
        result = 0;
        while (original != 0) {
            remainder = original % 10;
            int power = remainder;
            for (int i = 1; i < digits; i++) {
                power *= remainder;
            }
            result += power;
            original /= 10;
        }
        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}