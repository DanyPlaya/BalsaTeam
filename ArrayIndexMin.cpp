bool* MinIndexArray(int* arr, int size, int min, int  &countMin)
{
    bool* CordMin = new bool[size];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == min)
        {
            CordMin[i] = true;
            countMin++;
        }
        else 
        {
            CordMin[i] = false;
        }
    }

    return CordMin;
}