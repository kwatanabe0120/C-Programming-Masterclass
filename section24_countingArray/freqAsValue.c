#include<stdio.h>
#include<stdlib.h>

int freqAsValue(int *arr,int size, int k)
{
	int *countArr;
	int i;

	countArr = (int *)calloc((k+1), sizeof(int));
	if (!countArr) return -1;

	for (i = 0; i < size; i++)
		countArr[arr[i]]++;
	
	for (i = 0; i <= k; i++)
	{
		if (i != countArr[i])
		{
			free(countArr);
			return 0;
		}
	}
	free(countArr);
	return 1;
}


int main()
{
	int arr[] = {3,2,3,1,3,3};

	printf("The result is %d\n", freqAsValue(arr,6,3));


	return 0;
}