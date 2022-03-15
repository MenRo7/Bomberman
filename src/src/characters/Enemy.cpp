#include "../../includes/characters/Enemy.h"
#include "../../includes/characters/Character.h"
#include "../../includes/map/Position.h"

Enemy::Enemy(int x, int y, int health, int speed, int damage) : Character(x, y, health, speed), m_damage(damage)
{
	if(damage < 1)
	{
		damage = 1;
	}
}

Enemy::~Enemy()
{
	
}
