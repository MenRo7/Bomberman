#ifndef __SYSTEM__
#define __SYSTEM__

#include<iostream>

#include "../map/Map.h"
#include "../map/Wall.h"

#include "../exceptions/BombermanException.h"

class System {

    public :
        System(int mapid = 1, int lines = 8, int columns = 10);

        void rules() const;
        void showGame() const;

        void playerTurn();
        void itemActivation();
        void enemyTurn();
        void runningBomb();

        void playGame();


    private :
        Map m_game;
}; 

#endif