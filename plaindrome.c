#include <stdio.h>
int main()
{
    int n, n1, rem, rev = 0;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&n);
    n1=n;
    while (n>0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    if(n1==rev)
    printf("%d IS PLAINDROME\n",n1);
    else
    printf("%d IS NOT PLAINDROME\n",n1 );
    return 0;
}