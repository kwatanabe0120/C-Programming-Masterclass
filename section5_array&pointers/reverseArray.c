#include<stdio.h>


void swap(char *ptr1, char *ptr2)
{
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
void reverseArray(char *arr, int size)
{
	for (int i =0; i < size / 2; i++)
	{
		swap(&arr[i], &arr[size-1-i]);
	}

}

void reverseArrayRecursive(char *arr, int size)
{
	if (size >1)
	{
		swap(&arr[0], &arr[size-1]);
		reverseArrayRecursive(arr + 1, size - 2);
	}

}

void printArray(char *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");

}


int main()
{
	char arr[] = {'a', 'b', 'c', 'd'};
	// reverseArray(arr, 4);
	printArray(arr, 4);
	
	reverseArrayRecursive(arr,4);
	printArray(arr, 4);


	return 0;
}