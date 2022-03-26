#ifndef __MAP__
#define __MAP__

#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>

#include "Tile.h"
#include "Wall.h"

#include "../characters/Bomberman.h"
#include "../characters/Enemy.h"

#include "../items/Item.h"


class Map {

    public :
        // constructeur
        Map(int mapid);

        // destructeur
        ~Map();

        //getters
        int getLines() const;
        int getColumns() const;

        // affichage Map
        void showMap() const;

        // mouvement Character sur Map
        void moveCharacter(int direction);

    private :
        int m_nbLines;
        int m_nbColumns;
        std::vector<std::vector<Tile*>> m_board;
        std::vector<Enemy*> m_enemies;
        std::vector<Item*> m_items;
        Bomberman m_bomberman;
        Tile m_goal;
        
};

#endif

 