#include<stdio.h>


typedef struct point
{
	int x;
	int y;
} Point;

int main()
{
	Point p = {3,5};
	FILE *fp = fopen("myfile.bin", "wb");

	if (fp != NULL)
	{
		printf("Opening file...\n");
		fwrite(&p, sizeof(Point), 1, fp);
		fclose(fp);
	}

	return 0;
}