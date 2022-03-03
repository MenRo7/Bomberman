#include "../../includes/characters/Character.h"

Character::Character(Tile& t) : m_health(100), m_speed(1), m_position(0)
{
    m_position = t(0,0);
}

void Character::moveUp() const
{

}

void Character::moveDown() const
{

}

void Character::moveLeft() const
{

}

void Character::moveRight() const
{

}

int Character::getHealth() const
{
    return m_health;
}

int Character::getSpeed() const
{
    return m_speed;
}

Tile Character::getPosition() const
{
    return m_position;
}

void Character::setHealth(int h)
{
    m_health = h;
}

void Character::setSpeed(int s)
{
    m_speed = s;
}

void Character::setPosition(Tile& t)
{
    m_position = &t;
}

