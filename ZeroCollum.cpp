#include "Prototypes.h"

void ZeroCollum(int** Matrix, int row, int col)
{
	bool* indexNotNull = new bool[row];
	int count = 0,temp = 0;

	for (int i = 0; i < row;i++)
	{
		
		for (int j = 0; j < col; j++)
		{
			if (Matrix[j][i] != 0)
			{
				temp++;

			}

		}
		if (temp == row)
			indexNotNull[i] = true;
		else
			indexNotNull[i] = false;
		temp = 0;
		
	}

	return dataEnterBool(indexNotNull,row);
	for (int i = 0; i < row; i++)
		delete[] indexNotNull;
	
}