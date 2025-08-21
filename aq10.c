#include <stdio.h>
void main(){
     printf("Enter dollars: ");
    scanf("%f", &dollars);
    float pounds = (dollars * 48) / 70;
    printf("Pounds = %.2f\n", pounds);
}