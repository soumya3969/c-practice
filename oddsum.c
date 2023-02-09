#include<stdio.h>
//print only odd sum numbers .
int main()
{
	int i,n,sum=0;
	printf("Enter A number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		sum=sum+i;
	}
		printf("%d\n",sum);
	return 0;
}
