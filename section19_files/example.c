#include<stdio.h>

int main()
{
	FILE *file = fopen("log.txt", "w");

	if (file == NULL)
	{
		printf("Filed to open the file\n");
		return 1;
	}

	fprintf(file,"Dealing your request\n");
	fclose(file);

	if (remove("log.txt") != 0)
	{
		printf("Filed to remove the file\n");
	}
	else
	{
		printf("Log file is gone!!\n");
	}
	return 0;
}