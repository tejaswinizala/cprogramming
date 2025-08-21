#include <stdio.h>
void main(){
    int sub1, sub2, sub3, total;
    float average;

    // Input marks
    printf("Enter marks of subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &sub3);

    // Calculate total and average
    total = sub1 + sub2 + sub3;
    average = total / 3.0;

    // Output result
    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
}

    