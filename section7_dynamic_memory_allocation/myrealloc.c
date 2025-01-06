#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void *myrealloc(void *srsblock, unsigned oldsize, unsigned newsize)
{
	int i;
	int smallSize;
	char *result;

	if (oldsize < newsize)
		smallSize = oldsize;
	else
		smallSize = newsize;
	
	result = (char *)malloc(newsize);

	if (!result) return NULL;
	for (i = 0; i < smallSize; i++)
		result[i] = ((char*)srsblock)[i];
	free(srsblock);
	return result;
}

void *myrealloc2(void *srsblock, unsigned oldsize, unsigned newsize)
{
	int smallSize;
	char *result;

	if (oldsize < newsize)
		smallSize = oldsize;
	else
		smallSize = newsize;
	
	result = (char *)malloc(newsize);
	if (!result) return NULL;
	memcpy(result, srsblock, smallSize);
	free(srsblock);
	return result;
}

int main()
{
	int *numbers = (int *)malloc(sizeof(int)*3);
	int *newNumbers = NULL;

	if (!numbers)
	{
		return 1;
	}
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;

	// newNumbers = (int *)myrealloc(numbers, 3*sizeof(int), 4*sizeof(int));
	newNumbers = (int *)myrealloc2(numbers, 3*sizeof(int), 4*sizeof(int));


	newNumbers[3] = 999;

	for (int i =0; i < 4; i++)
		printf("%d ", newNumbers[i]);
	
	printf("\n");
	return 0;
}

