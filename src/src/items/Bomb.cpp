#include "../../includes/items/Bomb.h"

using namespace std;

int Bomb::power = 1;
int Bomb::range = 1;

Bomb::Bomb(int x, int y, int time) : Item(x ,y), m_time(time)
{
    //
}

int Bomb::getPower()
{
    return power;
}

int Bomb::getRange()
{
    return range;
}

void Bomb::setPower(int p)
{
    power = p;
}

void Bomb::setRange(int r)
{
    range = r;
}

bool Bomb::activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board)
{
    bool cancel = false;

    if(m_time > 0)
    {
        m_time--;
    }else
        {
            cancel = true;
        }

    return cancel;
}

void Bomb::showItem() const
{
    std::cout << "  BOMB  ";
}
