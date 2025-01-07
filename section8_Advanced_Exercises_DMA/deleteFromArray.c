#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void *deleteFromArray(void *arr, unsigned arrSize, unsigned index, unsigned deleteSize)
{
	void *resultArr = NULL;
	resultArr = malloc(arrSize-deleteSize);
	if (!resultArr) return NULL;
	memcpy(resultArr, arr, index);
	memcpy(resultArr+index, arr+index+deleteSize, arrSize-index-deleteSize);
	return resultArr;
}



int main()
{
	int intArray[] = {1,2,3,4,5};
	char charArray[] = {'a','b','c','d','e'};
	double doubleArray[] = {1.34,2.14,3.45,4.4,5.4362};
	int index = 2;
	int *resultArr = NULL;
	char *charResultArr = NULL;
	double *doubleResultArr = NULL;
	resultArr = (int *)deleteFromArray(intArray, 5*sizeof(int),index*sizeof(int), sizeof(int));
	charResultArr = (char *)deleteFromArray(charArray, 5*sizeof(char),index*sizeof(char), sizeof(char));
	doubleResultArr = (double *)deleteFromArray(doubleArray, 5*sizeof(double),index*sizeof(double), sizeof(double));
	

	for (int i = 0; i < 4; i++)
	{
		// printf("%c ", charResultArr[i]);
		// printf("%d ", resultArr[i]);
		printf("%.2f ", doubleResultArr[i]);
	}

	return 0;
}