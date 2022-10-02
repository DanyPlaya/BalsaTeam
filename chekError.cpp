#include "Liber.h"
#include "Prototypes.h"
void chek(char* buf)
{
	if (AmountPoint(buf) == 0)
		cout << "No suggestions in file" << endl;
	else
	{
		if (AmountPoint(buf) == 1)
			cout << "There is only 1 sentence in the file" << endl;
		else
		{
			cout << "Inverse orser output:" << endl;
			Output(buf);
		}
	}
}