#include "../../includes/characters/Character.h"

using namespace utils;

Character::Character(int x, int y, int health, int speed) : m_position(x, y), m_health(health), m_speed(speed)
{
    if(health < 1 || health > 1)
	{
		health = 1;
	}
	
	if(speed < 1)
	{
		speed = 1;
	}
}

bool Character::move(Direction direction)
{
    bool back = 1;

    switch(direction)
    {
        case Direction::UP :
            m_position.setX(m_position.getX()-m_speed);
            break;

        case Direction::DOWN :
            m_position.setX(m_position.getX()+m_speed);
            break;

        case Direction::LEFT :
            m_position.setY(m_position.getY()-m_speed);
            break;

        case Direction::RIGHT :
            m_position.setY(m_position.getY()+m_speed);
            break;
        
        case Direction::STAY :
            m_position.setX(m_position.getX()+0);
            m_position.setY(m_position.getY()+0);
            
        default:
            back = 0;
            break;
    }
    return back;
}


int Character::getHealth() const
{
    return m_health;
}

int Character::getSpeed() const
{
    return m_speed;
}

Position Character::getPosition() const
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

void Character::setPosition(Position t)
{
    m_position = t;
}

