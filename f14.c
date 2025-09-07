#include<stdio.h>
void main()
{
float bytes,KB,MB,GB;
printf("Enter bytes: ");
scanf("%f",&bytes);
KB = bytes /1000;
MB = bytes /1000000;
GB = bytes / 1000000000;
printf("The value of entered bytes in KB is %f\n",KB);
printf("The value of entered bytes in MB is %f\n",MB);
printf("The value of entered bytes in GB is %f\n",GB);

}
