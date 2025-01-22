#include<stdio.h>

typedef struct paddingExample
{
	double y;
	char x;
	int z;
}PaddingExample;



int main()
{
	int byte = sizeof(PaddingExample);
	printf("%d", byte);
	
	return 0;
}