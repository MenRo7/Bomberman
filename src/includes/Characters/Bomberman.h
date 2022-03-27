#ifndef __BOMBERMAN__
#define __BOMBERMAN__

#include<iostream>

#include "Character.h"

class Bomberman : public Character {

    public :
        // constructeur
        Bomberman(int x = 0, int y = 0, int health = 1, int speed = 1, int bomb = 1);

        int getBomb() const;

        // poser une bombe
        //void putBomb();

        // augmenter bombes max
        void PickUpBomb(int b);

        // augmenter les pv
        void addHealth(int h);

        //augmenter la vitesse
        void augmentSpeed(int sp);

        // affichage Bomberman
        void showCharacter() const override;
        
    private :
        int m_bomb;
}; 

#endif