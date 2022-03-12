#ifndef __TILE__
#define __TILE__

#include<iostream>

class Tile {

    public :
        // constructeurs
        Tile(int x = 0, int y = 0);

        // getters
        int getX() const;
        int getY() const;

        // setters
        void setX(int x);
        void setY(int y);

    protected :
        int m_x;
        int m_y;
};

#endif