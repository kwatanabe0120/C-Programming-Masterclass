#include<stdio.h>
#include<stdbool.h>

bool isAssending(int a, int b)
{
	return a < b;
}

bool isdescending(int a, int b)
{
	return a > b;
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *arr, int num, bool(*compare)(int,int))
{
	int i, j;

	for(i=0; i<num; i++)
	{
		for(j =0; j < num - i-1; j++)
		{
			if(!compare(arr[j], arr[j+1]))
				swap(&arr[j], &arr[j+1]);
		}
	}
}

void printArray(int *Array, int num)
{
	for (int i = 0; i < num; i++)
		printf("%d ", Array[i]);
	printf("\n");
}

int main()
{
	int arr[] = {3,1,7,9,10};
	printArray(arr, 5);
	sort(arr,5,isAssending);
	printArray(arr, 5);
	sort(arr,5,isdescending);
	printArray(arr, 5);

	return 0;
}