#include <stdio.h>
void main(){
     int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    printf("Hours = %.2f\n", minutes / 60.0);
}