/**
 * \file Ghost.h
 * \author Armel HARDOUIN 
 * \brief Fichier de la classe Ghost
 * \date 2022
 * \version 1.0
*/
#ifndef __GHOST__
#define __GHOST__

#include "Enemy.h"

/**
 * \class Enemy
 * \author Armel HARDOUIN
 * \brief Définition d'un fantôme
 * 
 * \sa Enemy
 * 
 * Hérite de la classe Enemy
*/

class Ghost : public Enemy {

	public:

		/**
         * \brief Constructeur par initialisation de Ghost
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param health points de vie du fantôme 
		 * 
         * \param speed vitesse du fantôme
         * 
         * \param damage dégâts à infliger
         */
		Ghost(int x, int y, int health, int speed, int damage);

		/**
         * \brief Affichage de Ghost
		 * 
         * méthode héritée de Character et redéfinie
         * 
         * \author Armel HARDOUIN
         */
		void showCharacter() const override;
};

#endif