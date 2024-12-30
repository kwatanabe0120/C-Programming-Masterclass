#include<stdio.h>

// This code is not working becuase once create array function finished, the memory is freed and cannot access to the memory of array

#define SIZE 5

int *createArray();
void printArr(int *arr, int size);


int main()
{
	int *arr;
	arr = createArray();
	printArr(arr, SIZE);

	return 0;
}

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
	int arr[SIZE];
	printf("Enter %d contents for an array\n", SIZE);
	for (i = 0; i > SIZE; i++)
	{
		printf("Enter %d elemetns to your array: \n");
		scanf("%d", &arr[i]);
	}
	return &arr[0];

}

