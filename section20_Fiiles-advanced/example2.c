#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;


int main()
{
	Point a,b;

	FILE *fp = NULL;

	printf("Enter x1: ");
	scanf("%d", &a.x);

	printf("Enter y1: ");
	scanf("%d", &a.y);

	printf("Enter x2: ");
	scanf("%d", &b.x);

	printf("Enter y2: ");
	scanf("%d", &b.y);

	fp = fopen("myFile.bin", "wb");
	if (fp != NULL)
	{
		fwrite(&a, sizeof(Point), 1,fp);
		fwrite(&b, sizeof(Point), 1,fp);
		fclose(fp);
	}


	return 0;
}