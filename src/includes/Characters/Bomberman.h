#ifndef __BOMBERMAN__
#define __BOMBERMAN__

#include<iostream>

#include "Character.h"

class Bomberman : public Character {

    public :
        Bomberman(int x = 0, int y = 0, int health = 1, int speed = 1, int bomb = 1);

        int getBomb() const;

        bool putBomb();

        void PickUpBomb(int b);

        void addHealth(int h);

        void augmentSpeed(int sp);

        void showCharacter() const override;
        
    private :
        int m_bomb;
}; 

#endif