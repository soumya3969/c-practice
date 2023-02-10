// understanding pointers in c
#include<stdio.h>
int main()
{
    float a=10;
    float *ptr;

    ptr =&a;
    printf("%d\n",ptr);
    printf("%.2f\n",*ptr);
    printf("%d\n",&a);
    printf("%.2f\n",a);
    return 0;
}
