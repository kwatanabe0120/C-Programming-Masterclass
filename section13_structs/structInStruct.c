#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

typedef struct circle
{
	Point centerPoint;
	double radius;
} Circle;


int main()
{
	Point p1 = {1,2};
	Circle c1 = {p1,3.3};

	printf("The center point is (%d, %d)\n", c1.centerPoint.x,c1.centerPoint.y);
	return 0;
}