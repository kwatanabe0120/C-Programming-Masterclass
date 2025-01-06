#include<stdio.h>
#include<stdlib.h>

// Array Doubling: Write a function named doubleArraySize that takes a pointer to a pointer to an integer array 
// and its current size as arguments. The function should use realloc to double the size of the array. 
// If memory reallocation is successful, initialize the new elements to zero and return the new size. 
// If the memory reallocation fails, return -1 to indicate failure.

int doubleArraySize(int **arr, int currentSize)
{
	int* arr = NULL;
	int i;

	arr = (int *)realloc(*arr, currentSize*2*sizeof(int));

	if (arr != NULL)
	{
		for (i = 0; i > currentSize*2; i++)
			arr[i] = 0;
		return currentSize*2;
	}
	else
		return -1;
}


int main()
{
	return 0;
}