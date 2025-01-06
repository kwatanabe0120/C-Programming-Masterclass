#include<stdio.h>
#include<stdlib.h>


void printArray(int *arr, int size)
{
	int i;

	printf("Printing grade you entered...\n");
	for (i = 0; i < size; i++)
	{
		printf("grade[%d] = %d\n", i, arr[i]);
	}
	printf("Done!\n");
}

void inputArray(int *arr, int size)
{
	int i;
	printf("Please enter your grades\n");

	for(i=0; i< size; i++)
	{
		printf("The grade #%d: ", i);	
		scanf("%d", &arr[i]);
	}
	printf("Saved your grades, Thanks!\n\n");

	
}

int main()
{
	int *arr;
	int arrSize;

	printf("Enter the number of grade you have: ");
	scanf("%d", &arrSize);

	arr = (int *)malloc(sizeof(int)*arrSize);
	inputArray(arr, arrSize);
	printArray(arr, arrSize);
	return 0;
}