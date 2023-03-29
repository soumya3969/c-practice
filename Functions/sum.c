#include<stdio.h>
int main()
{
	int a=10,b=20,result;
	
		result= sum(a,b);
		printf("Result= %d\n",result);
		return 0;
}


int sum(int x,int y)
{
	int ans = x + y;
	return ans;
}
