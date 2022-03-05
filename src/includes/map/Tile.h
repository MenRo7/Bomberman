#ifndef __TILE__
#define __TILE__

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

#endif