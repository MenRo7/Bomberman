#include "../../includes/characters/Character.h"

using namespace std;

Character::Character(int x, int y, int health, int speed) : m_position(x, y), m_health(1), m_speed(1)
{
   //
}

bool Character::move(int direction)
{
    bool back = 1;
    if(direction == 8)
    {
        m_position.setX(m_position.getX()-m_speed);
    }else   
        if (direction == 2)
        {
            m_position.setX(m_position.getX()+m_speed);
        }else
            if(direction == 4)
            {
                m_position.setY(m_position.getY()-m_speed);
            }else
                if(direction == 6)
                {
                    m_position.setY(m_position.getY()+m_speed);
                }else
                    back = 0;
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


