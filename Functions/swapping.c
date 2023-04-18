#include<stdio.h>
void swap(int x,int y)
{
	x=x+y-x;
	y=x+y-x;
}
int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	printf("Before swapping value of a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("after swapping value of a=%d,b=%d\n",a,b);
	return 0;
}
