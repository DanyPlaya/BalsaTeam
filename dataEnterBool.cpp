#include "Liber.h"

void dataEnterBool(bool* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i])
			cout <<"Not zero collum: " << i << endl;
	}

}