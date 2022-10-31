#include "Liber.h"

bool* CoordinatesPositiveElement(int* arr, const int size)
{
	bool* PositiveCord = new bool[size];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			PositiveCord[i] = true;
		}
		else
		{
			PositiveCord[i] = false;
		}
	}
	return PositiveCord;
}