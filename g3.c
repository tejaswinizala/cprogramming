#include<stdio.h>
void main()
{
float gs;
printf("Enter gross salary: ");
scanf("%f",&gs);
if (gs>=10000)
    printf("The net salary is %f",gs+0.1*gs-0.03*gs);
else if(gs>5000 && gs<10000)
    printf("The net salary is %f",gs+0.07*gs-0.02*gs);




}
