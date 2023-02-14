#include<stdio.h>
//print only odd numbers .
int main()
{
	int i,n;
	printf("Enter A number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\n",i);
	}
	return 0;
}
