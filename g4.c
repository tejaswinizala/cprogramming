#include<stdio.h>
void main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
if (n%7==0)
    printf("The number is divisible by 7");
else
    printf("The number is not divisible by 7");
}
