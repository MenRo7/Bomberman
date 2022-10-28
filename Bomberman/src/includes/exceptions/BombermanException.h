/**
 * \file BombermanException.h
 * \author Romain GARNIER
 * \brief Fichier de la classe définissant une exception de type BombermanException
 * \version 1.0
*/
#ifndef __BOMBERMANEXCEPTION__
#define __BOMBERMANEXCEPTION__

#include <exception>
#include <string>

/**
 * \class BombermanException
 * \author Romain GARNIER
 * \brief Définition d'une exception BombermanException
 * 
 * \sa Exception
 * 
 * Hérite de la classe Exception
*/

class BombermanException: public std::exception
{
	public:
		/**
         * \brief Constructeur par initialisation de BombermanException
		 * 
         * \param error message d'erreur
         * 
         */
		BombermanException(std::string error): m_error(error){};

		/**
         * \brief Renvoie de la cause de l'exception
		 * 
         * \return char* le message d'erreur
		 * 
         * \author Romain GARNIER
         */
		virtual const char* what() const throw()
		{
			return m_error.c_str();
		}
	
	private:
		std::string m_error; /*!< message d'erreur de l'exception*/

};

#endif