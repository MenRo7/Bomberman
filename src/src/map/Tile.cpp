#include "../../includes/map/Tile.h"

Tile::Tile(int x, int y) : m_x(x), m_y(y)
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

void Tile::setX(int x)
{
    m_x = x;
}

void Tile::setY(int y)
{
    m_y = y;
}

void Tile::showTile()
{
    std::cout << "|_|" << std::endl;
}
