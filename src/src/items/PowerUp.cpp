#include "../../includes/items/PowerUp.h"

PowerUp::PowerUp(int x, int y, int power) : Item(x, y), m_powerUp(power)
{
    //
}

void PowerUp::augmentPower()
{
    Bomb::setPower(Bomb::getPower()+m_powerUp);
}

bool PowerUp::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool remove = false;

    if(player.getPosition() == m_position)
    {
        augmentPower();
        remove = true;
    }

    return remove;
}

void PowerUp::showItem() const
{
    std::cout << "POWER UP";
}