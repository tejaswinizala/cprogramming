#include<stdio.h>
void main()
{
int a,b,temp;
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
temp = a;
a = b;
b = temp;
printf("The swapped value of a is %d and b is %d",a,b);
}
