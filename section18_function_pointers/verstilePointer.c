#include<stdio.h>

void printInt(void *arr)
{
	printf("%d ", *(int *)arr);
}

void printFloat(void *arr)
{
	printf("%.2f ", *(float *)arr);
}

void perfermOperation(void *arr, int arrLength, int eleSize,void(*operation)(void*))
{
	for (int i =0; i < arrLength; i++)
	{
		operation((char *)arr+i*eleSize);
	}
}

int main()
{
	float test = 5.3;
	int intArr[] = {1,2,3,4,5};
	float floatArr[] = {1.1,2.2,3.3};

	perfermOperation(intArr,5,sizeof(int),printInt);
	perfermOperation(floatArr,3,sizeof(float),printFloat);

	return 0;
}