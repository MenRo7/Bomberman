#include "../../includes/items/MoreBomb.h"

MoreBomb::MoreBomb(int x, int y, int bomb) : Item(x, y), m_moreBomb(bomb)
{
    //
}

void MoreBomb::addBomb(Bomberman& player)
{
    player.PickUpBomb(m_moreBomb);
}

void MoreBomb::showItem() const
{
    std::cout << "MOREBOMB";
}