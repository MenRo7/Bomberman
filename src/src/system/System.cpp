#include "../../includes/system/System.h"

using namespace std;

System::System(int mapid, int lines, int columns) : m_game(mapid, lines, columns)
{
    //
}

void System::rules() const
{
	cout << endl << "BIENVENUE DANS BOMBERMAN EVOLVED !" << endl;
	cout << "Que devez-vous faire ?" << endl;
	cout << " Controlez un bomberman au sein d'un labyrinthe infeste de monstres en tout genre !\n Les MONSTER qui vous attaquent corps a corps\n Les GHOST qui peuvent traverser les murs\n Les BOWMAN qui vous pulverisent a distance !" << endl;
	cout << "A l'aide de vos bombes, detruisez les murs, tuez tous les monstres, et atteignez le point de victoire cache quelque part sur la carte !" << endl;
}

void System::showGame() const
{
    m_game.showMap();
}

void System::playerTurn()
{
	int choice;
	
	cout << endl << "Choisissez votre déplacement : " << endl;
	cout << endl;
	cout << "\t8 pour aller vers le haut";
	cout << "\t2 pour aller vers le bas";
	cout << endl;
	cout << "\t4 pour aller vers la gauche";
	cout << "\t6 pour aller vers la droite";
	cout << endl;
	cout << "\t\t\t0 pour poser une bombe";
	cout << endl;

	cin >> choice;
	cout << endl << endl << endl;
	
	switch(choice)
	{
		case 0:
			m_game.addBomb(m_game.getBomberman().getPosition());
			break;

		default:
			try
			{
				m_game.moveCharacter(choice);
			}catch(const BombermanException& e)
			{
				cerr << e.what() << endl;
			}
	}
		
	m_game.showMap(); 	
}

void System::itemActivation()
{
	for(int i = 0 ; i < m_game.getItems().size() ; i++)
	{
		m_game.activateItem(i);
	}
}

void System::enemyTurn()
{

}

void System::runningBomb()
{
	for(int i = 0 ; i < m_game.getBomb().size() ; i++)
	{
		m_game.activateBomb(i);
	}
}

void System::playGame()
{
	int turn = 1;
    showGame();
	cout << "Tour " << turn << endl;
	turn++;
	do{
		playerTurn();
		itemActivation();
		runningBomb();
		cout << "Tour " << turn << endl;
		turn++;
	}while(m_game.getGoal().getPosition() != m_game.getBomberman().getPosition() || m_game.getBomberman().getHealth() > 0);
}
