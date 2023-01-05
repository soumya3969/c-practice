#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter 1st number");
    scanf("%d",&a);
    printf("enter 2nd number");
    scanf("%d",&b);
    t=b;
    b=a;
    a=t;
    printf("a=%d,b=%d",a,b);
    return 0;
}