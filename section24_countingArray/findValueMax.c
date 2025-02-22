#include<stdio.h>
#include<stdlib.h>

int findSpecificValueMaxSum(int *arr, int size)
{
	int i;
	int *count;
	int maxValue,maxSum;

	count = (int *)calloc(size+1, sizeof(int));
	if (!count) return -1;

	for (i = 0; i < size; i++)
		count[arr[i]]++;

	maxSum = count[1]*1;
	maxValue = 1;

	for (i = 2; i <= size; i++)
	{
		if (count[i]*i>maxSum)
		{
			maxSum = count[i]*i;
			maxValue = i;
		}
	}
	free(count);
	return maxValue;
}

int main()
{
	int arr[] = {2,4,4,4,4,2,7};
	printf("%d\n", findSpecificValueMaxSum(arr,7));

	return 0;
}