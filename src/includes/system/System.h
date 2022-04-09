/**
 * \file System.h
 * \author Armel HARDOUIN & Romain GARNIER
 * \brief Fichier de la classe System
 * \date 2022
 * \version 1.0
*/
#ifndef __SYSTEM__
#define __SYSTEM__

#include<iostream>

#include "../map/Map.h"
#include "../map/Wall.h"

#include "../exceptions/BombermanException.h"

/**
 * \class MoreBomb
 * \author Armel HARDOUIN & Romain GARNIER
 * \brief Gestion du Système de jeu
 * 
 * \sa Map
*/

class System {

    public :

        /**
         * \brief Constructeur par défaut/initialisation de System
		 * 
         * \param mapid  numéro du fichier du level à jouer
         * 
         * \param lines nombre de lignes de la Map 
         * 
         * \param columns nombre de colonnes de la Map
         */
        System(int mapid = 1, int lines = 8, int columns = 10);

        /**
         * \brief Affichage des règles du jeu
         */
        void rules() const;

        /**
         * \brief Affichage de la Map
         */
        void showGame() const;

        /**
         * \brief Activation tour du joueur
         */
        void playerTurn();

        /**
         * \brief Activation des items sur la Map
         */
        void itemActivation();

        /**
         * \brief Activation tour de l'ennemi
         */
        void enemyTurn();

        /**
         * \brief Activation des bombes
         */
        void runningBomb();

        /**
         * \brief Lancement d'une partie
         */
        void playGame();


    private :
        Map m_game; /*!< Map sur laquelle jouer une partie*/
}; 

#endif