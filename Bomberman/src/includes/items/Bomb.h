/**
 * \file Bomb.h
 * \author Armel HARDOUIN 
 * \brief Fichier de la classe Bomb
 * \date 2022
 * \version 1.0
*/
#ifndef __BOMB__
#define __BOMB__

#include "../../includes/items/Item.h"

#include<iostream>

/**
 * \class Bomb
 * \author Armel HARDOUIN
 * \brief Définition d'une bombe
 * 
 * \sa Item
 * 
 * Hérite de la classe Item
*/

class Bomb : public Item {

    public :

        /**
         * \brief Constructeur par défaut/initialisation de Bomb
		 * 
         * \param x abscisse de la position
         * 
         * \param y ordonnée de la position
         * 
         * \param time temps avant explosion de la bombe
         */
        Bomb(int x = 0, int y = 0, int time = 3);
        
        /**
         * \brief Accesseur de power
		 * 
         * \return int power
         * 
         * méthode statique
         */
        static int getPower();

        /**
         * \brief Accesseur de range
		 * 
         * \return int range
         * 
         * méthode statique
         */
        static int getRange();

        /**
         * \brief Modificateur de power
		 * 
         * \param p nouvelle valeur de power
         * 
         * méthode statique
         */
        static void setPower(int p);

        /**
         * \brief Modificateur de range
		 * 
         * \param p nouvelle valeur de range
         * 
         * méthode statique
         */
        static void setRange(int r);

        /**
         * \brief Activation de Bomb
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Armel HARDOUIN
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de Bomb
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Armel HARDOUIN
         */
        void showItem() const override;
        
    private : 
        static int power; /*!< puissance commune à toutes les Bomb*/
        static int range; /*!< portée commune à toutes les Bomb*/
        int m_time; /*!< temps avant explosion de Bomb*/

};

#endif
