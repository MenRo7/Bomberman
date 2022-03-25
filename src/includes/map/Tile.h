#ifndef __TILE__
#define __TILE__

#include<iostream>

#include "Position.h"


class Tile {

    public :
        // constructeur
        Tile(int x = 0, int y = 0, bool cross = true);

        // getters
        Position getPosition() const;
        bool getCross() const;

        //setters
        void setCross(bool c);

        //affichage Tile
        virtual void showStructure() const;


    protected :
        Position m_position;
        bool m_cross;

};

#endif