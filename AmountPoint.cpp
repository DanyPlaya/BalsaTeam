
int AmountPoint(char* buf)
{
	int i = 0;
	int j = 0;

	while (buf[i])
	{
		if (buf[i] == '.' || buf[i] == '?' || buf[i] == '!')
			j++;
		i++;
	}

	return j;
}