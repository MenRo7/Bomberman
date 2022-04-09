/**
 * \file PowerUp.h
 * \author Romain GARNIER
 * \brief Fichier de la classe PowerUp
 * \date 2022
 * \version 1.0
*/
#ifndef __POWERUP__
#define __POWERUP__

#include "Item.h"
#include "Bomb.h"

class PowerUp : public Item {

/**
 * \class PowerUp
 * \author Romain GARNIER
 * \brief Définition d'un consommable PowerUp
 * 
 * \sa Item
 * 
 * Hérite de la classe Item / augmente les dégâts des bombes
*/

    public :
        PowerUp(int x = 0, int y = 0, int power = 1);

        void augmentPower();

        /**
         * \brief Activation de PowerUp
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de PowerUp
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showItem() const override; 

    private :
        int m_powerUp; /*!< puissance ajoutée à Bomb*/
};

#endif