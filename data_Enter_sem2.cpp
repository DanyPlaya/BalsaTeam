#include "Liber.h"

void dataEnter(int** Matrix, int rows, int columns)
{
	cout << "Enter a data in matrix: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			cout << "\n\telement [ " << i << " ] " << " [ " << j << " ] ------>:";
			cin >> Matrix[i][j];
		}
	}
}