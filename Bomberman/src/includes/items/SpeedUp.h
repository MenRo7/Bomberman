/**
 * \file SpeedUp.h
 * \author Romain GARNIER
 * \brief Fichier de la classe SpeedUp
 * \date 2022
 * \version 1.0
*/
#ifndef __SPEEDUP__
#define __SPEEDUP__

#include "Item.h"

#include "../characters/Bomberman.h"

/**
 * \class SpeedUp
 * \author Romain GARNIER
 * \brief Définition d'un consommable SpeedUp
 * 
 * \sa Item
 * 
 * Hérite de la classe Item / augmente la vitesse de Bomberman
*/

class SpeedUp : public Item {

    public :
        SpeedUp(int x = 0, int y = 0, int speed = 1);

        void riseSpeed(Bomberman& player);

        /**
         * \brief Activation de SpeedUp
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de SpeedUp
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showItem() const override;

    private :
        int m_speedUp; /*!< vitesse ajoutée à Bomberman*/
};

#endif