#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
sum+=i;
printf("The sum of %d natural numbers is %d",n,sum);
}
