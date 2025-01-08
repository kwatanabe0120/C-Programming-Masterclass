#include<stdio.h>
#include<stdlib.h>

// void allocate2DMatrixByRef(int ***arr, int rows)
// {
// 	int i, j;
// 	int **result = NULL;
// 	result = (int **)calloc(sizeof(int *), rows);
// 	if (!result) exit(1);

// 	for (i = 0; i < rows; i++)
// 	{
// 		result[i] = (int *)calloc(sizeof(int), rows);
// 	}
// 	*arr = result;
// }



void allocate2DArrayByRef2(int ***arr, int rows, int columns)
{
	int **matrix = (int **)calloc(rows, sizeof(int *));
	if (!matrix) exit(1);

	for (int i = 0; i < rows; i++)
	{
		matrix[i] = (int *)calloc(columns, sizeof(int));
	}
	*arr = matrix;

}


int main()
{
	int **matrix = NULL;
	int row = 5, columns = 3;
	allocate2DArrayByRef2(&matrix, row, columns);

	matrix[0][0] = 99;
	matrix[0][1] = 100;
	matrix[0][2] = 999;

	printf("%d ", matrix[0][0]);
	printf("%d ", matrix[0][1]);
	printf("%d ", matrix[0][2]);

	for (int i = 0; i < row; i++)
	{
		free(matrix[i]);
	}
	free(matrix);

	return 0;
}
