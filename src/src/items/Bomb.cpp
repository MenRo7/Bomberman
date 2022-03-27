#include "../../includes/items/Bomb.h"

using namespace std;
using namespace utils;

int Bomb::power = 1;
int Bomb::range = 1;

Bomb::Bomb(BombState estate, int time) : m_estate(estate), m_time(time)
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
