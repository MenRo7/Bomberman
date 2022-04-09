/**
 * \file Item.h
 * \author Romain GARNIER
 * \brief Fichier de la classe Item
 * \date 2022
 * \version 1.0
*/
#ifndef __ITEM__
#define __ITEM__

#include<iostream> 
#include<vector>

#include "../map/Position.h"
#include "../characters/Bomberman.h"

/**
 * \class Item
 * \author Romain GARNIER
 * \brief Classe abstraite qui définit un objet consommable
 * 
 * \sa Position
 * 
 * Classe mère des consommables
*/

class Item
{		
	public:

		/**
         * \brief Constructeur par défaut/initialisation de Item
         * 
		 * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         */
		Item(int x = 0, int y = 0);

		/**
         * \brief Destructeur de Item
         */
		virtual ~Item();

		/**
         * \brief Accesseur de m_position
         * 
         * \return Position m_position
         */
		Position getPosition() const;

		/**
         * \brief Activation de Item
         * 
		 * \param player référence constante vers un Bomberman
		 * 
		 * \author Romain GARNIER
         */

		/**
         * \brief Activation de Item
		 * 
         * \param player référence constante vers un Bomberman
         * 
		 * méthode virtuelle pure non définissable
         */
		virtual bool activate(Bomberman& player) = 0;

		/**
         * \brief Affichage de Item
         * 
         * méthode virtuelle pure non définissable
         */
		virtual void showItem() const = 0;

	protected:
		Position m_position; /*!< position de Item*/
};

#endif