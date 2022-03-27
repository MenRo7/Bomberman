#include "includes/map/Map.h"
#include "includes/map/Wall.h"

#include "includes/exceptions/BombermanException.h"

#include <iostream>

using namespace std;

Map mapEditor(int level)
{
	Map map(level);

	cout << endl;

	cout << endl << endl;

	map.showMap();

	return map;
}

void rules()
{
	cout << endl << "BIENVENUE DANS BOMBERMAN EVOLVED !" << endl;
	cout << "Que devez-vous faire ?" << endl;
	cout << " Controlez un bomberman au sein d'un labyrinthe infeste de monstres en tout genre !\n Les MONSTER qui vous attaquent corps a corps\n Les GHOST qui peuvent traverser les murs\n Les BOWMAN qui vous pulverisent a distance !" << endl;
	cout << "A l'aide de vos bombes, detruisez les murs, tuez tous les monstres, et atteignez le point de victoire cache quelque part sur la carte !" << endl;
}
void playerTurn(Map& map)
{
	int direction;

	while(1)
	{
		cout << endl << "C'est votre tour !" << endl;
		cout << endl << "Choisissez votre déplacement : " << endl;
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
		cout << endl << endl << endl;

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
	cout << endl <<  "\t\t\t\t      En moins bien.." << endl << endl;

	int choice;
	cout << endl << "1--Jouer" << endl;
	cout << endl << "2--Regles du jeu" << endl;
	cout << endl << "3--Quitter" << endl;
	cout << endl;
	cin>>choice;


	if(choice == 1)
	{
		Map map = mapEditor(1);
		playerTurn(map);
	}else	
		if(choice == 2)
		{
			rules();
			int choice;
			cout << endl << "1--Jouer" << endl;
			cout << endl << "2--Regles du jeu" << endl;
			cout << endl << "3--Quitter" << endl;
			cout << endl;
			cin>>choice;
			if(choice == 1)
			{
				Map map = mapEditor(1);
				playerTurn(map);
			}
		}else
			if(choice == 3)
			{
				cout << "Reviens vite champion !" << endl;
			}
	
	return 0;
}