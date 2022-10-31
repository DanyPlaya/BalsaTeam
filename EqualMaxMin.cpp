#include "Liber.h"
#include "Prototypes.h"

int EqualMaxMin(int *arr,int size,int max,int min,int indexMax,int indexMin,int countMax,int countMin,int sum)
{
    if (countMax >= 2 || countMin >= 2)
    {
        sum = MultiRes(arr, size, max, min, countMax, countMin, indexMax, indexMin);
        
    }
    else
    {
        if (indexMin < indexMax)
        {
            for (int i = indexMin+1; i < indexMax; i++)
            {
                sum *= arr[i];
            }
        }
        if (indexMax<indexMin)
        {
            for (int i = indexMax+1 ; i < indexMin; i++)
            {
                sum *= arr[i];
            }
        }
    }

    return sum;
}