#include<stdio.h>

int main()
{
	int result = rename("test.txt", "didwork.txt");

	if (result != 0)
		printf("Failed\n");
	else
		printf("Renamed!\n");
	return 0;
}