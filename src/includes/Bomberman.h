#ifndef __BOMBERMAN__
#define __BOMBERMAN__

class Bomberman : public Character {

    public :
        Bomberman();
        Bomberman(const Bomberman& other) = delete;
        Bomberman(Bomberman&& deplace) = delete;
        void putBomb();
        void show() const;
        
    private :
        int m_nbBomb;
        int m_bombMax;
}; 

#endif