#include <stdio.h>
int main() {
    int i;
    float num, sum = 0, mean;

    printf("Enter 10 values:\n");
    for (i = 1; i <= 10; i++) {
        printf("Value %d: ", i);
        scanf("%f", &num);
        sum += num;   // add each number to sum
    }

    mean = sum / 10;   // mean formula

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f", mean);

    return 0;
}
