#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void copyArr(int *arr, int arrSize, int **copyArr)
{
	int i;
	int elementCount = arrSize / arr[0];
	*copyArr = (int *)malloc(arrSize);
	if (!*copyArr) exit(1);
	for (i = 0; i < elementCount; i++)
	{
		(*copyArr)[i] = arr[i];
	}
}

int main()
{
	int original[] = {1,2,3,4,5};
	int *copy = NULL;

	copyArr(original, sizeof(original),&copy);

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", copy[i]);
	}
	printf("\n");
	free(copyArr);

	return 0;
}