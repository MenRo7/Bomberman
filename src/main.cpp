#include "includes/map/Map.h"
#include "includes/map/Wall.h"
#include "includes/exceptions/BombermanException.h"

#include <iostream>

using namespace std;

Map mapEditor()
{
	Map map(5, 8);

	cout << endl;

	cout << endl << endl;

	map.showMap();

	return map;
}

void playerTurn(Map& map)
{
	int direction;

	while(1)
	{
		cout << endl << "C'est votre tour !\nChoisissez votre déplacement : " << endl;
		cout << endl;
		cout << endl << "==8 pour aller vers le haut==" << endl;
		cout << endl;
		cout << endl << "==2 pour aller vers le bas==" << endl;
		cout << endl;
		cout << endl << "==4 pour aller vers la gauche==" << endl;
		cout << endl;
		cout << endl << "==6 pour aller vers la droite==" << endl;
		cout << endl;

		cin >> direction;
		cout << endl << endl << endl << endl;

		try
		{
			map.moveCharacter(direction);
		}catch(const BombermanException& e)
		{
			cerr << e.what() << endl;
		}
		
		map.showMap();	
	}
}

void enemyTurn()
{

}


int main()
{

	
	cout << endl;
	cout << endl << "\t\t\t\t  ---------------------" << endl;
	cout << endl << "\t\t\t\t |                     |" << endl;
	cout << endl << "\t\t\t\t |  BOMBERMAN Evolved  |" << endl;
	cout << endl << "\t\t\t\t |                     |" << endl;
	cout << endl << "\t\t\t\t  ---------------------" << endl;
	cout << endl <<  "\t\t\t\tLe remake faut pas blaguer" << endl;

	Map map = mapEditor();

	playerTurn(map);
	
	return 0;
}