#ifndef __WALL__
#define __WALL__

#include<iostream>

#include "Tile.h"


class Wall : public Tile {

    public :
        // constructeur
        Wall(int x = 0, int y = 0, int health = 2, bool cross = false, bool destroyable = true);
        
        // affaiblissement
        void destroyWall();
        
        // affichage Wall
        void showStructure() const override;

    private :
        int m_health;
        bool m_destroyable;

};

#endif