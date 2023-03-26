#include"stdio.h"
int cpal(int number)
{
  int temp, rem, rev=0;
  temp = number;

  while( number!=0 )
  {
     rem = number % 10;
     rev = rev*10 + rem;

     number /= 10;
  }
  if ( rev == temp ) return 0; 
  else return 1;
}
int main()
{
	int n,result;
	printf("Enter a Number: ");
	scanf("%d",&n);
	result=cpal(n);
	if(result==0){
		printf("%d Is a Pallindrome",n);
		
	}
	else{
		printf("%d Is not a Pallindrome",n);
	}
	return 0;
}

