#include<stdio.h>

int isNeighbors(int *ptr, int size)
{
	for(int i = 1; i < size-1; i++)
	{
		if (ptr[i] == ptr[i-1]+ptr[i+1])
			return 1;		
	}
	return 0;
}

int main()
{
	int array[5]= {1,4,7,3,2};
	int result = isNeighbors(array, 5);
	if (result == 1)
		printf("The array is good neghbros\n");
	else
		printf("The array is NOT good neghbros\n");

	return 0;
}