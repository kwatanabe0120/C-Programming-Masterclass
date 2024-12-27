#include<stdio.h>

// Example1 [1,2,5,7,10] really sorted R-1 P-1
// Example2 [1,2,2,7,10] sorted R-1 P-0
// Example3 [1,2,5,3,10] Not sorted R-0 P-0

// int checkIsSortedRecursive(int *arr , int size, int *isReallySorted)
// {
// 	int result;
// 	if (size == 1)
// 	{
// 		*isReallySorted = 1;
// 		return 1;
// 	}
// 	result = checkIsSortedRecursive(arr, size-1, isReallySorted);

// 	if (result != 0 && arr[size-1] == arr[size-2])
// 	{
// 		*isReallySorted =0;
// 	}
// 	if (result != 0 && arr[size-1] < arr[size-2])
// 	{
// 		*isReallySorted = 0;
// 		return 0;
// 	}
// 	return result;
	
// }

int checkIsSortedRecursive(int *arr, int size, int *isReallySorted)
{
	int result;

	if (size == 1)
	{
		*isReallySorted = 1;
		return 1;
	}

	result = checkIsSortedRecursive(arr, size-1, isReallySorted);

	if (result != 0 && arr[size-1] < arr[size-2])
	{
		*isReallySorted = 0;
		return 0;
	}
	if (result != 0 && arr[size-1] == arr[size-2])
	{
		*isReallySorted = 0;
	}
	return result;
}

int main()
{
	int arr[] = {1,2,2,7,10};
	int isReallySorted, result;

	result = checkIsSortedRecursive(arr, 5, &isReallySorted);
	printf("The result is %d\nisReallySorted is %d\n", result, isReallySorted);

	return 0;
}