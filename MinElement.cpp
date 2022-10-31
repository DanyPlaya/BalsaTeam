#include "Liber.h"

int MinElement(int* arr, int size,int &indexMin) 
{
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {

        if (abs(arr[i])<abs(min))
        {
            min = arr[i];
            indexMin = i;
        }
    }
    
    return min;
}