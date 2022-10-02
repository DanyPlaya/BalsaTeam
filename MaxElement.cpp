#include "Liber.h"
int MaxElement(int* arr, int size) {
	int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        
        if (abs(arr[max]) < abs(arr[i]))
        {
            max = arr[i];
        }
    }
    return max;
}