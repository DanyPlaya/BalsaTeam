#include "Liber.h"
#include "Prototypes.h"

void s2logic(int** Matrix, int rows, int columns)
{
	int k;
	char y;

	cout << "In this seminar there are 2 programs: "
		<< "\n1 -Find the number of matrix columns that do not contain any zero element "
		<< "\n2 - Arrange the rows of the given matrix in accordance with the growth of characteristics";

	while (true)
	{
		cout << "Choose what do you want to start." << endl
			<< "Write \n1 Find the number of matrix columns that do not contain any zero element, "
			<< "\n2 Arrange the rows of the given matrix in accordance with the growth of characteristics"
			<< "\n Type 0 for exit from programm or for going back to main menu." << endl;
		cin >> k;

		if (k < 1 || k > 2)
		{
			cout << "Error, enter type number in range from 1 to 3 to pick task from seminar4 "
				<< "\nor 0 to exit from seminar3." << endl;
			cin >> k;
		}

		switch (k)
		{
		case 1:
			ZeroCollum(Matrix, rows, columns);
			break;
		case 2:
			displayArray(Matrix,rows,columns);
			MatrixSortcharacter(Matrix,rows,columns);
			break;
		default:

			break;
		}

		cout << "Enter - 'y' to continue in two-dimentional modul "
			<< "or Enter any other character to go to the main menu -> ";
		cin >> y;

		if (y != 'y')
			MainMenu();
	}
}