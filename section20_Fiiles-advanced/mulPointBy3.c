#include<stdio.h>


typedef struct point 
{
	int x;
	int y;
} Point;

int main()
{
	FILE *fp = fopen("sample.bin", "rb+");
	Point p, updatedP;
	int choise = 3;
	if (fp == NULL) return 1;

	fseek(fp, (choise - 1) * sizeof(Point), SEEK_SET);
	fread(&p,sizeof(Point),1,fp);

	p.x *=3;
	p.y *=3;


	fseek(fp, (choise - 1) * sizeof(Point), SEEK_SET);
	fwrite(&p,sizeof(Point),1,fp);

	fseek(fp, (choise - 1) * sizeof(Point), SEEK_SET);
	fread(&updatedP,sizeof(Point),1,fp);

	printf("The updated p (%d,%d)\n", updatedP.x, updatedP.y);

	fclose(fp);

	return 0;
}