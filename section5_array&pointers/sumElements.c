#include<stdio.h>

int findElementsInArray(int *arr, int size,int target, int *index1, int *index2)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for(j = i+1; i <size; j++)
		{
			if (arr[i]+ arr[j] == target)
			{
				*index1 = i;
				*index2 = j;
				return 1;
			}
		}
	}
	*index1 = 0;
	*index2 = 0;
	return 0;
}

int main()
{
	int index1, index2;
	int arr[] = {1,3,4,7,9,10,12};
	int result = findElementsInArray(arr, 7,10,&index1, &index2);
	printf("The result is %d\nindex1 is %d\nindex2 is %d\n", result, index1,index2);
	return 0;
}