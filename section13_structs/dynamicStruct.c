#include<stdio.h>
#include<stdlib.h>

typedef struct point
{
	int x, y;
} Point;

int main()
{
	int pointNumber;
	Point *ptr = NULL;

	printf("Please enter the number of point you have: ");
	scanf("%d", &pointNumber);

	ptr = (Point *)malloc(sizeof(Point)*pointNumber);
	if (!ptr) return 1;

	for (int i = 0; i < pointNumber; i++)
	{
		printf("Please enter the number for #%d x value: ", i+1);
		scanf("%d", &ptr[i].x);
		printf("Please enter the number for #%d y value: ", i+1);
		scanf("%d", &ptr[i].y);
	}
	for (int i = 0; i < pointNumber; i++)
	{
		printf("\n#%d (%d, %d)\n", i+1, ptr[i].x, ptr[i].y);
	}
	return 0;

}