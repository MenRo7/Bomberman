/**
 * \file ScaleUp.h
 * \author Romain GARNIER
 * \brief Fichier de la classe ScaleUp
 * \date 2022
 * \version 1.0
*/
#ifndef __SCALEUP__
#define _SCALEUP__

#include "Item.h"
#include "Bomb.h"

class ScaleUp : public Item {

/**
 * \class ScaleUp
 * \author Romain GARNIER
 * \brief Définition d'un consommable ScaleUp
 * 
 * \sa Item
 * 
 * Hérite de la classe Item / augmente le nombre de bombe de Bomberman
*/

    public :
        ScaleUp(int x = 0, int y = 0, int range = 1);

        void augmentRange();

        /**
         * \brief Activation de ScaleUp
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de ScaleUp
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showItem() const override;

    private :
        int m_scaleUp; /*!< portée ajoutée à Bomb*/
};

#endif