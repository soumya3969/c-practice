#include<stdio.h>
int main()
{
	int n=5,ans,i;
	printf("Multiplication Table of 5 \n");
	
	for(i=1;i<=10;i++)
	{
		ans= n*i;
		printf("%d X %d = %d \n",n,i,ans);
	}
	return 0;
}
