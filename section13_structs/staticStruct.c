#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

int main()
{
	Point arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("Please enter the number for #%d x value: ", i+1);
		scanf("%d", &arr[i].x);
		printf("Please enter the number for #%d y value: ", i+1);
		scanf("%d", &arr[i].y);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("\n#%d (%d, %d)\n", i+1, arr[i].x, arr[i].y);
	}
	return 0;
}