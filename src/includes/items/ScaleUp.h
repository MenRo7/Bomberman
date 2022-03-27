#ifndef __SCALEUP__
#define _SCALEUP__

#include "Item.h"
#include "Bomb.h"

class ScaleUp : public Item {

    public :
        ScaleUp(int x = 0, int y = 0, int range = 1);

        void augmentRange();

        void showItem() const override;

    private :
        int m_scaleUp;
};

#endif