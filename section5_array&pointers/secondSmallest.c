#include<stdio.h>

int printSecondSmallest(int *arr, int size)
{
	int i;
	int min1 = arr[0];
	int min2 = arr[0];

	for (i = 1; i< size; i++)
	{
		if (arr[i] < min1)
		{
			min2 = min1;
			min1 = arr[i];
		}
		else if (arr[i] < min2)
		{
			min2 = arr[i];
		}
	}
	return min2;
}

int main()
{
	int arr[] = {5,1,7,4,9};
	printf("The second smallest is %d", printSecondSmallest(arr, 5));
	return 0;
}