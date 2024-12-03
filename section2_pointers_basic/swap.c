#include<stdio.h>

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = a;
}

void swapbyPointers(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}

int main()
{
	int a =5, b =3;
	// swap(a,b);
	swapbyPointers(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);


	return 0;
}