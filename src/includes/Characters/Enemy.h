#ifndef __ENEMY__
#define __ENEMY__

#include<iostream>

#include "../../includes/characters/Character.h"
#include "../../includes/map/Tile.h"


class Enemy : public Character {

    public :
        // constructeur
        Enemy(int x, int y, int health, int speed, int damage);

        // affichage 
        virtual void showEnemy() const = 0;
        
    protected :
        int m_damage;
};

#endif