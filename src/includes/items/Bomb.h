#ifndef __BOMB__
#define __BOMB__

#include "../../includes/items/Item.h"
#include "../../includes/utils/utils.h"

#include<iostream>

class Bomb : Item {

    public :
        Bomb(utils::BombState estate, int x = 0, int y = 0, int time = 3);
        
        static int getPower();
        static int getRange();

        static void setPower(int p);
        static void setRange(int r);

        void reduceTime();

    private : 
        static int power;
        static int range;
        utils::BombState m_estate;
        int m_time;

};

#endif
