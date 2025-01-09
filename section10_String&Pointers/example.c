#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strConcat(char *string);

int main()
{
	char string[] = "Hello";
	printf("%s\n", strConcat(string));
	free(strConcat(string));
	return 0;
}

char *strConcat(char *string)
{
	// Hello -> HelloHello
	char *newStr = NULL;
	int i;
	int length = strlen(string);
	newStr = (char *)malloc(2*length*sizeof(char)+1);

	for (i =0; i < length; i++)
	{
		newStr[i] = string[i];
		newStr[i+length] = string[i];
	}
	newStr[i+length] = '\0';
	return newStr;
}