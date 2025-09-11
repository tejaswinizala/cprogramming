#include <stdio.h>

int main() {
    int num, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    // Reverse the number first (so digits come in correct order)
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Digits: ");
    while (rev > 0) {
        digit = rev % 10;
        printf("%d ", digit);
        rev /= 10;
    }

    return 0;
}
