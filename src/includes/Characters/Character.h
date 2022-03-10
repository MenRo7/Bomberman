#ifndef __CHARACTER__
#define __CHARACTER__

#include "../../includes/map/Tile.h"
#include "../../includes/utils/utils.h"

#include<iostream>

class Character {

    public :
        //constructeurs
        Character(Tile& t);
        Character(const Character& other) = delete;
        Character(Character&& deplace) = delete;

        //déplacements
        void move(utils::Direction direction);

        //getters
        int getHealth() const;
        int getSpeed() const;
        Tile getPosition() const;

        //setters
        void setHealth(int h);
        void setSpeed(int s);
        void setPosition(Tile t);

        //affichage
        virtual void show() const = 0;
        
    protected :
        int m_health;
        int m_speed;
        Tile* m_position; 

};

#endif