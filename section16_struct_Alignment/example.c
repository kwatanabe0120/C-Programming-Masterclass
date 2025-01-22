#include<stdio.h>

typedef struct test
{
	char x;
	short y;
	int z;
} Test;


int main()
{
	int byte = sizeof(Test);
	printf("%d", byte);
	
	return 0;
}