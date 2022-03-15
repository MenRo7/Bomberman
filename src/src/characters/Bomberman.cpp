#include "../../includes/characters/Bomberman.h"


Bomberman::Bomberman(int x, int y, int health, int speed, int bomb, int bombMax) : Character(x, y, health, speed), m_nbBomb(1), m_bombMax(1)
{
    //
}

void Bomberman::putBomb()
{
    m_nbBomb--;
}

void Bomberman::getBomb(int bomb)
{
    if(bomb > 0)
    {
        m_nbBomb += bomb;
    }
}

void Bomberman::showCharacter() const 
{
    std::cout << " P ";
}

