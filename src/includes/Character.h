#ifndef __CHARACTER__
#define __CHARACTER__

class Character {

    public :
        Character();
        Character(const Character& other) = delete;
        Character(Character&& deplace) = delete;
        void moveUp();
        void moveDown();
        void moveleft();
        void moveRight();
        void show() const = 0;
        
    protected :
        int m_health;
        int m_speed;
        Tile* m_position; 

};

#endif