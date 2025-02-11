#include<stdio.h>
#include<stdlib.h>

void sortOddAndEven(char *source)
{
	FILE *even = fopen("even.txt", "w");
	FILE *odd = fopen("odd.txt", "w");
	FILE *sourceFile = fopen(source, "r");
	
	int target;

	if (even == NULL || odd == NULL || sourceFile == NULL)
	{
		printf("Error occurred when opening file\n");
		exit(1);
	}

	while ((fscanf(sourceFile,"%d", &target)) != EOF)
	{
		if (target % 2 == 0)
			fprintf(even,"%d ", target);
		else
			fprintf(odd,"%d ", target);
	}
	fclose(even);
    fclose(odd);
    fclose(sourceFile);
}


int main()
{
	char source[] = "source.txt";
	sortOddAndEven(source);
	return 0;
}