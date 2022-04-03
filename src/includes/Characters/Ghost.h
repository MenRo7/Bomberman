#ifndef __GHOST__
#define __GHOST__

#include "Enemy.h"

class Ghost : public Enemy {

	public:
        // constructeur
		Ghost(int x, int y, int health, int speed, int damage);

        // affichage Ghost
		void showCharacter() const override;
};

#endif