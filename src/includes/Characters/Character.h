#ifndef __CHARACTER__
#define __CHARACTER__

#include<iostream>

#include "../map/Tile.h"
#include "../map/Position.h"


class Character {

    public :
        Character(int x = 0, int y = 0, int health = 1, int speed = 1);

        int getHealth() const;
        int getSpeed() const;
        Position getPosition() const;

        void setHealth(int h);
        void setSpeed(int s);

        bool move(int direction);
        void takeDamage(int dmg);
        virtual void showCharacter() const = 0;
        
    protected :
        int m_health;
        int m_speed;
        Position m_position; 

};

#endif