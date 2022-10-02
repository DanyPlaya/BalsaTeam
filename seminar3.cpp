#include "Liber.h"
#include <conio.h>
void seminar3()
{
	ifstream fin("input.txt", ios::in);
	fin.seekg(0, ios::end);
	int len = fin.tellg();
	char* buf = new char[len + 1];

	fin.seekg(0, ios::beg);
	fin.read(buf, len);
	buf[len] = '\0';

	if (!fin)
		cout << "File open error." << endl;
	else
		//s5logic(buf);

	delete[]buf;
	buf = NULL;

	fin.close();
}