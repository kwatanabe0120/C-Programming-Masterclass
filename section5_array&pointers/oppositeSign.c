#include<stdio.h>

int isOppositeSign(int *arr, int size)
{
	if (size <= 1)
		return 1;
	if((arr[0] > 0 && arr[1] > 0) || (arr[0] < 0 && arr[1] < 0))
	{
		return 0;
	}
	return isOppositeSign(arr+1, size-1);
}


int main()
{
	int arr1[] = {-1,2,-4};
	int arr2[] = {-1,2,4,5,-3};

	printf("The result is %d\n", isOppositeSign(arr2, 5));


	return 0;
}