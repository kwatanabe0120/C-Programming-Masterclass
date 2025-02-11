#include<stdio.h>
#include<string.h>

int main()
{
	char fileName[30];
	char extention[15];
	char newFileName[45];
	int i, j;
	int dotIndex = -1;

	printf("Enter file Name to change thier extention: ");
	scanf("%s", fileName);
	printf("Enter extension you want: ");
	scanf("%s", extention);

	// find dodplace
	for (i = 0; i < strlen(fileName); i++)
	{
		if (fileName[i] == '.')
			dotIndex = i;
	}

	if (dotIndex == -1)
	{
		printf("Counld not find extention to change\n");
		return -1;
	}

	for (j = 0; j < dotIndex; j++)
	{
		newFileName[j] = fileName[j];
	}

	newFileName[j++] = '.';

	for (i=0; extention[i] != '\0'; i++,j++)
	{
		newFileName[j] = extention[i];
	}

	newFileName[j] = '\0';

	int result = rename(fileName, newFileName);
	if (result == 0) {
		printf("File renamed successfully to %s\n", newFileName);
	} else {
		perror("Error renaming file");
	}

	return 0;
	
}