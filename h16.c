#include <stdio.h>
int main() {
    int i, num;
    int smallest, largest;

    printf("Enter 100 numbers:\n");

    // Read the first number separately to initialize smallest & largest
    scanf("%d", &num);
    smallest = largest = num;

    // Read the remaining 99 numbers
    for (i = 2; i <= 100; i++) {
        scanf("%d", &num);

        if (num < smallest)
            smallest = num;

        if (num > largest)
            largest = num;
    }

    printf("\nSmallest number = %d", smallest);
    printf("\nLargest number = %d", largest);

    return 0;
}
