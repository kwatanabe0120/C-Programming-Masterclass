#include<string.h>
#include<stdio.h>

size_t my_strlen(char *ptr)
{
	size_t count = 0;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	return count;
}

int main()
{
	char test[] = "Tech";
	printf("%lu\n", strlen(test));
	printf("%lu\n", my_strlen(test));
	return 0;
}