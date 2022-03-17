#include "../../includes/system/System.h"

using namespace std;

System::System()
{
    
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
