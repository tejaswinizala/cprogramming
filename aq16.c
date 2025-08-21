#include <stdio.h>
void main(){
     // Q16: Simple Interest
    float p, r, n, si;
    printf("Enter principal, rate, and time: ");
    scanf("%f%f%f", &p, &r, &n);
    si = (p * r * n) / 100;
    printf("Simple Interest = %.2f\n", si);
}