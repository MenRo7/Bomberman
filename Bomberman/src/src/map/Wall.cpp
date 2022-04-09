#include "../../includes/map/Wall.h"

Wall::Wall(int x, int y, bool cross, int health, bool destroyable) : Tile(x, y, cross), m_health(health), m_destroyable(destroyable)
{
    if(x < 0 || x > 4)
    {
        x = 0;
    }

     if(y < 0 || y > 7)
    {
        y = 0;
    }

    if(health < 1)
    {
        health = 1;
    }

}

int Wall::getHealth() const
{
    return m_health;
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
    if(m_destroyable == true)
    {
        if(m_health == 1)
        {
            std::cout << "  wall  ";
        }else
            std::cout << "  WALL  ";
    }
        
}