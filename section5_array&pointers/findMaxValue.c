#include<stdio.h>

#define SIZE 4

int findMaxInArray(int *ptr)
{
	int max = ptr[0];
	for(int i = 1; i < SIZE; i++)
	{
		if (max < ptr[i])
			max = ptr[i];
	}
	return max;
}

int main()
{
	int array[SIZE] = {34, 46, 2345, 10};
	int result = findMaxInArray(array);
	printf("The max value in the array is %d\n", result);

	return 0;
}