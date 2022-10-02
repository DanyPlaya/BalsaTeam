#include "Liber.h"
#include "Prototypes.h"

void MainLogic(int *arr,int size)
{
	char k = '\0';
	char y;

	cout << "In this seminar there are 3 programs: "
		"\n1 - sum of positive elements, \n2 - product of array elements located between the maximum modulo and minimum modulo elements," << endl;
	cout << "3 - Sort Array "<< endl;

	while (true)
	{
		cout << "Choose what do you want to start." << endl
			<< "Write \n1 to start sum of positive elements, \n2 to start product of array elements located between the maximum modulo and minimum modulo elements C,"
			<< " \n3 to start Sort Array, \n0 to exit" << endl;
		cin >> k;

		if (k < '0' || k > '3')
		{
			cout << "Error, enter type number in range from 1 to 3 to pick seminar "
				<< "\nor 0 to exit from program." << endl;
			cin >> k;
		}

		switch (k)
		{
		case '1':
			SumCountCoordPosElement(arr, size);
			break;
		case '2':
			MultiMaxMin(arr, size);
			break;
		case '3':
			MainSort(arr, size);
			break;
		default:
			break;
		}

		cout << "Enter - 'y' to continue in one-dimentional modul "
			<< "or Enter any other character to go to the main menu -> ";
		cin >> y;

		if (y != 'y')
			MainMenu();
	}
}