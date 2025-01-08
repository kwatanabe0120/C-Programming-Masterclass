#include<stdio.h>
#include<stdlib.h>

int **create2Darray()
{
	int **arr = NULL;

	printf("Making 5*5 matrics....\n");
	arr = (int **)malloc(5*sizeof(int *));
	if (!arr) return NULL;
	for (int i =0; i < 5; i++)
	{
		arr[i] = (int*)calloc(sizeof(int), 5);
	}
	return arr;
}

void print2DArray(int **arr)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}

void swapRows(void **matrix, int row1, int row2) {
	void *temp = matrix[row1];
	matrix[row1] = matrix[row2];
	matrix[row2] = temp;
}

void swapColumns(int **matrix, int col1, int col2, int rows) {
    for (int i = 0; i < rows; i++)
	{
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

// arr[0][0] arr[1][0] arr[2][0]

// arr[0][2] arr[1][2] arr[2][2]



int main()
{
	// create 2d array
	int **matric = create2Darray();

	// print 2d array
	printf("\nBefore putting data\n");
	print2DArray(matric);

	// Enter data for first and second rows;
	for (int i =0; i < 5; i++)
	{
		matric[0][i] = i;
	}
	for (int i =0; i < 5; i++)
	{
		matric[1][i] = 99;
	}

	// print 2d array
	printf("\nAfter putting data\n");
	print2DArray(matric);

	// pass 2 rows to swap
	swapRows((void **)matric,0,1);

	// print 2d array
	printf("\nAfter Swapping rows\n");
	print2DArray(matric);

	// pass 2 columns to swap
	swapColumns(matric,0,2,5);
	printf("\nAfter Swapping columns\n");
	print2DArray(matric);

	return 0;
}
