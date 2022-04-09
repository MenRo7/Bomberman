/**
 * \file Map.h
 * \author Armel HARDOUIN & Romain GARNIER
 * \brief Fichier de la classe Map
 * \date 2022
 * \version 1.0
*/
#ifndef __MAP__
#define __MAP__

#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>

#include "Tile.h"
#include "Wall.h"
#include "Position.h"

#include "../characters/Bomberman.h"
#include "../characters/Enemy.h"

#include "../items/Item.h"
#include "../items/Bomb.h"

/**
 * \class Map
 * \author Armel HARDOUIN & Romain GARNIER
 * \brief Gestion de la carte de jeu
 * 
 * \sa Tile
 * \sa Enemy
 * \sa Item
 * \sa Bomb
 * \sa Bomberman
*/

class Map {

    public :

        /**
         * \brief Constructeur par défaut/par initialisation de Map
         * 
         * \param mapid Numéro du fichier du level à jouer
         */ 
       Map(int mapid, int lines = 8, int columns = 10);

        /**
         * \brief Destructeur de Map
         */
        ~Map();

        /**
         * \brief Accesseur de l'attribut m_nbLines
         * 
         * \return entier m_nbLines
         */
        int getLines() const;

        /**
         * \brief Accesseur de l'attribut m_nbColumns
         * 
         * \return ntier m_nbColumns
         */
        int getColumns() const;

        /**
         * \brief Accesseur de l'attribut m_bomberman
         * 
         * \return Bomberman m_bomberman
         */
        Bomberman getBomberman() const;

        /**
         * \brief Accesseur de l'attribut m_goal
         * 
         * \return Tile m_goal
         */
        Tile getGoal() const;

        /**
         * \brief Accesseur de l'attribut m_enemies
         * 
         * \return std::vector<Enemy*> m_enemies
         */
        std::vector<Enemy*> getEnemies() const;

        /**
         * \brief Accesseur de l'attribut m_bomb
         * 
         * \return std::vector<Bomb*> m_bomb
         */
        std::vector<Bomb*> getBomb() const;

        /**
         * \brief Accesseur de l'attribut m_items
         * 
         * \return std::vector<Item*> m_items
         */
        std::vector<Item*> getItems() const;

        /**
         * \brief Affichage de la carte
         * 
         * \author Romain GARNIER & Armel HARDOUIN
         */
        void showMap() const;

        /**
         * \brief Mouvement du joueur sur la Ma
         * 
         * \param direction direction à suivre par le joueur
         * 
         * \author Romain GARNIER
         */
        void moveCharacter(int direction);

        /**
         * \brief Activation d'un item sur la Map
         * 
         * \param idx indice de l'item dans vecteur m_items
         * 
         * \author Romain GARNIER
         */
        void activateItem(int idx);

        /**
         * \brief Ajout d'une bombe sur la Map
         * 
         * \param p position où poser la bombe
         * 
         * \author Armel HARDOUIN
         */
        void addBomb(Position p); 

        /**
         * \brief Activation d'une bombe sur la Map
         * 
         * \param idx indice de la bombe dans le vecteur m_bomb
         * 
         * \author Romain GARNIER
         */
        void activateBomb(int idx);

    private :
        int m_nbLines; /*!< nombre de lignes de la Map*/
        int m_nbColumns; /*!< nombre de colonnes de la Map*/
        std::vector<std::vector<Tile*>> m_board; /*!< vecteur 2 dimensions de pointeurs de Tile pour gestion affichages et déplacements sur la Map*/
        std::vector<Enemy*> m_enemies; /*!< vecteur de pointeurs de Enemy pour stocker les ennemis sur la Map*/
        std::vector<Bomb*> m_bomb; /*!< vecteur de pointeurs de Bomb pour stocker les bombes posées sur la Map*/ 
        std::vector<Item*> m_items; /*!< vecteur de pointeurs de Item pour stocker les objets consommables pas encore ramassés sur la Map*/
        Bomberman m_bomberman; /*!< représentation du joueur sur la Map*/
        Tile m_goal; /*!< objectif de victoire sur la Map*/
        
};

#endif

 