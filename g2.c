#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter value of a: ");
scanf("%d",&a);
printf("Enter value of b: ");
scanf("%d",&b);
printf("Enter value of c: ");
scanf("%d",&c);
if (a>b&&a>c)
    printf("The largest of three values is a=%d",a);
else if (b>a&&b>c)
    printf("The largest of three values is b=%d",b);
else
    printf("The largest of three values is c= %d",c);
}
