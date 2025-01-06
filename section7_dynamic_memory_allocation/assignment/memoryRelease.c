#include<stdio.h>
#include<stdlib.h>

// Memory Release: Write a function named freeMemory that 
// takes a pointer to dynamically allocated memory and frees the memory using free.


void freeMemory(int *arr)
{
	free(arr);
}

int main()
{
	int *arr = NULL;
	freeMemory(arr);
	return 0;

}