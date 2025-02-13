#include<stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

void deletePoint(char *filename, int index)
{
	int pointCount;
	Point p;

	FILE *fp = fopen(filename, "rb");
	if (fp == NULL) return;
	
	FILE *tempfp = fopen("temp.bin", "wb");
	if (tempfp == NULL) 
	{
		fclose(fp);
		return;
	}

	fseek(fp, 0,SEEK_END);
	pointCount = ftell(fp)/ sizeof(Point);

	if (index >= pointCount || index < 0)
	{
		printf("Invalid index\n");
		fclose(fp);
		fclose(tempfp);
		remove("temp.bin");
		return;
	}

	fseek(fp, 0,SEEK_SET);

	for(int i = 0; i < pointCount; i++)
	{
		fread(&p,sizeof(Point), 1,fp);
		if(i == index)
			continue;
		fwrite(&p, sizeof(Point),1,tempfp);	
	}

	fclose(fp);
	fclose(tempfp);

	remove(filename);
	rename("temp.bin",filename);
}


int main()
{
	char filename[] = "sample.bin";
	int index;
	printf("enter index: ");
	scanf("%d", &index);
	deletePoint(filename,index);
	return 0;
}