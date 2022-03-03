#ifndef __BOMBERMAN__
#define __BOMBERMAN__

class Bomberman : public Character {

    public :
        //constructeurs
        Bomberman();
        Bomberman(const Bomberman& other) = delete;
        Bomberman(Bomberman&& deplace) = delete;

        //poser une bombe
        void putBomb();

        //affichage
        void show() const;
        
    private :
        int m_nbBomb;
        int m_bombMax;
}; 

#endif