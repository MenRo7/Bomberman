/**
 * \file Position.h
 * \author Armel HARDOUIN 
 * \brief Fichier de la classe Position
 * \date 2022
 * \version 1.0
*/
#ifndef __POSITION__
#define __POSITION__

/**
 * \class Position
 * \author Armel HARDOUIN
 * \brief Définition d'une position avec coordonnées X et Y
*/

class Position
{		
	public:

		/**
         * \brief Constructeur par initialisation de Position
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ardonnée de la position
         */
		Position(int x, int y);

		/**
         * \brief Accesseur de l'attribut m_x
         * 
         * \return entier m_x
         */
		int getX() const;

		/**
         * \brief Accesseur de l'attribut m_y
         * 
         * \return entier m_y
         */
		int getY() const;

		/**
         * \brief Modificateur de l'attribut m_x
         * 
         * \param x nouvelle valeur de m_x
         */
		void setX(int x);

		/**
         * \brief Modificateur de l'attribut m_y
         * 
         * \param y nouvelle valeur de m_y
         */
		void setY(int y);

		/**
         * \brief Surcharge de l'opérateur de comparaison ==
         * 
         * \param other une référence constante vers une position
         */
        bool operator==(const Position& other);

		/**
         * \brief Surcharge de l'opérateur de comparaison !=
         * 
         * \param other une référence constante vers une position
         */
	    bool operator!=(const Position& other);

    private:
		int m_x; /*!< abscisse de la Position*/
        int m_y; /*!< ordonnée de la Position*/
};

#endif