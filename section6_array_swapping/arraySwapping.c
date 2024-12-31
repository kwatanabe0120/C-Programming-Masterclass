#include<stdio.h>
#include<stdlib.h>

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

void swapArrBetter(void **arr1, void **arr2)
{
	void *temp = *arr1;
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
}

int *generateArray(int size)
{
	int i;
	int *arr;
	arr = (int*)malloc(size*sizeof(int));
	for(i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	return arr;
}


int main()
{
	// int arr1[SIZE] = {1,2,3,4,5};
	// int arr2[SIZE] = {6,7,8,9,10};
	int *arr1, *arr2;
	int sizeArr1, sizeArr2;

	printf("Enter size for Array1: ");
	scanf("%d", &sizeArr1);
	printf("Enter size for Array2: ");
	scanf("%d", &sizeArr2);

	arr1 = generateArray(sizeArr1);
	arr2 = generateArray(sizeArr2);

	printf("Before swap\n");
	prinfArr(arr1);
	prinfArr(arr2);
	printf("\nAfter swap\n");
	// swapArr(arr1,arr2);
	swapArrBetter(&arr1, &arr2);
	prinfArr(arr1);
	prinfArr(arr2);

	return 0;
}