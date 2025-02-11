#include<stdio.h>
#include<stdlib.h>

void withoutSpace(char *input, char *output)
{
	FILE *inputFp = fopen(input, "r");
	FILE *outputFp = fopen(output, "w");

	if (inputFp == NULL || outputFp == NULL)
	{
		printf("Could not open the file\n");
		exit(1);
	}
	
	char target;

	while ((target = fgetc(inputFp)) != EOF)
	{
		if (target != ' ')
			fputc(target, outputFp);
	}

	fclose(inputFp);
	fclose(outputFp);
}

int main()
{
	char inputFile[] = "inputFile.txt";
	char outputFile[] = "outputFile.txt";

	withoutSpace(inputFile, outputFile);
	
	return 0;;
}