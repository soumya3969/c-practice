#include<stdio.h>
int main()
{
	int y;
	printf("Enter A Year: ");
	scanf("%d",&y);
	
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
	{
		printf("It's a Leap Year");
	}
	else
	{
		printf("it's not a Leap Year");
	}
	return 0;
}
