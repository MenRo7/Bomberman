#ifndef __BOMB__
#define __BOMB__

#include "../../includes/items/Item.h"
#include "../../includes/utils/utils.h"

#include<iostream>

class Bomb : Item {

    public :
        Bomb(utils::BombState estate, int time = 3);

    private : 
        utils::BombState m_estate;
        int m_time;

};

#endif
