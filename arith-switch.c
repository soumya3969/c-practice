#include <stdio.h>

int main () {
    int choice,n1,n2,result;
    printf("Enter Two Integers:");
    scanf("%d %d",&n1,&n2);
    printf("Enter choice:\n");
    printf("1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Modulos\n" );
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        result = n1+n2;
        printf("%d + %d = %d",n1,n2,result);
        break;
    case 2:
        result = n1-n2;
        printf("%d - %d = %d",n1,n2,result);
        break;
    case 3:
        result = n1*n2;
        printf("%d * %d = %d",n1,n2,result);
        break;
    case 4:
        result = n1/n2;
        printf("%d / %d = %d",n1,n2,result);
        break;
    case 5:
        result = n1%n2;
        printf("%d %d = %d",n1,n2,result);
        break;
    default:
        printf("Invalid Choice ⚠!");
        break;
    }
    return 0;
}