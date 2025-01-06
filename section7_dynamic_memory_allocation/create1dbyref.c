#include <stdio.h>
#include <stdlib.h>

void create1darray(int **arr, int size)
{
	int i;

	*arr = (int *)malloc(size*sizeof(int));
	if (*arr != NULL)
	{
		for (i = 0; i < size; i++)
			(*arr)[i] = i;
	}
}

void printArray(int *ptr, int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

int main()
{
	int *ptr = NULL;
	int size =5;

	create1darray(&ptr, size);
	printArray(ptr, size);

	free(ptr);

	return 0;
}