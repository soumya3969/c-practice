#include <stdio.h>

int main(void) 
{
    int n,i;
    int digits[10] = {0};
    printf("Enter The Number: ");
    scanf("%d",&n);
    
    while(n)
    {
        ++digits[n%10];
        n/=10;
    }
    
    for(i=0; i<10; ++i)
    {
        if (digits[i])
        {
            printf("Digit %d appears %d times\n", i, digits[i]);
        }
    }
    
    return 0;
}
