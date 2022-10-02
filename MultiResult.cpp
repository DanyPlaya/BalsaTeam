#include "Liber.h"
#include "Prototypes.h"
int MultiRes(int* arr, int size, int max, int min, int CountMax,int CountMin,int indexMax,int indexMin)
{
    int sum = 1;
	if (CountMax >= 2 && CountMin < 2)
	{
        if (abs(min) < abs(max))
        {
            for (int i = min + 1; i < max; i++)
            {
                sum *= arr[i];
            }
        }
        if (abs(min) > abs(max))
        {
            for (int i = indexMax + 1; i < min; i++)
            {
                sum *= arr[i];
            }
        }
	}
    if (CountMax >= 2 && CountMin >= 2)
    {
        if (abs(min) < abs(max))
        {
            for (int i = indexMin + 1; i < indexMax; i++)
            {
                sum *= arr[i];
            }
        }
        if (abs(min) > abs(max))
        {
            for (int i = indexMax + 1; i < indexMax; i++)
            {
                sum *= arr[i];
            }
        }
    }
    if (CountMax < 2 && CountMin >= 2)
    {
        if (abs(min) < abs(max))
        {
            for (int i = indexMin + 1; i < max; i++)
            {
                sum *= arr[i];
            }
        }
        if (abs(min) > abs(max))
        {
            for (int i = max + 1; i < indexMax; i++)
            {
                sum *= arr[i];
            }
        }
    }
    return sum;
}