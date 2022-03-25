#include "../../includes/exceptions/BombermanException.h"

BombermanException::BombermanException(std::string error) : m_error(error)
{
    //
}

const char* BombermanException::what() const
{
	return m_error.c_str();
}