#ifndef __CHARACTER__
#define __CHARACTER__

class Character {

    public :
        //constructeurs
        Character(Tile& t);
        Character(const Character& other) = delete;
        Character(Character&& deplace) = delete;

        //déplacements
        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();

        //getters
        int getHealth() const;
        int getSpeed() const;
        Tile getPosition() const;

        //setters
        void setHealth(int h);
        void setSpeed(int s);
        void setPosition(Tile t);

        //affichage
        void show() const = 0;
        
    protected :
        int m_health;
        int m_speed;
        Tile* m_position; 

};

#endif