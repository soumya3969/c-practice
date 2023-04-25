#include<stdio.h>
int main()
{
    float gsal,Basic,da,hra,pf;
    printf("Enter the Basic Salary:");
    scanf("%f",&Basic);
    pf=(12*Basic)/100;
    printf("Your Gross Salary is %.2f\n",pf);
    da=(10*Basic)/100;
    printf("Your Gross Salary is %.2f\n",da);
    hra=(15*Basic)/100;
    printf("Your Gross Salary is %.2f\n",hra);
    gsal=(Basic+da+hra);
    printf("Your Gross Salary is %.2f\n",gsal);
    return 0;
}