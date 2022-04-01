#include "../../includes/items/MoreBomb.h"

MoreBomb::MoreBomb(int x, int y, int bomb) : Item(x, y), m_moreBomb(bomb)
{
    //
}

void MoreBomb::addBomb(Bomberman& player)
{
    player.PickUpBomb(m_moreBomb);
}

bool MoreBomb::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool cancel = false;

    if(m_position == player.getPosition())
    {
        addBomb(player);
        cancel = true;
    }

    return cancel;
}

void MoreBomb::showItem() const
{
    std::cout << "MOREBOMB";
}