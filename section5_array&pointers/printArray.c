#include<stdio.h>

void printFromLeft(int *arr, int size)
{
	if (size > 0)
	{
		printf("%d ",arr[0]);
		printFromLeft(arr+1, size-1);
	}
}

void printFromRight(int *arr, int size)
{
	if (size > 0)
	{
		printFromRight(arr+1, size-1);
		printf("%d ", arr[0]);
	}
}


int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	printFromLeft(arr, 9);
	printf("\n");
	printFromRight(arr,9);
	return 0;
}