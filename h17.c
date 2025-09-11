#include <stdio.h>
int main() {
    int i, num;
    int positive = 0, negative = 0, zeros = 0;

    printf("Enter 200 numbers:\n");

    for (i = 1; i <= 200; i++) {
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zeros++;
    }

    printf("\nPositive numbers = %d", positive);
    printf("\nNegative numbers = %d", negative);
    printf("\nZeroes = %d", zeros);

    return 0;
}
