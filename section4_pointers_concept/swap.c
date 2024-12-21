#include<stdio.h>


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int num1 = 10, num2 = 20;
	swap(&num1, &num2);
	printf("The num1: %d\n", num1);
	printf("The num2: %d\n", num2);

	return 0;
}