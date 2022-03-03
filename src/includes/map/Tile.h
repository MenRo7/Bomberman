#ifndef __TILE__
#define __TILE__

class Tile {

    public :
        Tile(); 
        int getX() const;
        int getY() const;
        void showTile() const = 0;

    protected :
        int x;
        int y;
};

#endif