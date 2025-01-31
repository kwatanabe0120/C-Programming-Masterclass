#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void printArray(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void assendingSortArray(int *arr, int size)
{
	for (int i = 0; i< size; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void descendingSortArray(int *arr, int size)
{
	for (int i = 0; i< size; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int *createArray(int *num)
{
	int numOfElements;
	int *result;
	printf("Please enter the number of Elements: ");
	scanf("%d", &numOfElements);

	result = (int *)malloc(sizeof(int)* numOfElements);
	if (!result) exit(1);

	for (int i =0; i < numOfElements; i++)
	{
		printf("Enter integer for #%d: ", i+1);
		scanf("%d", &result[i]);
	}
	*num = numOfElements;
	return result;
}


int main()
{
	// int arr[] = {1, 8, 2, 4, 5};
	int numOfElements;
	int action;
	void (*sortFuncs[2])(int*, int) = {assendingSortArray,descendingSortArray};
	int *arr = createArray(&numOfElements);

	printf("\nPick action\n1:accenting\n2:descending\n");
	scanf("%d", &action);
	action -= 1;

	(sortFuncs[action])(arr,numOfElements);

	printArray(arr, numOfElements);
	return 0;


}
