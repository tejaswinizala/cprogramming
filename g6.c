#include<stdio.h>
int main()
{
float sub1,sub2,sub3,total,average;
printf("Enter marks subject 1 outof 100: ");
scanf("%f",&sub1);
printf("Enter marks subject 2 outof 100: ");
scanf("%f",&sub2);
printf("Enter marks subject 3 outof 100: ");
scanf("%f",&sub3);
total = sub1 + sub2 + sub3;
average = total/3;
printf("The total marks is %f and average is %f\n",total,average);
if (sub1<35||sub2<35||sub3<35){
    printf("Fail\n");
    return 0;
}
if (average>=70)
    printf("Your result is distinction\n");
else if(average>=60)
    printf("Your result is first class\n");
else if(average>=50)
    printf("Your result is second class\n");
else if(average>=35)
    printf("Your result is third class\n");
return 0;
}
