#ifndef __BOMBERMANEXCEPTION__
#define __BOMBERMANEXCEPTION__

#include <exception>
#include <string>

class BombermanException: public std::exception
{
	public:
		BombermanException(std::string error) noexcept;

		virtual const char* what() const noexcept;
	
	private:
		std::string m_error;

};

#endif