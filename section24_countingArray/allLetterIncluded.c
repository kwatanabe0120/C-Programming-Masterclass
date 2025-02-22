#include<stdio.h>
#include<stdlib.h>

int areAllLetterIncluded(char *arr1, char *arr2, int size1, int size2)
{
	int count[26] = {0};
	int i;

	for (i = 0; i < size1; i++)
		count[arr1[i] - 'a']++;
	
	for (i = 0; i < size2; i++)
		count[arr2[i] - 'a']--;
	
	for (i = 0; i < 26; i++)
	{
		if (count[i] > 0)
			return 0;
	}
	return 1;
}


int main()
{
	char sen1[] = {'d','h','g'};
	char sen2[] = {'g','o','d'};

	printf("%d\n", areAllLetterIncluded(sen1,sen2,3,3));
	return 0;
}