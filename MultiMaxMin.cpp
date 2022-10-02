#include "Liber.h"
#include "Prototypes.h"
void MultiMaxMin(int* arr, const int size)
{
    int sum = 1;
    int indexMax =0;
    int indexMin=0;
    int countMax = 0;
    int countMin = 0;
    int min = MinElement(arr, size);//Минимальный элемент
    int max = MaxElement(arr, size);//Максимальный элемент
    bool* CordMax = MaxIndexArray(arr, size, max, countMax); //Масссив с индексами максимальных элементов
    bool* CordMin = MinIndexArray(arr, size, min, countMin); //Масссив с индексами минимальных элементов
    if (countMax > 1)
    {
        cout << "multiple maximums found in the array" << endl;
        for (int i = 0; i < size; i++)
        {
            if (CordMax[i])
                cout << "Index Max Element :" << i << endl;
        }
        while(indexMax != max)
        {
            cout << "choose from several maximums" << endl;
            cin >> indexMax;
            if (indexMax != max)
                cout << "you entered not the maximum number" << endl;
        }
    }
    if (countMin > 1)
    {
        cout << "multiple minimums found in the array" << endl;
        for (int i = 0; i < size; i++)
        {
            if (CordMin[i])
                cout << "Index Min Element :" << i << endl;
        }
        while (indexMin != min)
        {
            cout << "choose from several minimums" << endl;
            cin >> indexMin;
            if (indexMin != min)
                cout << "you entered not the minimum number" << endl;
        }
    }
    if (indexMax++ == indexMin || indexMin++ == indexMax)
        cout << "the maximum and minimum element are located next to each other" << endl;
        
    if (indexMax + 2 == indexMin || indexMin + 2 == indexMax)
        cout << "There is only one element between the maximum and minimum modulo elements" << endl;
    if (indexMax == indexMin || max == min)
        cout << "Max element = Min" << endl;
    
    if (countMax >= 2 || countMin >= 2)
    {
        sum = MultiRes(arr, size, max, min, countMax, countMin, indexMax, indexMin);
        cout << sum;
    }
    else {
        if(abs(min) < abs(max))
        {
        for (int i = min + 1; i < max; i++)
        {
            sum *= arr[i];
        }
        }
        if (abs(min) > abs(max))
        {
            for (int i = max + 1; i < min; i++)
            {
                sum *= arr[i];
            }
        }
        cout << sum << endl;
    }

    delete[]CordMax;
    delete[]CordMin;
    
}