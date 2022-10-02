bool* MaxIndexArray(int* arr, int size, int max,int &countMax)
{
    bool* CordMax = new bool[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == max)
        {
            CordMax[i] = true;
            countMax++;
        }
        else {
            CordMax[i] = false;
        }
    }
    return CordMax;
}