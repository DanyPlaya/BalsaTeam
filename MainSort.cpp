#include "Liber.h"
#include "Prototypes.h"

void MainSort(int* arr, int size)
{
	cout << "Your entered an array" << endl;
	displayArray(arr, size);
	cout << endl;

	int* Array_sorted = new int[size];

	cout << "Sorted Array" << endl;
	Array_sorted = SortArray(arr, size);
	displayArray(Array_sorted, size);

	delete[] Array_sorted;
	Array_sorted = NULL;
}