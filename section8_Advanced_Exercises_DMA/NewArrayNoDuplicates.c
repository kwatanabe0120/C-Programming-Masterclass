#include<stdio.h>
#include<stdlib.h>

int *creatArrayNoDuplicates(int *arr, int size, int* arrSize)
{
	// {1,3,3,5,6,7,7,7,8,12,12};
	// return {1,3,5,6,7,8,12};

	int *noDuplicateArray = NULL;
	int i, j = 0;
	int count = 1;

	for (i = 0; i < size -1; i++)
	{
		if (arr[i] != arr[i+1])
			count++;
	}
	noDuplicateArray = (int *)malloc(count*sizeof(int));
	*arrSize = count;

	if (noDuplicateArray != NULL)
	{
		for (i = 0; i < size -1; i++)
		{
			if (arr[i] != arr[i+1])
			{
				noDuplicateArray[j] = arr[i];
				j++;
			}
		}
		noDuplicateArray[j] = arr[size-1];
		return noDuplicateArray;
	}
	else
	{
		return NULL;
	}
}

void printArray(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
}



int main()
{
	// int arr[] = {1,3,3,5,6,7,7,7,8,12,12};
	int arr[] = {1,1,1,1,1,1,1,1,1,1,1};

	int *newArr = NULL;
	int arrySize = 0;

	newArr = creatArrayNoDuplicates(arr, 11,&arrySize);
	printArray(newArr, arrySize);


	return 0;
}