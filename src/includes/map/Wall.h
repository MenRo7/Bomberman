#ifndef __WALL__
#define __WALL__

#include<iostream>

#include "Tile.h"


class Wall : public Tile {

    public :
        // constructeur
        Wall(int x, int y, bool cross, int health, bool destroyable);
        
        // affaiblissement
        void destroyWall();
        
        // affichage Wall
        void showStructure() const override;

    private :
        int m_health;
        bool m_destroyable;

};

#endif