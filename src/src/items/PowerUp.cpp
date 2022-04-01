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
    bool cancel = false;

    if(m_position == player.getPosition())
    {
        augmentPower();
        cancel = true;
    }

    return cancel;
}

void PowerUp::showItem() const
{
    std::cout << "POWER UP";
}