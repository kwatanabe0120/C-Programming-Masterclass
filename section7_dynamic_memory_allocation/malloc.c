#include<stdio.h>
#include<stdlib.h>

// This code is not working becuase once create array function finished, the memory is freed and cannot access to the memory of array

#define SIZE 5

void printArr(int *arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int *createArray()
{
	int i;
	// int arr[SIZE];
	int *myArr;

	myArr = (int *)malloc(sizeof(int)*SIZE);

	if (!myArr)
	{
		printf("Failed to allocate memory\n");
		exit(1);
	}

	printf("Enter %d contents for an array\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &myArr[i]);
	}
	return myArr;

}
int main()
{
	int *arr;
	arr = createArray();
	printArr(arr, SIZE);

	return 0;
}

