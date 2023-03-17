#include<stdio.h>
int main()
{
	int n,temp=0,rem=0,fact=1,sum=0;
	printf("Enter A number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		fact=1;
		while(rem>0)
		{
			fact=fact*(rem);
			rem=rem-1;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
		printf("%d is a Strong Number",temp);
	else
		printf("%d is not a Strong Number",temp);
		return 0;
}
