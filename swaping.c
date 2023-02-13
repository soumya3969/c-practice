#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("Numbers Before swapping:\n a = %d\n b = %d\n ",a,b);
//	lets swap the numbers
	a= a+b;
	b= a-b;
	a= a-b;
	printf("Numbers Before swapping:\n a = %d\n b = %d\n ",a,b);
	return 0;
}
