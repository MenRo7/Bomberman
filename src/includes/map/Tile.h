#ifndef __TILE__
#define __TILE__

#include<iostream>

#include "Position.h"


class Tile {

    public :
        Tile(int x = 0, int y = 0, bool cross = true);

        Position getPosition() const;
        bool getCross() const;

        void setCross(bool c);

        virtual void showStructure() const;


    protected :
        Position m_position;
        bool m_cross;

};

#endif