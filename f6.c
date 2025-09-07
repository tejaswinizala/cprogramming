#include<stdio.h>
void main()
{
int a,b,c1,c2,c3,c4;
printf("Enter two numbers: ");
scanf("%d,%d",&a,&b);
c1 = a+b;
c2 = a-b;
c3 = a*b;
c4 = a/b;

printf("The addition of %d and %d is %d\n", a,b,c1);
printf("The subtraction of %d and %d is %d\n", a,b,c2);
printf("The multiplication of %d and %d is %d\n", a,b,c3);
printf("The division of %d and %d is %d\n", a,b,c4);

}
