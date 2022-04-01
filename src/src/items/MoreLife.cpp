#include "../../includes/items/MoreLife.h"

MoreLife::MoreLife(int x, int y, int life) : Item(x, y), m_moreLife(life)
{
    //
}

void MoreLife::augmentHealth(Bomberman& player)
{
    player.addHealth(m_moreLife);
}

bool MoreLife::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool cancel = false;

    if(m_position == player.getPosition())
    {
        augmentHealth(player);
        cancel = true;
    }

    return cancel;
}

void MoreLife::showItem() const
{
    std::cout << "MORELIFE";
}
