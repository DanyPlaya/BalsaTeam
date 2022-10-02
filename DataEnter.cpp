#include "Liber.h"
void dataEnter(int* arr, int size) {
	cout << "Fill the array: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "\telement[" << i << "] --->:";
		cin >> arr[i];
	}

	
}