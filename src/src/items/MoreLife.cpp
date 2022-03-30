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
    bool remove = false;

    if(player.getPosition() == m_position)
    {
        augmentHealth(player);
        remove = true;
    }

    return remove;
}

void MoreLife::showItem() const
{
    std::cout << "MORELIFE";
}
