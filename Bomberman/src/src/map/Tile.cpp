#include "../../includes/map/Tile.h"

Tile::Tile(int x, int y, bool cross) : m_position(x ,y), m_cross(cross)
{
    //
}

Position Tile::getPosition() const
{
    return m_position;
}

bool Tile::getCross() const
{
    return m_cross;
}

void Tile::setCross(bool c)
{
    m_cross = c;
}

void Tile::showStructure() const
{
    std::cout << "        ";
}
