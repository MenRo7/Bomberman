#include "../../includes/items/ScaleUp.h"

ScaleUp::ScaleUp(int x, int y, int range) : Item(x, y), m_scaleUp(range)
{
    //
}

void ScaleUp::augmentRange()
{
    Bomb::setRange(Bomb::getRange()+m_scaleUp);
}
bool ScaleUp::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool remove = false;

    if(player.getPosition() == m_position)
    {
        augmentRange();
        remove = true;
    }

    return remove;
}

void ScaleUp::showItem() const
{
    std::cout << "SCALE UP";
}