#include<stdio.h>
#include<stdlib.h>


void printArray(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
}

void generateOddEvenArray(int *sourceArray, int size)
{
	int oddArraySize = 0, evenArraySize = 0;
	int *oddArr = NULL, *evenArr = NULL;
	int i, j =0, k=0;

	// check how long will be the odd and evenArray
	for (i = 0; i < size; i++)
	{
		if (sourceArray[i] % 2 == 0)
			evenArraySize++;
		else
			oddArraySize++;
	}

	// DMA
	oddArr = (int *)malloc(sizeof(int)* oddArraySize);
	evenArr = (int *)malloc(sizeof(int)* evenArraySize);

	if (oddArr == NULL || evenArr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}

	// putdata for 2 arrays
	for (i = 0; i < size; i++)
	{
		if (sourceArray[i] % 2 == 0)
		{
			evenArr[j] = sourceArray[i];
			j++;

		}
		else
		{
			oddArr[k] = sourceArray[i];
			k++;
		}
	}

	// print 2 arrays
	printArray(evenArr,evenArraySize);
	printArray(oddArr, oddArraySize);

	// free arrays
	free(evenArr);
	free(oddArr);
} 


int *generateOddEvenArray2(int *sourceArray, int size, int **oddArray, int *evenSize, int *oddSize)
{
	int oddArraySize = 0, evenArraySize = 0;
	int *oddArr = NULL, *evenArr = NULL;
	int i, j =0, k=0;

	// check how long will be the odd and evenArray
	for (i = 0; i < size; i++)
	{
		if (sourceArray[i] % 2 == 0)
			evenArraySize++;
		else
			oddArraySize++;
	}

	// DMA
	oddArr = (int *)malloc(sizeof(int)* oddArraySize);
	evenArr = (int *)malloc(sizeof(int)* evenArraySize);

	*oddSize = oddArraySize;
	*evenSize = evenArraySize;

	if (oddArr == NULL || evenArr == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}

	// putdata for 2 arrays
	for (i = 0; i < size; i++)
	{
		if (sourceArray[i] % 2 == 0)
		{
			evenArr[j] = sourceArray[i];
			j++;

		}
		else
		{
			oddArr[k] = sourceArray[i];
			k++;
		}
	}

	*oddArray = oddArr; // Set the oddArray pointer to the dynamically allocated memory
	return evenArr;
} 

int main()
{
	int arr[] = {12,5,7,8,3,10,4,9,15};
	int *oddArray = NULL;
	int *evenArray = NULL;
	int oddArraySize = 0, evenArraySize = 0;

	// generateOddEvenArray(arr, 8);
	evenArray = generateOddEvenArray2(arr, 9,&oddArray, &evenArraySize, &oddArraySize);
	printArray(evenArray,evenArraySize);
	printArray(oddArray,oddArraySize);

	return 0;
}