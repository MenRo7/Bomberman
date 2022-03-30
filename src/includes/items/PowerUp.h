#ifndef __POWERUP__
#define __POWERUP__

#include "Item.h"
#include "Bomb.h"

class PowerUp : public Item {

    public :
        PowerUp(int x = 0, int y = 0, int power = 1);

        void augmentPower();

        bool activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board) override;

        void showItem() const override; 

    private :
        int m_powerUp;
};

#endif