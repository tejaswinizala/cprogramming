#include<stdio.h>
void main()
{
int l,b,a,p;
printf("Enter the length of the rectangle in metres: ");
scanf("%d",&l);
printf("Enter the breadth of the rectangle in metres: ");
scanf("%d",&b);
a = l*b;
p = 2*(l+b);
printf("The area of the rectangle is %d sq.metres and perimeter is %d metres",a,p);

}
