#ifndef __SYSTEM__
#define __SYSTEM__

#include "../map/Map.h"
#include "../characters/Bomberman.h"

#include<iostream>

class System {

    public :    
        System();
        void playerTurn(Map& map);

    private :
        Map m_map;

};  

#endif