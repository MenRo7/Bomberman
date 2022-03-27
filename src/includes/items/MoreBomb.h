#ifndef __MOREBOMB__
#define __MOREBOMB__

#include "Item.h"

#include "../characters/Bomberman.h"

class MoreBomb : public Item {

    public :
        MoreBomb(int x = 0, int y = 0, int bomb = 1);

        void addBomb(Bomberman& player);

        void showItem() const override;

    private :
        int m_moreBomb;

};

#endif