#include<stdio.h>

// Recursively reverse an array


void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void reverse(int *arr, int size)
{
	if(size > 1)
	{
		swap(&arr[0],&arr[size-1]);
		reverse(arr+1, size-2);
	}
}

void printArray(int *arr, int size)
{
	for (int i =0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = {1,2,3,4};
	printArray(arr, 4);
	reverse(arr, 4);
	printArray(arr, 4);


	return 0;
}