#include<stdio.h>
//print numbers in reverse.
int main()
{
	int i,n;
	printf("Enter A number: ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}
