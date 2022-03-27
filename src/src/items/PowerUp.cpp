#include "../../includes/items/PowerUp.h"

PowerUp::PowerUp(int x, int y, int power) : Item(x, y), m_powerUp(power)
{
    //
}

void PowerUp::augmentPower()
{
    Bomb::setPower(Bomb::getPower()+m_powerUp);
}

void PowerUp::showItem() const
{
    std::cout << "POWER UP";
}