#include <iostream>
#include <math.h>
#include "Prototypes.h"
using namespace std;

int test()
{
    const int size = 10;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20 - 10;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    bool* CordArr = CoordinatesPositiveElement(arr, size);
    for (int i = 0; i < size; i++)
    {
        if (CordArr[i])
        {
            cout << "Element" << i << "Positive" << endl;
        }
    }
    return 0;
}


