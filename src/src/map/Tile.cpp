#include "../../includes/map/Tile.h"

Tile::Tile(int x, int y) : m_position(x ,y)
{
    //
}

Position Tile::getPosition() const
{
    return m_position;
}

void Tile::showStructure() const
{
    std::cout << "    ";
}
