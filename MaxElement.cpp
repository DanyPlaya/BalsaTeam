#include "Liber.h"

int MaxElement(int* arr, int size, int &indexMax)
{
	int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        
        if (abs(arr[i])>abs(max))
        {
            max = arr[i];
            indexMax = i;
        }
    }

    return max;
}