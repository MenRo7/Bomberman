#ifndef __SPEEDUP__
#define __SPEEDUP__

#include "Item.h"

#include "../characters/Bomberman.h"

class SpeedUp : public Item {

    public :
        SpeedUp(int x = 0, int y = 0, int speed = 1);

        void riseSpeed(Bomberman& player);

        void showItem() const override;

    private :
        int m_speedUp;
};

#endif