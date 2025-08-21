#include <stdio.h>
void main(){
     float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = 0.2 * gross;   // 20% allowance
    deduction = 0.1 * gross;   // 10% deduction
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n", net);
}