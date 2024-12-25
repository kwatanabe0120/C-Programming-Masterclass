#include<stdio.h>

#define SIZE 4

void minMax(int *ptr, int *maxValue, int *minValue)
{
 	*maxValue= ptr[0];
	*minValue = ptr[0];

	for (int i = 1 ; i< SIZE; i++)
	{
		if (ptr[i] > *maxValue)
			*maxValue = ptr[i];
		if (ptr[i] < *minValue)
			*minValue = ptr[i];
	}
}

int main()
{
	int min = 0, max = 0;
	int array[SIZE] = {1,565,85,43};
	minMax(array, &max, &min);
	printf("The max = %d, min = %d\n", max, min);

	return 0;
}