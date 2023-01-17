#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+i;
		
	}
	printf("The Sum of 1 to %d is= %d",n,s);
	return 0;
}
