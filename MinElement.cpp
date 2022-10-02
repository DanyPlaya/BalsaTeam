#include "Liber.h"
int MinElement(int* arr, int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {

        if (abs(arr[min]) > abs(arr[i]))
        {
            min = arr[i];
        }
    }
    return min;
}