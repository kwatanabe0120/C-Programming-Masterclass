#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *grades = NULL;
	int *temp;
	int totalGrade;
	int i;

	printf("Please enter the size of Array: ");
	scanf("%d",&totalGrade);

	grades = (int *)malloc(totalGrade*sizeof(int));
	if(grades == NULL)
	{
		printf("memory allocation failed\n");
		return 1;
	}	
	for(i=0; i< totalGrade; i++)
	{
		printf("Insert date for #%d elements: ", i+1);
		scanf("%d", &grades[i]);
	}
	printf("\nPrinting your array\n");
	for(i=0; i< totalGrade; i++)
	{
		printf("%d ",grades[i]);
	}
	printf("\nIncreasing your array size + 2\n");
	totalGrade = totalGrade +2;
	temp = (int *)realloc(grades, totalGrade*sizeof(int));

	if (temp != NULL)
	{
		grades = temp;
	}
	else
	{
		printf("memory allocation failed\n");
		return 1;
	}
	printf("\nInsert Date for increased memory #1: ");
	scanf("%d", &grades[totalGrade-2]);
	printf("\nInsert Date for increased memory #2: ");
	scanf("%d", &grades[totalGrade-1]);
	printf("\nPrinting your array\n");
	for(i=0; i< totalGrade; i++)
	{
		printf("%d ",grades[i]);
	}

	printf("\nDecreasing your array size -5\n");
	totalGrade = totalGrade -5;
	temp = (int *)realloc(grades, totalGrade*sizeof(int));

	if (temp != NULL)
	{
		grades = temp;
	}
	else
	{
		printf("memory allocation failed\n");
		return 1;
	}
	printf("\nPrinting your array\n");
	for(i=0; i< totalGrade; i++)
	{
		printf("%d ",grades[i]);
	}
	free(grades);

	return 0;
}