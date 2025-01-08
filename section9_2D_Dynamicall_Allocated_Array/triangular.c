#include<stdio.h>
#include<stdlib.h>

int **lowerTriangular(int rows);
int **upperTriangular(int rows);
void printLowerTriangular(int **arr,int rows);
void printUpperTriangular(int **arr,int rows);


int main()
{
	int **matrix = NULL;
	int rows;
	printf("Enter the number of row of triangular: ");
	scanf("%d", &rows);

	matrix = lowerTriangular(rows);
	printLowerTriangular(matrix,rows);
	printf("\n\n");
	matrix = upperTriangular(rows);
	printUpperTriangular(matrix,rows);
	return 0;
}

int **lowerTriangular(int rows)
{
	int **result = NULL;
	int i, j;

	result = (int **)malloc(rows*sizeof(int *));

	for (i = 0; i < rows; i++)
	{
		result[i] = (int *)calloc((i+1), sizeof(int));
	}
	// print
	// for (i = 0; i < rows; i++)
	// {
	// 	for (j = 0; j < i+1 ;j++)
	// 	{
	// 		printf("%d ", result[i][j]);
	// 	}
	// 	printf("\n");
	// }
	return result;
}


int **upperTriangular(int rows)
{
	int **result = NULL;
	int i, j;

	result = (int **)malloc(rows*sizeof(int *));

	for (i = 0; i < rows; i++)
	{
		result[i] = (int *)calloc(rows-i, sizeof(int));
	}
	// print
	// for (i = 0; i < rows; i++)
	// {
	// 	for (j = 0; j < rows-i ;j++)
	// 	{
	// 		printf("%d ", result[i][j]);
	// 	}
	// 	printf("\n");
	// }
	return result;
}

void printLowerTriangular(int **arr, int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows ;j++)
		{
			if(i < j)
				printf("0 ");
			else
				printf("%d ", arr[i][j]);

		}
		printf("\n");
	}


}

void printUpperTriangular(int **arr, int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < rows ;j++)
		{
			if(i > j)
				printf("0 ");
			else
				printf("%d ", arr[i][j]);

		}
		printf("\n");
	}


}