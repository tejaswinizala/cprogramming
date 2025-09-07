#include<stdio.h>
void main()
{
float gs;
printf("Enter gross sales: ");
scanf("%f",&gs);
if (gs>=20000)
    printf("The value of net sales is %f",gs-gs*0.15);
else if (gs>=10000 && gs<20000)
    printf("The value of net sales is %f",gs - gs*0.1);
else if (gs<10000)
    printf("The value of net sales is %f",gs-gs*0.05);

}
