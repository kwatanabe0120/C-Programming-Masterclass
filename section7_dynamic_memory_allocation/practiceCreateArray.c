#include<stdio.h>
#include<stdlib.h>

// The size of array is unknow in advance
// user enter -1 to stop the function 
// reading input from user and it should return the array and pass its size

int *createArray(int *sizeofArray)
{
	int lastIndex = 0, size = 2, input;
	int *arr = NULL;
	int *temp = NULL;

	printf("Enter num: ");
	scanf("%d", &input);

	// when user enter -1 for the first elements
	if (input == -1)
	{
		*sizeofArray = 0;
		return NULL;
	}
	else
	{
		temp = (int *)malloc(size*sizeof(int));
		if (!temp) return NULL;
		arr = temp;
	}
	while (input != -1)
	{
		// rearllocate memory
		if (lastIndex == size)
		{
			size = size*2;
			temp= (int *)realloc(arr, sizeof(int)*size);
			if (!temp) return NULL;
			arr = temp;
		}
		arr[lastIndex] = input;
		lastIndex++;
		printf("Enter num: ");
		scanf("%d",&input);
	}
	arr = (int *)realloc(arr, lastIndex*sizeof(int));
	*sizeofArray = lastIndex;
	return arr;
}

int main()
{
	int size;
	createArray(&size);
	printf("The size of array is %d\n", size);
	return 0;
}