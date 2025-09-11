#include <stdio.h>
int main() {
    int n, i;
    float num, sum = 0, mean;

    printf("Enter how many values: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 1; i <= n; i++) {
        printf("Value %d: ", i);
        scanf("%f", &num);
        sum += num;   // add each number to sum
    }

    mean = sum / n;   // mean formula

    printf("\nSum = %.2f", sum);
    printf("\nMean = %.2f", mean);

    return 0;
}
