#include <stdio.h>
void main(){
    // Q17: Area and perimeter of a square
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);
    printf("Area = %d\n", side * side);
    printf("Perimeter = %d\n", 4 * side);
}