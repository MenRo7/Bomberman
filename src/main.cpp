#include "includes/map/Map.h"
#include "includes/map/Wall.h"

#include <iostream>
#include <typeinfo>

int main(void)
{
	int nbColumn, nbLine;

	std::cout << "Saisir le nombre de ligne de la map :";
	std::cin >> nbLine;
	std::cout << "Saisir le nombre de colonne de la map :";
	std::cin >> nbColumn;

	Map map(nbLine, nbColumn);

	std::cout << std::endl;

	std::cout << "Map line: " << map.getLines() << " | column: " << map.getColumns() << std::endl;

	std::cout << std::endl << std::endl;

	map.showMap();
	
	std::cout << std::endl << "Déplacement du bomberman vers la droite" << std::endl << std::endl;
	map.moveCharacter(utils::Direction::RIGHT);

    map.showMap();

    
    std::cout << std::endl << "Déplacement du bomberman vers le bas" << std::endl << std::endl;
    map.moveCharacter(utils::Direction::BOTTOM);
    

	map.showMap();

	return 0;
}