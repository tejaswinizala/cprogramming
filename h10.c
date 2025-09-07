#include<stdio.h>
void main()
{
int i,n;
long long factorial=1;
printf("Enter n: ");
scanf("%d",&n);
if(n<1)
    printf("The factorial of negative value is not possible");
else{
for(i=1;i<=n;i++)
factorial*=i;
printf("The factorial of %d is %d",n,factorial);
}
}
