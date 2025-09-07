#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter n: ");
scanf("%d",&n);
for(i=1;i<=n;i+=2)
sum+=i;
printf("The sum is %d",sum);

}
