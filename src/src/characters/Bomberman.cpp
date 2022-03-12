#include "../../includes/characters/Bomberman.h"

Bomberman::Bomberman(Tile& t) : Character(&t), m_nbBomb(3), m_bombMax(1)
{
    //
}

void Bomberman::show() const override
{
    cout << *this;
}
