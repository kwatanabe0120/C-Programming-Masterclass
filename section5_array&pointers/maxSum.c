#include<stdio.h>

int maxSumInArray(int *arr, int size)
{
	int currentsum, currentMaxSum;
	if(size == 2)
	{
		return arr[0]+arr[1];
	}
	currentMaxSum = maxSumInArray(arr+1, size-1);
	currentsum = arr[0]+arr[1];

	if (currentMaxSum > currentsum)
		return currentMaxSum;
	else
		return currentsum;
}

int main()
{
	int arr[] = {10,2,3,4,5};
	printf("The result is %d", maxSumInArray(arr,5));

	return 0;
}