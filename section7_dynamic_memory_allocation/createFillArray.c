#include<stdio.h>
#include<stdlib.h>

int  *createAndFillArray(int* arraySize)
{
	int num, lastindex = 0, size =2;
	int *arr = NULL;
	int *temp = NULL;

	printf("Enter num: ");
	scanf("%d", &num);

	if (num == -1) 
	{
		*arraySize = 0;
		return NULL;
	}
	else
	{
		temp = (int *)malloc(size *sizeof(int));
		if (!temp) return NULL;
		arr = temp;
	}
	while (num != -1)
	{
		if(lastindex == size)
		{
			size = size*2;
			temp = (int *)realloc(arr, size*sizeof(int));
			if (!temp) return NULL;
			arr = temp;
		}
		arr[lastindex] = num;
		lastindex++;
		printf("Enter num: ");
		scanf("%d", &num);
	}
	arr = (int *)realloc(arr, lastindex*sizeof(int));
	*arraySize = lastindex;
	return arr;
}

int main()
{
	int size;
	createAndFillArray(&size);
	printf("The array size is %d\n", size);
	return 0;
}