int CountPositiveElement(int* arr, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	return count;
}