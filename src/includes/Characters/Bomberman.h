#ifndef __BOMBERMAN__
#define __BOMBERMAN__

#include<iostream>

#include "../../includes/characters/Character.h"

class Bomberman : public Character {

    public :
        // constructeur
        Bomberman(int x = 0, int y = 0, int health = 1, int speed = 1, int bomb = 1, int bombMax = 1);

        // poser une bombe
        void putBomb();

        // augmenter bombes max
        void getBomb(int bomb);

        // affichage Bomberman
        void showCharacter() const override;
        
    private :
        int m_nbBomb;
        int m_bombMax;
}; 

#endif