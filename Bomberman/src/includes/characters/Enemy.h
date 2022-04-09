/**
 * \file Enemy.h
 * \author Armel HARDOUIN
 * \brief Fichier de la classe Enemy
 * \date 2022
 * \version 1.0
*/
#ifndef __ENEMY__
#define __ENEMY__

#include<iostream>

#include "Character.h"

/**
 * \class Enemy
 * \author Armel HARDOUIN
 * \brief Classe abstraite qui définit un ennemi
 * 
 * \sa Character
 * 
 * Hérite de la classe Character / Classe mère des ennemis
*/

class Enemy : public Character {

    public :

        /**
         * \brief Constructeur par initialisation de Enemy
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param health points de vie de l'ennemi
         * 
         * \param speed vitesse de l'ennemi
         * 
         * \param damage dégâts à infliger
         */
        Enemy(int x, int y, int health, int speed, int damage);

        /**
         * \brief Destructeur de Enemy
         */
        virtual ~Enemy();
        
    protected :
        int m_damage; /*!< dégâts de Enemy*/
};

#endif