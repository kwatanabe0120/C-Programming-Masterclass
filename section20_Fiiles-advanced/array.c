#include<stdio.h>


typedef struct point
{
	int x;
	int y;
} Point;

int main()
{
	FILE *fp = NULL;
	Point pointArr[3] = {{2,3},{3,5},{6,7}};
	fp = fopen("myFile.bin", "wb");

	if (fp == NULL) return 1;
	// for(int i =0; i < 3; i++)
	// {
	// 	fwrite(&pointArr[i], sizeof(Point),1, fp);
	// }

	int writtenElements = fwrite(pointArr, sizeof(Point),3,fp);
	printf("written elements: %d\n", writtenElements);


	return 0;
}