#include<stdio.h>


int main()
{
	int a = 5;
	int *ptr1 = &a;
	int **ptr2 = &ptr1;

	printf("%d\n", **ptr2);
	printf("%p\n", ptr2);
	printf("%p\n", ptr1);
	printf("%d\n", *ptr1);




	return 0;
}