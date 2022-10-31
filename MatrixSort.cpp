#include "Liber.h"
#include "Prototypes.h"

int** MatrixSortcharacter(int** Matrix, int row, int col)
{
	int q = 0;
	int* sum = new int[row];
	int** SortMatrix = NULL;
	SortMatrix = new int* [row];

	for (int i = 0; i < row; i++)
		SortMatrix[i] = new int[col];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			SortMatrix[i][j] = Matrix[i][j];
	
	
	int temp;
	
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (Matrix[i][j] % 2 == 0 && Matrix[i][j] > 0)
			{
				sum[i] = Matrix[i][j];
			}
			
			
		}

	}
	
	for (int  i = 0; i < row; i++)
	{
		if (sum[i] == 0 || sum[i] < 0)
			q++;

	}

	if (q == row)
	{
		cout << "Matrix not have a positive even" << endl;
		return 0;
	}
	
	for (int k = 0; k < row - 1; k++)
	{
		int min = k;
		for (int i = k+ 1; i < row; i++)
		{
			if (sum[i] < sum[min])
			{
				min = i;
			}
		}

		for (int j = 0; j < col; j++)
		{
			temp = SortMatrix[k][j];
			SortMatrix[k][j] = SortMatrix[min][j];
			SortMatrix[min][j] = temp;
		}
		temp = sum[k];
		sum[k] = sum[min];
		sum[min] = temp;
	}

	displayArray(SortMatrix, row, col);

	return SortMatrix;
	//delete[]sum;
}