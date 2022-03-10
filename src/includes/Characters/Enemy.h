#ifndef __ENEMY__
#define __ENEMY__

#include "../../includes/characters/Character.h"
#include "../../includes/map/Tile.h"

#include<iostream>

class Enemy : public Character {

    public :
        //constructeurs
        Enemy();

        //
        void showEnemy() const = 0;
        
    protected :
        int m_damage();
        Tile* m_position;
};

#endif