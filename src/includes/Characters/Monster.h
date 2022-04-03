#ifndef __MONSTER__
#define __MONSTER__

#include "Enemy.h"

class Monster : public Enemy {

    public :
        Monster(int x, int y, int health, int speed, int damage);

        void showCharacter() const override;

    private :

};

#endif