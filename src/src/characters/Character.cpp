#include "../../includes/characters/Character.h"

using namespace std;

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

void Character::moveUp()
{
    if(m_position.getX()>0)
    {
        m_position.setX(m_position.getX()-m_speed);
    }else
        {
            cout << "VOUS NE POUVEZ PAS MONTER PLUS" << endl;
            cout << endl;
        }
}

void Character::moveDown()
{
    if(m_position.getX()<4)
    {
        m_position.setX(m_position.getX()+m_speed);
    }else
        {
            cout << "VOUS NE POUVEZ DESCENDRE PLUS" << endl;
            cout << endl;
        }
}

void Character::moveLeft()
{
    if(m_position.getY()>0)
    {
        m_position.setY(m_position.getY()-m_speed);
    }else
        {
            cout << "VOUS NE POUVEZ PAS ALLER PLUS A GAUCHE" << endl;
            cout << endl;
        }
}

void Character::moveRight()
{
    if(m_position.getY()<7)
    {
        m_position.setY(m_position.getY()+m_speed);
    }else
        {
            cout << "VOUS NE POUVEZ PAS ALLER PLUS A DROITE" << endl;
            cout << endl;
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


