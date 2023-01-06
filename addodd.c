#include<stdio.h>
int main()
{
	int i,n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
			s=s+i;
			printf("%d ",i);
			}
		}
	printf("\n The Sum of odd numbers from 1 to %d is= %d",n,s);
	return 0;
}
