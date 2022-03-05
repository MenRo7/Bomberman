#include "../../includes/characters/Character.h"
#include "../../includes/utils/utils.h"

using namespace utils;

Character::Character(Tile& t) : m_health(100), m_speed(1), m_position(0)
{
    m_position = t(0,0);
}

bool Character::move(Direction direction)
{
    bool back = 1;

    switch(direction)
    {
        case Direction::TOP :
            m_position.setX(m_position.getX()-m_speed);
            break;

        case Direction::BOTTOM :
            m_position.setX(m_position.getX()+m_speed);
            break;

        case Direction::LEFT :
            m_position.setY(m_position.getY()-m_speed);
            break;

        case Direction::RIGHT :
            m_position.setY(m_position.getY()+m_speed);
            break;

        default:
            back = 0;
            break;
    }

    return back;
}
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

