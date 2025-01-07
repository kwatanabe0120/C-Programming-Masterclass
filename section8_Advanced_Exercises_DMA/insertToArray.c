#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void *insert2(void *arr, unsigned arrSize, unsigned indexByte, void* source, unsigned sourceSize)
{
	void *resultArr = NULL;
	resultArr = malloc(arrSize+sourceSize);
	if (!arr) return NULL;
	memcpy(resultArr,arr, indexByte);
	memcpy(resultArr+indexByte,source,sourceSize);
	memcpy(resultArr+indexByte+sourceSize,arr+indexByte,arrSize-indexByte);
	return resultArr;

}


// void *insert(void *arr, unsigned size, unsigned idx, void *source, unsigned sourceSize)
// {
// 	void *newArr = malloc(size + sourceSize);
// 	if (!newArr) return NULL;
// 	memcpy(newArr, arr, idx);
// 	memcpy(newArr+idx, source, sourceSize);
// 	memcpy(newArr+idx+sourceSize, arr+idx, size - idx);
// 	return newArr;
// }
int main(){
	int arr[] = {1,2,3,4};
	char charArr[] = {'a','d','t','t'};
	double doubleArr[] = {1.3,2.6,3.23,4.6};
	char source = '9';

	char *result = (char *)insert2(charArr, sizeof(char)*4, sizeof(char)*2, &source,sizeof(char));
	
	for (int i = 0; i < 5; i++)
		printf("%c ", result[i]);
	
	free(result);

	return 0;
}