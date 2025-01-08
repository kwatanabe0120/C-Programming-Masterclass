#include<stdio.h>
#include<stdlib.h>

// !! This one, we dont have control for number of rows;
// int main()
// {
// 	int i;
// 	int *arr[5];
// 	int numOfColums;

// 	for (i = 0; i < 5; i++)
// 	{
// 		printf("Please enter the number of colums: ");
// 		scanf("%d", &numOfColums);
// 		arr[i] = (int *)calloc(numOfColums, sizeof(int));
// 	}
// 	return 0;
// }


int main()
{
	int **a;
	int rows, columns;
	int i;

	printf("Please enter number of Rows: ");
	scanf("%d", &rows);

	a = (int **)calloc(rows, sizeof(int *));

	for (i = 0; i < rows; i++)
	{
		printf("Please enter the number of colums for #%d rows: ", i+1);
		scanf("%d", &columns);

		a[i] = (int *)calloc(sizeof(int), columns);
	}
	return 0;
}
