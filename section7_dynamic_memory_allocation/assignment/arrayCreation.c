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


int main()
{
	int *arr = createArray(5);
	free(arr);
	return 0;
}