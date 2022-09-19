int SumPositiveElement(int* arr, const int size)
{
	int SumElement = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			SumElement += arr[i];
		}
	}
	return SumElement;
}