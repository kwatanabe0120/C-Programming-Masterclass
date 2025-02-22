#include<stdio.h>
#include<stdlib.h>

int findLargestMissingValue(int *arr,int size)
{
	int *count;
	count = (int *)calloc(size+1,sizeof(int));
	if (!count) return -100;

	for(int i =0; i < size; i++)
	{
		count[arr[i]]++;
	}

	for(int i = size; i>= 0; i--)
	{
		if(count[i] == 0)
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
	int arr[] = {5,1,3,6,4,2,7};
	printf("%d\n", findLargestMissingValue(arr,7));
	return 0;
}