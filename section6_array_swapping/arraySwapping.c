#include<stdio.h>

#define SIZE 5

void swap(int *value1, int *value2)
{
	int temp = *value1;
	*value1 = *value2;
	*value2 = temp;
}

void prinfArr(int *arr)
{
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void swapArr(int *arr1, int *arr2)
{
	for (int i =0; i < SIZE; i ++)
		swap(&arr1[i], &arr2[i]);
}


int main()
{
	int arr1[SIZE] = {1,2,3,4,5};
	int arr2[SIZE] = {6,7,8,9,10};

	printf("Before swap\n");
	prinfArr(arr1);
	prinfArr(arr2);
	printf("\nAfter swap\n");
	swapArr(arr1,arr2);
	prinfArr(arr1);
	prinfArr(arr2);




	return 0;
}