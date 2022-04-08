#ifndef __ENEMY__
#define __ENEMY__

#include<iostream>

#include "Character.h"

class Enemy : public Character {

    public :
        Enemy(int x, int y, int health, int speed, int damage);

        ~Enemy();
        
    protected :
        int m_damage;
};

#endif