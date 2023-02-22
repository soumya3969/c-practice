#include<stdio.h>
#include<limits.h>
void prb(int n)
{
	int i;
	for(i=sizeof(int)*CHAR_BIT-1;i>=0&&(n&(1<<i))==0;i--)
	for(;i>=0;i--)
	if((n&(1<<i))==0)
	printf("0");
	else
	printf("1");
}
int main()
{
	int n;
	printf("enter a decimal integers: ");
	scanf("%d",&n);
	prb(n);
	return 0;
	
}
