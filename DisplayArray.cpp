#include "Liber.h"

void displayArray(int* Array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Array[i] << setw(4);
	}
	cout << endl;
}