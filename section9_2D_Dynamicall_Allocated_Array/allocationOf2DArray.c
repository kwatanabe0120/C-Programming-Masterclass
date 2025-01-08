#include<stdlib.h>
#include<stdio.h>



int **allocate2DArray(int numberOfRows,int numberOfColumns)
{
	int **matrix;
	int i;

	matrix = (int **)calloc(numberOfRows, sizeof(int *));
	if (!matrix) return NULL;

	for (i = 0; i < numberOfRows; i++)
	{
		matrix[i] = (int *)calloc(numberOfColumns, sizeof(int));
		if (!matrix[i])
		{
			// TODO free all matrix;
			return NULL;
		}
	}
	return matrix;
}


int main()
{
	int columns, rows;
	int **myMatrix;

	printf("Please enter the number of rows: ");
	scanf("%d", &rows);

	printf("Please enter the number of colums: ");
	scanf("%d", &columns);

	myMatrix = allocate2DArray(rows,columns);

	return 0;
}