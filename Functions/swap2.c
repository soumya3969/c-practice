#include<stdio.h>
void swap(int *v1,int *v2)
{
	int temp=*v1;
	*v1=*v2;
	*v2= temp;
	
}
int main()
{
	int x=2,y=5;
	swap(&x,&y);
	printf("x= %d,y=%d\n",x,y);
	return 0;
}
