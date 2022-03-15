#include "../../includes/characters/Ghost.h"

Ghost::Ghost(int x, int y, int health, int speed, int damage): Enemy(x, y , health, speed, damage)
{

}
Ghost::~Ghost()
{

}

void Ghost::showCharacter() const
{
	std::cout << "  G  ";
}