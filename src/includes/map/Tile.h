#ifndef __TILE__
#define __TILE__

class Tile {

    public :
        //constructeurs
        Tile(int x, int y); 

        //getters
        int getX() const;
        int getY() const;

        //affichage
        void showTile() const = 0;

    protected :
        int x;
        int y;
};

#endif