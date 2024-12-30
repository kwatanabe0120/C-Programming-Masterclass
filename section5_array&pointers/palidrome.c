#include <stdio.h>

int isPalidrome(int *arr,int size)
{
	if (size <= 1)
	{
		return 1;
	}
	if(arr[0] != arr[size-1])
	{
		return 0;
	}
	return isPalidrome(arr+1, size-2);	
}

int main()
{
	int arr1[] = {1,2,1};
	int arr2[] = {1,2,3,4,2};
	int arr3[] = {9,8,7,7,8,9};
	int arr4[] = {1,2,2,2,2,1};


	printf("The result is %d\n", isPalidrome(arr4,6));


	return 0;
}