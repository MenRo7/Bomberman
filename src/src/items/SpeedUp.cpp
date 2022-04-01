#include"../../includes/items/SpeedUp.h"

SpeedUp::SpeedUp(int x, int y, int speed) : Item(x, y), m_speedUp(speed)
{
    //
}

void SpeedUp::riseSpeed(Bomberman& player)
{
    player.augmentSpeed(m_speedUp);
}

bool SpeedUp::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool cancel = false;

    if(m_position == player.getPosition())
    {
        riseSpeed(player);
        cancel = true;
    }

    return cancel;
}

void SpeedUp::showItem() const
{
    std::cout << "SPEED UP";
}