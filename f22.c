#include<stdio.h>
void main()
{
int net_sal,gross_sal,allow,deduct;
printf("Enter the value of gross salary: ");
scanf("%d",&gross_sal);
allow = 0.1*gross_sal;
deduct = 0.03*gross_sal;
net_sal= gross_sal + allow - deduct;
printf("The net salary is %d",net_sal);

}
