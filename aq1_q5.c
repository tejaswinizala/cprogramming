#include <stdio.h>

void main() {
    // Q1: Add two numbers
    int a, b;
    printf("Enter two numbers for addition: ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\n", a + b);


    // Q2: Subtract two numbers
    printf("Enter two numbers for subtraction: ");
    scanf("%d%d", &a, &b);
    printf("Difference = %d\n", a - b);

    // Q3: Multiply two numbers
    printf("Enter two numbers for multiplication: ");
    scanf("%d%d", &a, &b);
    printf("Product = %d\n", a * b);

    // Q4: Divide two numbers
    printf("Enter two numbers for division: ");
    scanf("%d%d", &a, &b);
    if (b != 0)
        printf("Quotient = %.2f\n", (float)a / b);
    else
        printf("Cannot divide by zero.\n");

    // Q5: Add, subtract, multiply, divide together
    printf("Enter two numbers for all operations: ");
    scanf("%d%d", &a, &b);
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    if (b != 0)
        printf("Quotient = %.2f\n", (float)a / b);
    else
        printf("Cannot divide by zero.\n");

}