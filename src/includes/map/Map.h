#ifndef __MAP__
#define __MAP__

#include "../../includes/map/Tile.h"
#include "../../includes/characters/Bomberman.h"
#include "../../includes/items/Item.h"

#include<iostream>
#include<vector>

class Map {

    public :
        //constructeurs
        Map(int lines, int columns);
        Map(const Map& other) = delete;
        Map(Map&& deplace) = delete;

        //affichage
        //void showMap() const;

    private :
        int m_nbLines;
        int m_nbColumns;
        std::vector<std::vector<Tile>> m_board;
        //Enemy* m_enemies[];
        //Item* m_items[];
        //Bomberman m_player;
        //Tile* m_goal;
        
};

#endif

 