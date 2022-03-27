#include "../../includes/items/MoreLife.h"

MoreLife::MoreLife(int x, int y, int life) : Item(x, y), m_moreLife(life)
{
    //
}

void MoreLife::riseHealth(Bomberman& player)
{
    player.addHealth(m_moreLife);
}

void MoreLife::showItem() const
{
    std::cout << "MORELIFE";
}
