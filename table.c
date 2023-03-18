#include<stdio.h>
int main()
{
	int i,n,t;
		printf("Enter A number: ");
		scanf("%d",&n);
		for(i=1;i<=10;i++)
		{
			t=n*i;
			printf("%d X %d = %d\n",n,i,t);
		}
		return 0;
}
