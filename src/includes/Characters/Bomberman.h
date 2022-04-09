/**
 * \file Bomberman.h
 * \author Romain GARNIER
 * \brief Fichier de la classe Bomberman
 * \date 2022
 * \version 1.0
*/
#ifndef __BOMBERMAN__
#define __BOMBERMAN__

#include<iostream>

#include "Character.h"

/**
 * \class Bomberman
 * \author Romain GARNIER
 * \brief Définition d'un personnage Bomberman
 * 
 * \sa Character
 * 
 * Hérite de la classe Character
*/

class Bomberman : public Character {

    public :

        /**
         * \brief Constructeur par défaut/initialisation de Bomberman
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param health points de vie du joueur
         * 
         * \param speed vitesse du joueur
         * 
         * \param bomb nombre de bombes possédées
         */
        Bomberman(int x = 0, int y = 0, int health = 1, int speed = 1, int bomb = 1);

        /**
         * \brief Accesseur de m_bomb
         * 
         * \return entier m_bomb
         */
        int getBomb() const;

        /**
         * \brief Amorcement d'une bombe
         * 
         * \return booléen si la bombe à bien été posée
         * 
         * \author Romain GARNIER
         */
        bool putBomb();

        /**
         * \brief Amassement d'une bombe
         * 
         * \param b nombre de bombes ramassées
         * 
         * \author Romain GARNIER
         */
        void PickUpBomb(int b);

        /**
         * \brief Ajout points de vie au Bomberman
         *
         * \param h nombre de points de vie récupérés
         * 
         * \author Romain GARNIER
         */
        void addHealth(int h);

        /**
         * \brief Augmentation de la vitesse de Bomberman
         * 
         * \param sp vitesse ajoutée
         */
        void augmentSpeed(int sp);

        /**
         * \brief Affichage de Bomberman
		 * 
         * méthode héritée de Character et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showCharacter() const override;
        
    private :
        int m_bomb; /*!< nombre de Bomb possédées par Bomberman*/
}; 

#endif