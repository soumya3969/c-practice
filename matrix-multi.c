#include <stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2;
    printf("Enter the column and row of matrix 1: ");
    scanf("%d %d",&c1,&r1);
    printf("Enter the column and row of matrix 2: ");
    scanf("%d %d",&c2,&r2);
    int m1[r1][c1],m2[r2][c2],result[r1][c2];

    printf("Enter the Values of Matrix 1 :");
    for ( i = 0; i < r1; i++)
    {
        for ( i = 0; i < c1; i++)
        {
            scanf("%d %d",&m1[i][j]);
        }
        
    }
     printf("Enter the Values of Matrix 2 :");
    for ( i = 0; i < r2; i++)
    {
        for ( i = 0; i < c2; i++)
        {
            scanf("%d %d",&m2[i][j]);
        }
        
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < r2; k++) {
                result[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
     printf("Result matrix : \n");
    for ( i = 0; i < r1; i++)
    {
        for ( i = 0; i < c2; i++)
        {
            printf("%d",result[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}