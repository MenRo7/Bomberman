#ifndef __ENEMY__
#define __ENEMY__

#include<iostream>

#include "Character.h"

class Enemy : public Character {

    public :
        // constructeur
        Enemy(int x, int y, int health, int speed, int damage);

        // destructeur 
        ~Enemy();
        
    protected :
        int m_damage;
};

#endif