#ifndef __TILE__
#define __TILE__

class Tile {

    public :
        Tile();
        void showTile() const;
        int getX() const;
        int getY() const;
    private :
        int x;
        int y;
};

#endif