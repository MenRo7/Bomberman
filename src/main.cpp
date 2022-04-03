#include "includes/system/System.h"

#include <iostream>

using namespace std;


int main()
{
	cout << endl;
	cout << endl << "\t\t\t\t  ---------------------" << endl;
	cout << endl << "\t\t\t\t |                     |" << endl;
	cout << endl << "\t\t\t\t |  BOMBERMAN Evolved  |" << endl;
	cout << endl << "\t\t\t\t |                     |" << endl;
	cout << endl << "\t\t\t\t  ---------------------" << endl;
	cout << endl <<  "\t\t\t\t      En moins bien.." << endl << endl;

	int choice;
	cout << endl << "1--Jouer" << endl;
	cout << endl << "2--Regles du jeu" << endl;
	cout << endl << "3--Quitter" << endl;
	cout << endl;
	cin>>choice;

	System game(1, 8, 10);

	if(choice == 1)
	{
		game.playGame();
	}else	
		if(choice == 2)
		{
			game.rules();
			cout << endl << endl;
			int choice;
			cout << endl << "1--Jouer" << endl;
			cout << endl << "2--Regles du jeu" << endl;
			cout << endl << "3--Quitter" << endl;
			cout << endl;
			cin>>choice;
		}else
			if(choice == 3)
			{
				cout << "Reviens vite champion !" << endl;
				cout << endl;
			}
	
	return 0;
}