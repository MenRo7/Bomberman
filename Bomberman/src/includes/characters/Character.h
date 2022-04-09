/**
 * \file Character.h
 * \author Romain GARNIER
 * \brief Fichier de la classe Character
 * \date 2022
 * \version 1.0
*/
#ifndef __CHARACTER__
#define __CHARACTER__

#include<iostream>

#include "../map/Tile.h"
#include "../map/Position.h"

/**
 * \class Character
 * \author Romain GARNIER
 * \brief Classe abstraite qui définit un personnage
 * 
 * Classe mère des personnages
*/

class Character {

    public :

        /**
         * \brief Constructeur par défaut/initialisation de Character
         * 
         * \param x abscisse de la position
		 * 
		 * \param y ordonnée de la position
         * 
         * \param health points de vie du personnage
         * 
         * \param speed vitesse du personnage
         */
        Character(int x = 0, int y = 0, int health = 1, int speed = 1);

        /**
         * \brief Accesseur de m_health
         * 
         * \return entier m_health
         */
        int getHealth() const;

        /**
         * \brief Accesseur de m_speed
         * 
         * \return entier m_speed
         */
        int getSpeed() const;

        /**
         * \brief Accesseur de m_position
         * 
         * \return Position m_position
         */
        Position getPosition() const;

        /**
         * \brief Modificateur de m_health
         * 
         * \param h nouvelle valeur de m_health
         */
        void setHealth(int h);

        /**
         * \brief Modificateur de m_speed
         * 
         * \param s nouvelle valeur de m_speed
         */
        void setSpeed(int s);

        /**
         * \brief Mouvement du Character
         * 
         * \param direction direction à suivre par le personnage
         * 
         * méthode utilisée dans moveCharacter(int) de la classe Map
         * 
         * \author Romain GARNIER
         */
        bool move(int direction);

        /**
         * \brief Infligement de dégâts au Character
         * 
         * \param dmg nombre de dégâts subi
         * 
         * \return booléen si le déplacement à été fait
         * 
         * \author Romain GARNIER
         */
        void takeDamage(int dmg);

        /**
         * \brief Affichage de Character
         * 
         * méthode virtuelle pure non définissable
         */
        virtual void showCharacter() const = 0;
        
    protected :
        int m_health; /*!< points de vie de Character*/
        int m_speed; /*!< vitesse de Character*/
        Position m_position; /*!< position de Character*/

};

#endif