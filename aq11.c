#include <stdio.h>
void main(){
     float grams;
    printf("Enter grams: ");
    scanf("%f", &grams);
    printf("Kilograms = %.2f\n", grams / 1000);
}