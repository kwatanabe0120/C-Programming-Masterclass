#include<stdio.h>
#include<string.h>

int main()
{
	char fileName[30];

	printf("Enter file name: ");
	fgets(fileName,sizeof(fileName),stdin);

	int len = strlen(fileName);
	if(len > 0 && fileName[len-1] == '\n')
	{
		fileName[--len] = '\0';
	}

	int result = remove(fileName);
	if (result != 0)
	{
		printf("Failed to remove file\n");
	}
	else
	{
		printf("Removed file!\n");		
	}
	return 0;
}