#include<stdio.h>
int max(int n1,int n2)
{
	return(n1>n2)?n1:n2;
}
int min(int n1,int n2)
{
	return(n1>n2)?n2:n1;
}
int main()
{
	int n1,n2,mx,mn;
	printf("enter 2 numbers: ");
	scanf("%d%d",&n1,&n2);
	mx=max(n1,n2);
	mn=min(n1,n2);
	printf("max is %d\n",mx);
	printf("min is %d\n",mn);
	return 0;
}
