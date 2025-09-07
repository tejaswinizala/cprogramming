#include<stdio.h>
void main()
{
int avg, total,sub1,sub2,sub3;
printf("Enter the marks of subject 1 out of 100: ");
scanf("%d",&sub1);
printf("Enter the marks of subject 2 out of 100: ");
scanf("%d",&sub2);
printf("Enter the marks of subject 3 out of 100: ");
scanf("%d",&sub3);
total = sub1 + sub2 + sub3;
avg = total/3;
printf("The total marks of three subjects =%d/300\n",total);
printf("The average marks of three subjects = %d/100\n",avg);


}
