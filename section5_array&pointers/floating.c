#include<stdio.h>

int check(float *arr, int size)
{
	if(size == 1)
		return 1;

	if((int)arr[0] > (int)arr[1] || arr[0]-(int)arr[0] < arr[1]-(int)arr[1])
		return 0;
	
	return check(arr+1, size-1);
}

int isSpecialFloatingSorted(float *arr,int size)
{
	if(size ==1)
		return 1;
	if (((int)arr[0] <= (int)arr[1]) && (arr[0]-(int)arr[0] >= arr[1]-(int)arr[1]))
		return isSpecialFloatingSorted(arr+1, size-1);
	else
		return 0;
}

int main()
{
	float arr[]= {1.4, 3.25,4.2}; // 1
	float arr2[]= {1.4, 3.25,4.5}; // 0
	printf("The result is %d", check(arr2, 3));

	return 0;
}