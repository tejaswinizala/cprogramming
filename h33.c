#include <stdio.h>
#include <math.h>

int main() {
    int num, square, temp, digits = 0, divisor;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    // count digits in the number
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // create divisor = 10^digits
    divisor = (int)pow(10, digits);

    if (square % divisor == num)
        printf("%d is an Automorphic number.\n", num);
    else
        printf("%d is NOT an Automorphic number.\n", num);

    return 0;
}
