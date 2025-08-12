#include<stdio.h>
void main()
{
    int g,a,d,n;
    printf("Enter gross salary: ");
    scanf("%d",&g);
    if(g>10000)
    {
        a= 0.1 * g;
        d = 0.03 * g;
        n = g + a - d;
        printf("The net salary is: %d",n);
    }
    if(g>5000 && g<10000)
    {
        a= 0.07 * g;
        d = 0.02 * g;
        n = g + a - d;
        printf("The net salary is: %d",n);
    }

}
