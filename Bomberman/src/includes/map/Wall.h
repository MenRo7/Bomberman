/**
 * \file Wall.h
 * \author Armel HARDOUIN 
 * \brief Fichier de la classe Wall
 * \date 2022
 * \version 1.0
*/
#ifndef __WALL__
#define __WALL__

#include<iostream>

#include "Tile.h"

/**
 * \class Wall
 * \author Armel HARDOUIN
 * \brief Définition de murs sur la carte de jeu
 * 
 * \sa Tile
*/

class Wall : public Tile {

    public :

        /**
         * \brief Constructeur par initialisation de Wall
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param cross booléen initialisé à faux car obstacle
         * 
         * \param health points de vie du mur
         * 
         * \param destroyable booléen à vrai si mur destructible
         */
        Wall(int x, int y, bool cross, int health, bool destroyable);
        
        /**
         * \brief Accesseur de m_health
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param cross booléen vrai pour tuile traversable et faux pour les obstacles
         */
        int getHealth() const;
        
        /**
         * \brief Destruction d'un Wall
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param cross booléen vrai pour tuile traversable et faux pour les obstacles
         * 
         * Une bombe peut détruire le mur si le m_destroyable est vrai
         *
         * \author Armel HARDOUIN
         */
        void destroyWall();

        /**
         * \brief Affichage de Wall
		 * 
         * méthode héritée de Tile et redéfinie
         * 
         * \author Armel HARDOUIN
         */
        void showStructure() const override;

    private :
        int m_health; /*!< points de vie du Wall*/
        bool m_destroyable; /*!< Wall destructible ou non*/

};

#endif