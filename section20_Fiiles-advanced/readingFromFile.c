#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

int main()
{
	FILE *fp = fopen("myfile.bin", "rb");
	Point target, check;
	int i= 0;

	printf("Enter the Point you are looking\nx: ");
	scanf("%d", &target.x);
	printf("y: ");
	scanf("%d", &target.y);

	if (fp == NULL) return 1;
	while (fread(&check, sizeof(Point), 1, fp) == 1)
	{
		if (check.x == target.x && check.y == target.y)
		{
			printf("Found your point in File!\n");
			printf("The number in file = %d\n", i);
			break;
		}
		i++;
	}
	fclose(fp);

	return 0;
}