#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swapInts(int *num1, int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swapIntsNoThird1(int *num1, int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}

void swapIntsNoThird2(int *num1, int *num2)
{
	*num1 = *num1 * *num2;
	*num2 = *num1 / *num2;
	*num1 = *num1 / *num2;
}

void genericSwap(void *a, void *b, int size)
{
	void *temp = malloc(size);

	memcpy(temp, a, size);
	memcpy(a, b, size);
	memcpy(b, temp, size);
	free(temp);
}

int main()
{
	int num1 = 10, num2 = 20;
	printf("----test swapInts----\n");
	printf("before swapInts: num1 = %d, num2 = %d\n", num1, num2);
	swapInts(&num1, &num2);
	printf("after swapInts: num1 = %d, num2 = %d\n", num1, num2);

	printf("----test swapIntsNoThird1----\n");
	printf("before swapIntsNoThird1: num1 = %d, num2 = %d\n", num1, num2);
	swapIntsNoThird1(&num1, &num2);
	printf("after swapIntsNoThird1: num1 = %d, num2 = %d\n", num1, num2);

	printf("----test swapIntsNoThird2----\n");
	printf("before swapIntsNoThird2: num1 = %d, num2 = %d\n", num1, num2);
	swapIntsNoThird2(&num1, &num2);
	printf("after swapIntsNoThird2: num1 = %d, num2 = %d\n", num1, num2);

	double num3 = 3.4, num4 = 56.3;
	printf("----test genericSwap----\n");
	printf("before genericSwap: num3 = %f, num4 = %f\n", num3, num4);
	genericSwap(&num3, &num4, sizeof(double));
	printf("after genericSwap: num3 = %f, num4 = %f\n", num3, num4);

	return 0;
}