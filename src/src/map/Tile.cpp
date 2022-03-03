#include "../../includes/map/Tile.h"

Tile::Tile(int x, int y) : x(x), y(y)
{
    //
}

int Tile::getX() const
{
    return m_x;
}

int Tile::getY() const
{
    return m_y;
}
