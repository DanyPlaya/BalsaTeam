#include "Liber.h"
void CoordinatesPositiveElement(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			cout << "CoordinatePositiveElement = " << i << endl;
		}
	}
}