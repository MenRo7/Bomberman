/**
 * \file Monster.h
 * \author Armel HARDOUIN
 * \brief Fichier de la classe Monster
 * \date 2022
 * \version 1.0
*/
#ifndef __MONSTER__
#define __MONSTER__

#include "Enemy.h"

/**
 * \class Monster
 * \author Armel HARDOUIN
 * \brief Définition d'un monstre basique
 * 
 * \sa Enemy
 * 
 * Hérite de la classe Enemy
*/

class Monster : public Enemy {

    public :

        /**
         * \brief Constructeur par initialisation de Enemy
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param health points de vie du personnage
         * 
         * \param speed vitesse du personnage
         * 
         * \param damage dégâts à infliger
         */
        Monster(int x, int y, int health, int speed, int damage);

        /**
         * \brief Affichage de Monster
		 * 
         * méthode héritée de Character et redéfinie
         * 
         * \author Armel HARDOUIN
         */
        void showCharacter() const override;

    private :

};

#endif