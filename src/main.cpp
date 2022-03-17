#include "includes/map/Map.h"
#include "includes/map/Wall.h"

#include <iostream>

using namespace std;

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

void playerTurn(Map& map)
{
	int direction;

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

	cin >> direction;

	map.moveCharacter(direction);
	map.showMap();
}


int main(void)
{
	cout << endl;

	cout << endl << "\t\t\t\t\t\t\tBOMBERMAN" << endl;
	cout << endl <<  "\t\t\t\t\t Le remake biensur faut pas deconner" << endl;

	cout << endl;

	Map map = mapEditor();

	playerTurn(map);
	
	return 0;
}