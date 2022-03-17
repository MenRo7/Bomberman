#ifndef __CHARACTER__
#define __CHARACTER__

#include<iostream>

#include "../map/Tile.h"
#include "../map/Position.h"
#include "../utils/utils.h"


class Character {

    public :
        // constructeur
        Character(int x = 0, int y = 0, int health = 1, int speed = 1);

        // getters
        int getHealth() const;
        int getSpeed() const;
        Position getPosition() const;

        // setters
        void setHealth(int h);
        void setSpeed(int s);
        void setPosition(Position t);

        // déplacement
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        // affichage (virtuelle pure)
        virtual void showCharacter() const = 0;
        
    protected :
        int m_health;
        int m_speed;
        Position m_position; 

};

#endif