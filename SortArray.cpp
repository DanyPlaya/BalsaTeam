int* SortArray(int* arr, const int size) {
    int* SortedArray = new int[size];
    int key = 0;
    int i = 0;
    for (int j = 1; j < size; j++) {
        key = arr[j];
        i = j - 1;
        while (i >= 0 && arr[i] > key) {
            arr[i + 1] = arr[i];
            i = i - 1;
            arr[i + 1] = key;
        }
    }
}