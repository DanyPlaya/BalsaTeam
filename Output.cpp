#include "Liber.h"
#include "Prototypes.h"

void Output(char* buf)
{
	
	int len = 0;
	int n = 0, i = 0, j = 0, m = 0, cnt = 0;
	len = AmountPoint(buf);
	char* word = new char[len];
	char* buffer = new char[len];

	cin >> word;
	while (buf[i])
	{
		if (buf[i] == '?' || buf[i] == '!' || buf[i] == '.')
		{
			for (j = n, m = 0; j <= i; j++, m++)
			{
				buffer[m] = buf[j];
			}
			buffer[m] = '\0';
			if (strstr(buffer, word))
			{
				cnt++;
				cout <<"Sentence with your word" <<": " << buffer << endl;
			}
			n = i + 1;
		}
		i++;
	}

	cout << endl;
	if (0 == cnt)
		cout << "no introductory sentences!";
	cout << " " << endl;
	
	
}

		

			

			
	

	
