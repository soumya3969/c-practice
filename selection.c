#include "stdio.h"
int main()
{
    int array[100], n, i, j, position, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d Integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < (n - 1); i++)
    {
        position = i;
        for (j = i+1; j < n; j++)
        {
            if (array[position] > array[j])
                position = j;
        }
        if (position != i)
        {
            t = array[i];
            array[i] = array[position];
            array[position] = t;
        }
    }
    printf("Sorted list in ascending  order\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}