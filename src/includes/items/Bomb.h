#ifndef __BOMB__
#define __BOMB__

#include "../../includes/items/Item.h"

#include<iostream>

class Bomb : Item {

    public :
        Bomb(int x = 0, int y = 0, int time = 3);
        
        static int getPower();
        static int getRange();

        static void setPower(int p);
        static void setRange(int r);

        void reduceTime();

    private : 
        static int power;
        static int range;
        int m_time;

};

#endif
