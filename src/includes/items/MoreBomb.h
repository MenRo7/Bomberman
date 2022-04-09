/**
 * \file Map.h
 * \author Romain GARNIER
 * \brief Fichier de la classe MoreBomb
 * \date 2022
 * \version 1.0
*/
#ifndef __MOREBOMB__
#define __MOREBOMB__

#include "Item.h"

/**
 * \class MoreBomb
 * \author Romain GARNIER
 * \brief Définition d'un consommable MoreBomb
 * 
 * \sa Item
 * 
 * Hérite de la classe Item / augmente le nombre de bombe de Bomberman
*/

class MoreBomb : public Item {

    public :
        MoreBomb(int x = 0, int y = 0, int bomb = 1);

        void addBomb(Bomberman& player);

        /**
         * \brief Activation de MoreBomb
		 * 
         * \param player référence constante vers un Bomberman
         * 
         * méthode héritée de Item et redéfinie
         */
        bool activate(Bomberman& player) override;

        /**
         * \brief Affichage de MoreBomb
		 * 
         * méthode héritée de Item et redéfinie
         * 
         * \author Romain GARNIER
         */
        void showItem() const override;

    private :
        int m_moreBomb; /*!< nombre de bombes ajoutées à Bomberman*/

};

#endif