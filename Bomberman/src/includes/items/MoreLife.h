/**
 * \file MoreLife.h
 * \author Romain GARNIER
 * \brief Fichier de la classe MoreLife
 * \date 2022
 * \version 1.0
*/
#ifndef __MORELIFE__
#define __MORELIFE__

#include "Item.h"

#include "../characters/Bomberman.h"

/**
 * \class MoreLife
 * \author Romain GARNIER
 * \brief Définition d'un consommable MoreLife
 * 
 * \sa Item
 * 
 * Hérite de la classe Item / augmente les points de vie de Bomberman
*/

class MoreLife : public Item {

    public :
        MoreLife(int x = 0, int y = 0, int life = 1);

        void augmentHealth(Bomberman& player);

        /**
         * \brief Activation de MoreLife
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de MoreLife
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showItem() const override;

    private :
        int m_moreLife; /*!< points de vie ajoutées à Bomberman*/

};

#endif