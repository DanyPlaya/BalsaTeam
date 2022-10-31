#include "Liber.h"
#include "Prototypes.h"

void MainMenu() 
{	
	char action = '\0';

	cout << "\tPlease, choose your seminar or enter 0 to exit from the program:" << endl;
	cout << "\n\tSeminar1 - click '1' " << endl;
	cout << "\n\tseminar2 - click '2' " << endl;
	cout << "\n\tseminar3 - click '3' " << endl;
	cout << "\n\t--> ";

	while (true)
	{
		cin >> action;

		switch (action)
		{
		case '1':
			system("cls");
			seminar3();
			break;
		case '2':
			system("cls");
			seminar4();
			break;
		case '3':
			seminar5();
			break;
		case '0':
			system("cls");
			cout << "Thank you, for using my programm good luck!";
			exit(0);
			break;
		default:
			cout << "Error! Please make your seminar's choice in range from 1 to 3 "
				<< "or 0 to exit from the program --> ";
			break;
		}
	}
}