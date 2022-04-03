#include "../../includes/characters/Monster.h"

Monster::Monster(int x, int y, int health, int speed, int damage) : Enemy(x, y, health, speed, damage)
{
    //
}

void Monster::showCharacter() const
{
    std::cout << "MONSTER ";
}