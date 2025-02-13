#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

void makeSampleFile(char *filename)
{
	FILE *fp = fopen(filename, "wb");
	if (fp == NULL) return;
	Point arr[5] = {{1,2}, {3,4}, {5,6}, {7,8}, {9,10}};
	fwrite(arr, sizeof(Point), 5, fp);
	fclose(fp);
}

int countPointinFile(char *filename)
{
	int count = 0;
	Point p;
	FILE *fp = fopen(filename, "rb");
	if (fp == NULL) return -1;
	
	while ((fread(&p,sizeof(Point),1,fp)) == 1)
	{
		count++;
	}
	fclose(fp);
	return count;
}


void makeReversePointinFile(char *filename,int pointCount)
{
	FILE *originalFp = fopen(filename, "rb");
	if (originalFp == NULL) {
		perror("Error opening original file");
		return;
	}
	
	FILE *tempFp = fopen("temp.bin", "wb");
	if (tempFp == NULL) {
		perror("Error opening temporary file");
		fclose(originalFp);
		return;
	}

	Point p;

	for (int i = pointCount-1; i >= 0; i--)
	{
		fseek(originalFp, i*sizeof(Point), SEEK_SET);
		fread(&p,sizeof(Point),1,originalFp);
		fwrite(&p,sizeof(Point),1,tempFp);
	}

	// for (int i = pointCount - 1; i >= 0; i--) {
	// 	fseek(originalFp, i * sizeof(Point), SEEK_SET);
	// 	fread(&p, sizeof(Point), 1, originalFp);
	// 	fwrite(&p, sizeof(Point), 1, tempFp);
	// }

	fclose(originalFp);
	fclose(tempFp);

	remove(filename);
	rename("temp.bin", filename);
}

int main()
{
	char filename[] = "sample.bin";
	makeSampleFile(filename);

	int pointCount = countPointinFile(filename);
	printf("Number of points in file: %d\n", pointCount);

	makeReversePointinFile(filename, pointCount);

	return 0;
}