#ifndef __BOMBERMAN__
#define __BOMBERMAN__

#include "../../includes/characters/Character.h"

#include<iostream>

class Bomberman : public Character {

    public :
        // constructeurs
        Bomberman(Tile& t);

        // poser une bombe
        void putBomb();

        // affichage Bomberman
        void show() const override;
        
    private :
        int m_nbBomb;
        int m_bombMax;
}; 

#endif