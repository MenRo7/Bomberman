#include "../../includes/characters/Ghost.h"

Ghost::Ghost(int x, int y, int health, int speed, int damage): Enemy(x, y , health, speed, damage)
{

}

void Ghost::showCharacter() const
{
	std::cout << " GHOST  ";
}