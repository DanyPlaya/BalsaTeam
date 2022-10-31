#include "Liber.h"
#include "Prototypes.h"

void seminar3() 
{
	int size = 0;
	const int maxRangeOfArray = 50;
	int* arr = NULL;

	cout << "This is the modul for the one-dimentional array!\n";
	cout << "Please, Enter the number of digits in the array -> ";
	cin >> size;

	while (true)
	{
		if (size <= 0 || size > maxRangeOfArray)
		{
			cout << "\nBuling impossible" << endl;
			cout << "\nEnter the size of the array --->";
			cin >> size;
		}
		else
			break;
	}

	arr = new int[size];
	cout << endl;

	dataEnter(arr, size);

	cout << endl << "Your original one-dimensional array is:" << endl;
	displayArray(arr, size);
	cout << endl;
	MainLogic(arr, size);

	delete[] arr;
}