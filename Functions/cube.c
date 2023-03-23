#include<stdio.h>
double cube(double num)
{
	return(num*num*num);
}
int main()
{
	int n;
	double c;
	printf("enter a number to find its cube: ");
	scanf("%d",&n);
	c=cube(n);
	printf("Cube of %d is %.2f",n,c);
	return 0;
}
