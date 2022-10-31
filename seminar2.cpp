#include "Liber.h"
#include "Prototypes.h"

void seminar4()
{
	int rows = 0, columns = 0;
	int** Matrix = NULL;

	cout << "This is the modul for the two-dimentional array!\n";
	cout << "Enter a range of rows in matrix -> ";
	cin >> rows;
	cout << "\nEnter a range of columns in matrix -> ";
	cin >> columns;

	while (true)
	{
		if (rows <= 0 || rows > 50)
		{
			cout << "\n\tThis matrix dimension does not fit" << endl;
			cout << "\n\tEnter the number of rows of matrix ----->" << endl;
			cin >> rows;
		}
		else
			break;
	}

	while (true)
	{
		if (columns <= 0 || columns > 50)
		{
			cout << "\n\tThis matrix dimension does not fit" << endl;
			cout << "\n\tEnter the number of columns of matrix ----->" << endl;
			cin >> columns;
		}
		else
			break;
	}

	Matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
		Matrix[i] = new int[columns];

	dataEnter(Matrix, rows, columns);
	displayArray(Matrix, rows, columns);
	s2logic(Matrix, rows, columns);

	for (int i = 0; i < rows; i++)
		delete Matrix[i];
	delete[] Matrix;
}