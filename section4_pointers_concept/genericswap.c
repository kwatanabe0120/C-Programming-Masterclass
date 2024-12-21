#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void genericswap(void *a, void *b, int size)
{
	void *temp = malloc(size);

	memcpy(temp, a, size);
	memcpy(a, b, size);
	memcpy(b, temp, size);
	free(temp);
}


int main()
{
	int a = 10, b =20;
	double num1 = 3.4, num2 = 56.3;

	printf("Before swapping: a = %d, b = %d\n", a, b);
	printf("Before swapping: num1 = %f, num2 = %f\n", num1, num2);
	genericswap(&a, &b, sizeof(int));
	genericswap(&num1, &num2, sizeof(double));
	printf("After swapping: a = %d, b = %d\n", a, b);
	printf("After swapping: num1 = %f, num2 = %f\n", num1, num2);

	return 0;
}