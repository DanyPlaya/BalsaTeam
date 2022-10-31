int* SortArray(int* arr, const int size) 
{
    int *sortArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        sortArray[i] = arr[i];
    }

    for (int i = 1; i < size; ++i) 
    {
        int x = sortArray[i];
        int j = i;

        while (j > 0 && sortArray[j - 1] < x) 
        {
            sortArray[j] = sortArray[j - 1];
            --j;
        }

        sortArray[j] = x;
    }

    return sortArray;
}