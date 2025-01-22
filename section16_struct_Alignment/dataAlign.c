#include<stdio.h>

typedef struct a
{
	short val1;
	int val2;
	char val3;
} A;

typedef struct b
{
	char val1;
	int val2;
	A value3;
} B;

int main()
{
	unsigned int totalByteA = sizeof(A);
	unsigned int totalByteB = sizeof(B);

	printf("Size of A: %d\n", totalByteA);
	printf("Size of B: %d\n", totalByteB);

	return 0;
}