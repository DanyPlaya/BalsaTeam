#include "Liber.h"
#include "Prototypes.h"

void SumCountCoordPosElement(int* arr,int size)
{
	bool* CoordArray = CoordinatesPositiveElement(arr, size);
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (!CoordArray[i])
			count++;
	}

	if (count == size)
	{
		cout << "No positive elements" << endl;
	}
	if (count == size - 1)
	{
		cout << "array has 1 positive element" << endl;
	}
	else
	{
		cout << "sum of positive elements :" << SumPositiveElement(arr, size) << endl;
	}
	
	cout <<"number of positive elements:" << CountPositiveElement(arr, size) << endl;
	for (int i = 0; i < size; i++)
	{
		if (CoordArray[i]&&count!=size)
			cout << "Positive Element Index :" << i << endl;
		
	}
	
}