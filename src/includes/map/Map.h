#ifndef __MAP__
#define __MAP__

#include<iostream>
#include<vector>

#include "Tile.h"
#include "../characters/Bomberman.h"
#include "../items/Item.h"

class Map {

    public :
        // constructeurs
        Map();
        Map(int lines = 5, int columns = 10);

        // création Map
        void createMap();

        // affichage Map
        void showMap() const;

    private :
        int m_nbLines;
        int m_nbColumns;
        std::vector<std::vector<Tile>> m_board;
        //Enemy* m_enemies[];
        //Item* m_items[];
        Bomberman m_player;
        //Tile* m_goal;
        
};

#endif

 