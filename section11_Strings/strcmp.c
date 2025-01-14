#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1, char *str2)
{
	int i = 0;
	while(str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	if(str1[i] == '\0' && str2[i] == '\0')
		return 0;
	return str1[i] - str2[i];
}

int main()
{
	char str1[] = "test43u5892375893475892478059";
	char str2[] = "test";


	printf("The result is %d\n", strcmp(str1,str2));
	printf("The result is %d\n", my_strcmp(str1,str2));

	return 0;
}