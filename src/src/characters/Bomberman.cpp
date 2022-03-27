#include "../../includes/characters/Bomberman.h"


Bomberman::Bomberman(int x, int y, int health, int speed, int bomb) : Character(x, y, health, speed), m_bomb(1)
{
    //
}

/*void Bomberman::putBomb()
{
    if(m_Bomb >= 1)
    {

    }
    m_bomb--;
}*/

int Bomberman::getBomb() const
{
    return m_bomb;
}

void Bomberman::PickUpBomb(int b)
{
    if(b > 0)
    {
        m_bomb += b;
    }
}

void Bomberman::addHealth(int h)
{
    if(h > 0)
    {
        m_health += h;
    }
}

void Bomberman::augmentSpeed(int sp)
{
    if(sp > 0)
    {
        m_speed += sp;
    }
}

void Bomberman::showCharacter() const 
{
    std::cout << " PLAYER ";
}

