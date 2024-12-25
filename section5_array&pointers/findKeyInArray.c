#include<stdio.h>

#define SIZE 4

int findKeyinArray(int *array, int key)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] == key)
			return 1;
	}
	return 0;
}

int main()
{
	int array[SIZE] = {2,4,5,6};
	int result = findKeyinArray(array, 100);

	if (result == 1)
		printf("Yes, we found the key in the array\n");
	else
		printf("No, we cound not find the key in the array\n");
	return 0;
}