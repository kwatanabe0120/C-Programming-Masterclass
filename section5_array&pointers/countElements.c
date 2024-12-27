#include<stdio.h>

// void countElements(int *arr, int size)
// {
// 	int countArr[10] = {0};

// 	for (int i =0; i < size; i++)
// 	{
// 		countArr[arr[i]]++;
// 	}

// 	for (int i =0; i < 10; i++)
// 	{
// 		if (countArr[i] != 0)
// 		{
// 			printf("Value %d apperars %d times\n", i, countArr[i]);
// 		}
// 	}
// }

void printValuesFrequency(int *arr, int size)
{
	// 5,5,6,7,7
	int i, j;
	int leftFlag;
	int countValue;

	for (i = 0; i < size; i++)
	{
		countValue = 1;
		leftFlag = 0;

		// left part
		for (j = 0; j < i; j++)
		{
			if (arr[i] ==arr[j])
			{
				leftFlag = 1;
				break;
			}
		}
		if (leftFlag == 1)
			continue;
		
		// right part
		for (j = i+1; j < size; j++)
		{
			if (arr[j]==arr[i])
				countValue++;
		}
		printf("Value %d appears %d times\n", arr[i], countValue);
	}
}

int main()
{
	int arr[] = {5,6,7,6,5};
	// countElements(arr, 5);
	printValuesFrequency(arr, 5);

	return 0;
}