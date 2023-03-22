#include"stdio.h"
int add(int x,int y)
{
	int c = x+y;
	return c;
}
int sub(int x,int y)
{
	int c =x-y;
	return c;
}
int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	int s= add(a,b);
	printf("The addition of %d and %d is %d\n",a,b,s);
	s=sub(a,b);
	printf("The substraction of %d and %d is %d\n",a,b,s);
	return 0;
}
