#include<stdio.h>
#include<stdlib.h>

int findSominantValue(int *arr, int size)
{
	int i;
	int *count;
	// DMA Counting arr;
	count = (int *)calloc(size+1,sizeof(int));
	if (!count) return 100;

	// count frequesncy in count array
	for (i = 0; i < size; i++)
		count[arr[i]]++;
	
	// dominentValue = size / 2;
	int dominentFrequency = size / 2;

	for (i = 0;i <= size; i++)
	{
		if (count[i] > dominentFrequency)
		{
			free(count);
			return i;
		}
	}
	free(count);
	return -1;
}


int main()
{
	int arr1[] = {5,1,4,2,3};

	printf("Result is %d\n", findSominantValue(arr1,5));

	return 0;
}