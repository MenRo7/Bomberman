/**
 * \file Tile.h
 * \author Romain GARNIER
 * \brief Fichier de la classe Tile
 * \date 2022
 * \version 1.0
*/
#ifndef __TILE__
#define __TILE__

#include<iostream>

#include "Position.h"

/**
 * \class Tile
 * \author Romain GARNIER
 * \brief Définition d'une tuile pour construire la carte de jeu
 * 
 * \sa Position
*/

class Tile {

    public :

        /**
         * \brief Constructeur par défaut/initialisation de Tile
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param cross booléen vrai pour tuile traversable et faux pour les obstacles
         */
        Tile(int x = 0, int y = 0, bool cross = true);

        /**
         * \brief Accesseur de m_position
         * 
         * \return position m_position
         */
        Position getPosition() const;

        /**
         * \brief Accesseur de m_cross
         * 
         * \return booléen m_cross
         */
        bool getCross() const;

        /**
         * \brief Modificateur de m_cross
         * 
         * \param c nouvelle valeur de m_cross
         */
        void setCross(bool c);

        /**
         * \brief Affichage de Tile
         * 
         * méthode virtuelle qui ne modifie par l'objet courant
         * 
         * \author Romain GARNIER
         */
        virtual void showStructure() const;


    protected :
        Position m_position; /*!< position de la Tile*/
        bool m_cross; /*!> Tile traversable ou non*/

};

#endif