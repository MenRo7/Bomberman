#ifndef __GHOST__
#define __GHOST__

#include <iostream>

#include "Enemy.h"

class Ghost: public Enemy
{
	public:
        // constructeur
		Ghost(int x, int y, int health, int speed, int damage);

        //destructeur
		~Ghost();

        // affichage Ghost
		void showCharacter() const override;
};

#endif