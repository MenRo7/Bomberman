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
    bool remove = false;

    if(player.getPosition() == m_position)
    {
        riseSpeed(player);
        remove = true;
    }

    return remove;
}

void SpeedUp::showItem() const
{
    std::cout << "SPEED UP";
}