#include<stdio.h>


void printBinary(int n)
{
	if(n / 2 == 0)
	{
		printf("%d", n%2);
	}
	else
	{
		printBinary(n/2);
		printf("%d", n%2);
	}
}

int main()
{
	printBinary(6);

	return 0;
}