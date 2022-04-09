#ifndef __BOMBERMANEXCEPTION__
#define __BOMBERMANEXCEPTION__

#include <exception>
#include <string>

class BombermanException: public std::exception
{
	public:
		BombermanException(std::string error): m_error(error){};

		virtual const char* what() const throw()
		{
			return m_error.c_str();
		}
	
	private:
		std::string m_error;

};

#endif