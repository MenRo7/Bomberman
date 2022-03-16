#include "includes/map/Map.h"
#include "includes/map/Wall.h"

#include <iostream>
#include <typeinfo>

using namespace std;
using namespace utils;

Map mapEditor()
{
	int nbColumn, nbLine;

	cout << "Saisir le nombre de ligne de la map :";
	cin >> nbLine;
	cout << "Saisir le nombre de colonne de la map :";
	cin >> nbColumn;

	Map map(nbLine, nbColumn);

	cout << endl;

	cout << "Map line: " << map.getLines() << " | column: " << map.getColumns() << endl;

	cout << endl << endl;

	map.showMap();

	return map;
}

void PlayerTurn(Map& map)
{
	int choice;

	cout << endl << "C'est votre tour : Choisissez votre déplacement : " << endl;
	cout << endl;
	cout << endl << "8 pour aller vers le haut" << endl;
	cout << endl;
	cout << endl << "2 pour aller vers le bas" << endl;
	cout << endl;
	cout << endl << "4 pour aller vers la gauche" << endl;
	cout << endl;
	cout << endl << "6 pour aller vers la droite" << endl;
	cout << endl;

	cin >> choice;

	if(choice==8)
	{
		cout << endl << "Déplacement vers le haut" << endl;
		cout << endl;
		map.moveCharacter(Direction::UP);
		map.showMap();
	}else
		{
		if(choice==2)
		{
			cout << endl << "Déplacement vers le bas" << endl;
			cout << endl;
			map.moveCharacter(Direction::DOWN);
			map.showMap();
		}else
			{
			if(choice==4)
			{
				cout << endl << "Déplacement vers la gauche" << endl;
				cout << endl;
				map.moveCharacter(Direction::LEFT);
				map.showMap();
			}else
				{
				if(choice==6)
				{
					cout << endl << "Déplacement vers la droite" << endl;
					cout << endl;
					map.moveCharacter(Direction::RIGHT);
					map.showMap();
				}else
					{
						cout << endl << "ERREUR !" << endl;
					}
				}
			}
		}

}

int main(void)
{
	cout << endl;

	cout << endl << "                                                 BOMBERMAN" << endl;

	cout << endl;

	Map map = mapEditor();

	PlayerTurn(map);
	
	return 0;
}