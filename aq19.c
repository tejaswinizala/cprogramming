#include <stdio.h>
void main(){
     // Q19: Area of a circle (π = 22/7)
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area = (22 * radius * radius) / 7;
    printf("Area = %.2f\n", area);
}