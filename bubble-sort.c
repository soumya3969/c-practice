#include <stdio.h>
int main()
{
	int size, i, j, swap;
	printf("Enter the number of elements: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter %d elements: ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}