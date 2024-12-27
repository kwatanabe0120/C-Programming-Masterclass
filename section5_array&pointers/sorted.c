#include<stdio.h>

int isSorted(int *ptr, int *isReallySorted)
{
	int i;
	*isReallySorted = 1;
	for (i = 1; i < 5; i++)
	{
		if(ptr[i] <= ptr[i-1])
			*isReallySorted = 0;
		if(ptr[i] < ptr[i-1])
			return 0;

	}
	return 1;
}


int main()
{
	int result, isReallySorted;
	int reallySortedArray[5]= {1,2,3,5,7};
	int sortedArray[5]= {1,2,2,5,7};
	int notsortedArray[5]= {1,2,5,3,7};

	// result = isSorted(reallySortedArray, &isReallySorted);
	// result = isSorted(sortedArray, &isReallySorted);
	result = isSorted(notsortedArray, &isReallySorted);

	if (result == 1 && isReallySorted == 1)
		printf("Really sorted\n");
	else if (result == 1 && isReallySorted == 0)
		printf("Sorted\n");
	else 
		printf("Not Sorted\n");

	return 0;
}