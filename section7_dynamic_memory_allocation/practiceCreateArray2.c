// The size of array is unknow in advance
// user enter -1 to stop the function 
// reading input from user and it should return the array and pass its size


#include <stdio.h>
#include <stdlib.h>

int *createArray(int *arrSize)
{
	int input, lastIndex = 0, size = 2;
	int *arr, *temp;

	printf("Enter number: ");
	scanf("%d",&input);

	if (input == -1)
	{
		*arrSize = 0;
		return NULL;
	}
	else //prepare 2 size of array for now
	{
		temp = (int *)malloc(size * sizeof(int));
		if (temp == NULL)
			return NULL;
		else
			arr = temp;
	}

	while (input != -1)
	{
		// lastindex = 2, size =2, if you try to enter the date for arry, it couses error.
		if (lastIndex == size)
		{
			size = size*2;
			temp = (int *)realloc(arr, size*sizeof(int));
			if (temp == NULL)
				return NULL;
			else
				arr = temp;
		}
		arr[lastIndex] = input;
		lastIndex++;
		printf("Enter number: ");
		scanf("%d",&input);
	}
	temp = (int *)realloc(arr, lastIndex*sizeof(int));
	*arrSize = lastIndex;
	return arr;
}


int main()
{
	int *ptr, arraySize;

	ptr = createArray(&arraySize);

	if (ptr != NULL)
	{
		printf("The location of arr: %p\n", ptr);
		printf("The SIZE of arr: %d\n", arraySize);

	}
	return 0;
}