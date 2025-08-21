#include <stdio.h>
void main(){
    // Q12: Kilograms to grams
    float kg;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    printf("Grams = %.2f\n", kg * 1000);

    // Q13: GB to MB and KB
    float gb;
    printf("Enter GB: ");
    scanf("%f", &gb);
    printf("MB = %.2f\n", gb * 1024);
    printf("KB = %.2f\n", gb * 1024 * 1024);

    // Q14: Celsius to Fahrenheit
    float celsius, fahrenheit;
    printf("Enter Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32;
    printf("Fahrenheit = %.2f\n", fahrenheit);
}