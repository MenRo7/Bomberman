#include "../../includes/map/Wall.h"

Wall::Wall(int x, int y, int health, bool destroyable) : Tile(x, y), m_health(health), m_destroyable(true)
{
    if(x < 1 || x > 7)
    {
        x = 1;
    }

     if(y < 1 || y > 7)
    {
        y = 1;
    }

    if(health < 1)
    {
        health = 1;
    }

}

void Wall::destroyWall()
{
    if(m_health > 0 && m_destroyable == true)
    {
        m_health--;
    }
}

void Wall::showStructure() const
{
    std::cout << " WALL ";
}