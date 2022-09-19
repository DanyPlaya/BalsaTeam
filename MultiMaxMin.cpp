#include "Liber.h"
int MultiMaxMin(int* arr, const int size)
{
    bool* CordMax = new bool[size];
    bool* CordMin = new bool[size];
    int sum = 1;
    int min = 0;
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        CordMax[i] = false;
        CordMin[i] = false;
    }
    for (int i = 0; i < size; i++)
    {
        if (abs(arr[min]) > abs(arr[i]))
        {
            min = arr[i];
        }
        if (abs(arr[max]) < abs(arr[i]))
        {
            max = arr[i];
        }
    }
    //Масссив с индексами максимальных элементов
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            CordMax[i] = true;
        }
    }
    //Масссив с индексами минимальных элементов
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == min)
        {
            CordMin[i] = true;
        }
    }
    if (abs(min) < abs(max))
    {
        for (int i = min + 1; i < max; i++)
        {
            sum *= arr[i];
        }
    }
    else if (abs(min) > abs(max))
    {
        for (int i = max + 1; i < min; i++)
        {
            sum *= arr[i];
        }
    }
    return sum;
    delete[]CordMax;
    delete[]CordMin;
}