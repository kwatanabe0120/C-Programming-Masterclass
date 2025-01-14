#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *my_strcat(char *des, char *source)
{
	int i = 0;
	char *result = NULL;
	int desCount = strlen(des);
	int SourCount = strlen(source);

	result = (char *)malloc((desCount+SourCount+1)*sizeof(char));

	for (i = 0; i < desCount; i++)
	{
		result[i] = des[i];
	}
	for (i = 0; i < SourCount; i++)
	{
		result[i+desCount] = source[i];
	}
	result[desCount+SourCount] = '\0';
	return result;
}

int main()
{
	char source[] = "World";
	char des[20] = "Hello";
	char source2[] = "World";
	char des2[20] = "Hello";
	char* result = strcat(des,source);
	char* result2 = my_strcat(des2,source2);


	printf("%s\n", result);
	printf("%s\n", result2);

	return 0;
}
