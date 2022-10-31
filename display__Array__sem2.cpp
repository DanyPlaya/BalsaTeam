#include "Liber.h"

void displayArray(int** Matrix, int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << setw(3) << Matrix[i][j] << " | ";
		}

		cout << endl;
	}

	cout << endl;
}