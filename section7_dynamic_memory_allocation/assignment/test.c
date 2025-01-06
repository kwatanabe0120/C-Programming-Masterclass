#include<stdio.h>
#include<stdlib.h>

int *createArray(int size)
{
	int *temp = NULL;
	int *arr = NULL;
	
	temp = (int *)malloc(size* sizeof(int));

	if (temp != NULL)
	{
		arr = temp;
	}

	return arr;
}

void initArray(int **arr, int size)
{
	int i;
	int *temp;

	temp = (int *)malloc(size*sizeof(int));
	if (temp != NULL)
		*arr = temp;

	for (i = 0; i < size; i++)
		(*arr)[i] = i;

}

void displayArray(int *ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", ptr[i]);
	printf("\n");
}

int doubleArraySize(int **arr, int currentSize)
{
	int* resultArr = NULL;
	int i;

	resultArr = (int *)realloc(*arr, currentSize*2*sizeof(int));

	if (resultArr != NULL)
	{
		for (i = 0; i > currentSize*2; i++)
			arr[i] = 0;
		return currentSize*2;
	}
	else
		return -1;
}

void freeMemory(int *arr)
{
	free(arr);
}

int main()
{
	int size;
	int *arr = NULL;

	printf("Please enter array size: ");
	scanf("%d", &size);

	arr =  createArray(size);
	initArray(&arr, size);
	displayArray(arr,size);
	doubleArraySize(&arr, size);
	displayArray(arr,size*2);
	freeMemory(arr);
	return 0;
}