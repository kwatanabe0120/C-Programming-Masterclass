#include<stdio.h>

int main()
{
	int num = 42;
	void *ptr = &num;


	printf("%d\n", *(int *)ptr);
	
	return 0;
}