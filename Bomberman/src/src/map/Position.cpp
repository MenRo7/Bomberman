#include "../../includes/map/Position.h"

Position::Position(int x, int y): m_x(x), m_y(y)
{
	x >= 0;
	y >= 0;
}

int Position::getX() const
{
	return m_x;
}

int Position::getY() const
{
	return m_y;
}

void Position::setX(int x)
{
	if(x >= 0 || x <= 7)
	{
		m_x = x;
	}
}

void Position::setY(int y)
{
	if(y >= 0 || y <= 7)
	{
		m_y = y;
	}
}

bool Position::operator==(const Position& other)
{
	return (m_x == other.m_x && m_y == other.m_y);
}

bool Position::operator!=(const Position& other)
{
	return (m_x != other.m_x || m_y != other.m_y);
}