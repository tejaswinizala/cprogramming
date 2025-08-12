#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Ënter the value of a and b and c: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b && a>c)
        printf("a=%d is greater than b=%d and c=%d",a,b,c);
    else if(b>a && b>c)
        printf("b=%d is greater than a=%d and c=%d",b,a,c);
    else
        printf("c=%d is greater than a=%d and b=%d",c,a,b);

    if(a<b && a<c)
        printf("a=%d is lesser than b=%d and c=%d",a,b,c);
    else if(b<a && b<c)
        printf("b=%d is lesser than a=%d and c=%d",b,a,c);
    else
        printf("c=%d is lesser than a=%d and b=%d",c,a,b);


}
