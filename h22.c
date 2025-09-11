#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle case if number is 0
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;   // remove last digit
            count++;     // increase count
        }
    }

    printf("The number has %d digits.\n", count);

    return 0;
}
