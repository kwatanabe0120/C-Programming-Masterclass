#include<stdio.h>
#include<stdlib.h>


void displayArray(int *ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", ptr[i]);
}


int main()
{
	int arr[] = {1,2,3,4,5};
	displayArray(arr, 5);
	return 0;
}