#include<stdio.h>
#include<stdlib.h>


int **create2DArray(int rows, int columns)
{
	int **arr = NULL;
	arr = (int **)calloc(rows, sizeof(int *));
	if (!arr) return NULL;

	for (int i =0; i < rows; i++)
	{
		arr[i] = (int *)calloc(columns, sizeof(int));
	}
	return arr;
}

void print2DArray(int **arr, int rows, int columns)
{
	int i, j;

	for (i = 0; i< rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%10d", arr[i][j]);
		}
		printf("\n");
	}
}

void free2DArray(int **a, int rows)
{
	int i;
	// 1. free all rows 
	for (i = 0; i < rows; i++)
	{
		free(a[i]);
	}
	// 2. free the array of pointers
	free(a);
	printf("\nDone freeing memory\n");
}

int main()
{
	int rows, columns;
	int **matrix = NULL;

	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &columns);

	// createArray and enter date by calloc
	matrix = create2DArray(rows, columns);

	// printArray
	print2DArray(matrix, rows, columns);

	// freeMatrix
	free2DArray(matrix, rows);

	return 0;
}