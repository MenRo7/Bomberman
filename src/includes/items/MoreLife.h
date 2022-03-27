#ifndef __MORELIFE__
#define __MORELIFE__

#include "Item.h"

#include "../characters/Bomberman.h"


class MoreLife : public Item {

    public :
        MoreLife(int x = 0, int y = 0, int life = 1);

        void augmentHealth(Bomberman& player);

        void showItem() const override;

    private :
        int m_moreLife;

};

#endif