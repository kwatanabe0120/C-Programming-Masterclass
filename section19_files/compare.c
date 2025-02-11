#include<stdio.h>

int isSameFile(char *file1, char *file2)
{
	int c1, c2;

	FILE *f1 = fopen(file1, "r");
	if (f1 == NULL)
	{
		printf("Error for f1\n");
		return -1;
	}
	FILE *f2 = fopen(file2, "r");
	if (f2 == NULL)
	{
		printf("Error for f2\n");
		fclose(f1);
		return -1;
	}

	c1 = fgetc(f1);
	c2 = fgetc(f2);

	while ((c1 != EOF) && (c2!= EOF) && (c1 == c2))
	{
		c1 = fgetc(f1);
		c2 = fgetc(f2);
	}

	fclose(f1);
	fclose(f2);

	if (c1 == c2)
		return 1;
	else
		return 0;
}

int main()
{
	char file1[] = "test1.txt";
	char file2[] = "test2.txt";

	int result  = isSameFile(file1,file2);
	if (result == 1)
	{
		printf("Files are the same\n");
	}
	else
	{
		printf("Files are different\n");
	}

	return 0;
}