#include "Liber.h"
#include "Prototypes.h"

void MultiMaxMin(int* arr, const int size)
{
    int sum = 1;
    int indexMax = 0;
    int indexMin = 0;
    int countMax = 0;
    int countMin = 0;
    int min = MinElement(arr, size,indexMin);//Минимальный элемент
    int max = MaxElement(arr, size,indexMax);//Максимальный элемент
    bool* CordMax = MaxIndexArray(arr, size, max, countMax); //Масссив с индексами максимальных элементов
    bool* CordMin = MinIndexArray(arr, size, min, countMin); //Масссив с индексами минимальных элементов

   /* if (max == min)
    {
        cout << "Max=Min" << endl;
        MainLogic(arr, size);
        cout << endl;
    }*/

    if (countMax > 1)
    {
        cout << "multiple maximums found in the array" << endl;
        for (int i = 0; i < size; i++)
        {
            if (CordMax[i])
                cout << "Index Max Element :" << i << endl;
        }

        bool flag = true;

        while(flag)
        {
            cout << "choose from several maximums" << endl;
            cin >> indexMax;
            for (int i = 0; i < size; i++)
            {
                if (indexMax == i && CordMax[i]) 
                {
                    flag = false;
                }
            }
            if(flag)
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

        bool flag = true;
        while (flag)
        {
            cout << "choose from several minimums" << endl;
            cin >> indexMin;
            for (int i = 0; i < size; i++)
            {
                if (indexMin == i && CordMin[i])
                {
                    flag = false;
                }
            }
            if(flag)
                cout << "you entered not the minimum number" << endl;
        }
    }

    if (indexMax+1 == indexMin || indexMin+1 == indexMax )
        cout << "the maximum and minimum element are located next to each other" << endl;
    else if (indexMax + 2 == indexMin || indexMin + 2 == indexMax)
        cout << "There is only one element between the maximum and minimum modulo elements" << endl;
    else {
        cout << "Multiplay: = " << EqualMaxMin(arr, size, max, min, indexMax, indexMin, countMax, countMin, sum) << endl;
    }

    delete[]CordMax;
    delete[]CordMin;
}