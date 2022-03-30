#ifndef __MOREBOMB__
#define __MOREBOMB__

#include "Item.h"

class MoreBomb : public Item {

    public :
        MoreBomb(int x = 0, int y = 0, int bomb = 1);

        void addBomb(Bomberman& player);

        bool activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board) override;

        void showItem() const override;

    private :
        int m_moreBomb;

};

#endif