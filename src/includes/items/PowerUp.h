#ifndef __POWERUP__
#define __POWERUP__

#include "Item.h"
#include "Bomb.h"

class PowerUp : public Item {

    public :
        PowerUp(int x = 0, int y = 0, int power = 1);

        void augmentPower();

        void showItem() const override; 

    private :
        int m_powerUp;
};

#endif