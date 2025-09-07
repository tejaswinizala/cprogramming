#include<stdio.h>
void main()
{
int a,b;
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
if (a>b)
    printf("The largest of the two values is a=%d and smallest is b=%d",a,b);
else
    printf("The largest of the two values is b=%d and smallest is a=%d",b,a);


}
