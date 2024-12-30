#include<stdio.h>


float averageArray(int *arr, int size)
{
	float ave;
	if (size == 1)
	{
		return arr[0];
	}
	ave = averageArray(arr+1, size-1);
	return (ave*(size-1)+arr[0])/size;
}



int main()
{
	int arr[] = {1,4,3};
	printf("The average is %f", averageArray(arr, 3));

	return 0;
}