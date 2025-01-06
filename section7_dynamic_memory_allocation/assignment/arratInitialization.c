#include<stdio.h>
#include<stdlib.h>

void initArray(int *arr, int size)
{
	int i;
	int *temp;

	temp = (int *)malloc(size*sizeof(int));
	if (temp != NULL)
		arr = temp;

	for (i = 0; i < size; i++)
		arr[i] = i;

	// for (i = 0; i < size; i++)
	// 	printf("%d ", arr[i]);
}


int main()
{
	int *arr;
	initArray(arr, 5);
	free(arr);

	return 0;
}

