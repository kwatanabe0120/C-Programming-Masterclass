#include <stdio.h>

#define SIZE 4

int sumArray(int *ptr)
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum +=ptr[i];
	}
	return sum;
}

// double averageArray(int sum)
// {
// 	double average = sum / SIZE;
// 	return average;
// }

double averageArray(int *ptr)
{
	int sum = sumArray(ptr);
	return (double)sum / SIZE;
}
int main()
{
	int array[SIZE] = {1, 2, 1, 1};
	double average = averageArray(array);
	printf("The average of array is %.3f\n", average);

	return 0;
}