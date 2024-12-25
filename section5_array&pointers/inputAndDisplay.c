#include <stdio.h>

#define SIZE 4

void inputArray(int *ptr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter the valude for #%d: ", i+1);
		scanf("%d", &ptr[i]);
	}
}

void displayArray(int* ptr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", ptr[i]);
	}
	printf("\n");
}

int main()
{
	int array[SIZE];
	inputArray(array);
	displayArray(array);
	return 0;
}