#include"../../includes/items/SpeedUp.h"

SpeedUp::SpeedUp(int x, int y, int speed) : Item(x, y), m_speedUp(speed)
{
    //
}

void SpeedUp::riseSpeed(Bomberman& player)
{
    player.augmentSpeed(m_speedUp);
}

void SpeedUp::showItem() const
{
    std::cout << "SPEED UP";
}