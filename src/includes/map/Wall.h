#ifndef __WALL__
#define __WALL__

#include<iostream>

#include "Tile.h"


class Wall : public Tile {

    public :
        Wall(int x, int y, bool cross, int health, bool destroyable);
        
        int getHealth() const;
        
        void destroyWall();
        
        void showStructure() const override;

    private :
        int m_health;
        bool m_destroyable;

};

#endif