#include "../../includes/items/ScaleUp.h"

ScaleUp::ScaleUp(int x, int y, int range) : Item(x, y), m_scaleUp(range)
{
    //
}

void ScaleUp::augmentRange()
{
    Bomb::setRange(Bomb::getRange()+m_scaleUp);
}

void ScaleUp::showItem() const
{
    std::cout << "SCALE UP";
}