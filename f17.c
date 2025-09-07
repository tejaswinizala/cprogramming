#include<stdio.h>
void main()
{
float i,p,r,t;
printf("Enter principal amount: ");
scanf("%f",&p);
printf("Enter annual interest rate: ");
scanf("%f",&r);
printf("Enter time period in months: ");
scanf("%f",&t);

i = (p*r*t)/100;
printf("The simple interest is %f",i);

}
