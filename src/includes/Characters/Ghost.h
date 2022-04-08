#ifndef __GHOST__
#define __GHOST__

#include "Enemy.h"

class Ghost : public Enemy {

	public:
		Ghost(int x, int y, int health, int speed, int damage);

		void showCharacter() const override;
};

#endif