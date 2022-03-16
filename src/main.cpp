#include "includes/map/Map.h"
#include "includes/map/Wall.h"

#include <iostream>
#include <typeinfo>

using namespace std;
using namespace utils;

int main(void)
{
	cout << endl;

	cout << endl << "                                                 BOMBERMAN" << endl;

	cout << endl;

	int nbColumn, nbLine;

	cout << "Saisir le nombre de ligne de la map :";
	cin >> nbLine;
	cout << "Saisir le nombre de colonne de la map :";
	cin >> nbColumn;

	Map map(nbLine, nbColumn);

	cout << endl;

	cout << "Map line: " << map.getLines() << " | column: " << map.getColumns() << endl;

	cout << std::endl << endl;

	map.showMap();
	
	cout << endl << "Déplacement du bomberman vers la droite" << endl << endl;
	map.moveCharacter(Direction::RIGHT);

    map.showMap();

    cout << std::endl << "Déplacement du bomberman vers le bas" << endl << endl;
    map.moveCharacter(Direction::DOWN);
    

	map.showMap();

	return 0;
}