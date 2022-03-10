#ifndef __TILE__
#define __TILE__

#include<iostream>

class Tile {

    public :
        //constructeurs
        Tile(int x, int y); 

        //getters
        int getX() const;
        int getY() const;

        //setters
        void setX(int x);
        void setY(int y);

        //affichage
        void showTile();

    protected :
        int m_x;
        int m_y;
};

std::ostream& operator<<(std::ostream& os, const Tile& t);

#endif