#include<stdio.h>

int main()
{
	int result;
	result = remove("test.txt");
	if (result == 0)
		printf("Successfully, removed the file\n");
	else
		printf("Error!\n");
		
	return 0;
}