#include<string.h>
#include<stdlib.h>
#include<stdio.h>

char *my_strcpy(char *des, char *sour)
{
	int count = strlen(sour);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		des[i] = sour[i];
	}
	des[i] = '\0';
	return des;
}

int main()
{
	char des[20];
	char source[] = "Hello";
	char des2[20];
	char source2[] = "Hello";
	
	printf("%s\n", strcpy(des,source));
	printf("%s\n", my_strcpy(des2,source2));
	return 0;
}