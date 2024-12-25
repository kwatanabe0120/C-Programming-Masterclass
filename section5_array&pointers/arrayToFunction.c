#include<stdio.h>

// int sumArray(int array[], int size)
// {
// 	int sum = 0;
// 	for (int i = 0; i<size; i++)
// 	{
// 		sum += array[i]; 
// 	}
// 	return sum;
// }

int sumArray(int *ptr, int size)
{
	int sum = 0;
	for (int i = 0; i<size; i++)
	{
		sum += ptr[i]; 
	}
	return sum;
}

int main()
{
	int array[3] = {3,5,6};
	int result = sumArray(array,3);
	printf("The sum of array is %d\n", result);

	return 0;
}