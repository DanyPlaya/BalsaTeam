#include "Liber.h"
#include "Prototypes.h"

void s5logic(char* buf)
{
	char y;
	cout << "Reading all sentences from a text file and outputting them in reverse order" << endl;
	chek(buf);
	
	cout<< "or Enter any other character to go to the main menu -> ";
	cin >> y;
	MainMenu();
	
}