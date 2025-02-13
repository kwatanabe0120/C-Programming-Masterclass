#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;


void addPoint(char *filename, Point p)
{
	FILE *fp = fopen(filename, "ab");
	if (fp == NULL) {
		perror("Error opening file");
		return;
	}
	fwrite(&p, sizeof(Point), 1, fp);
	fclose(fp);
}

int main()
{


	return 0;
}