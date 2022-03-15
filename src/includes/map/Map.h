#ifndef __MAP__
#define __MAP__

#include<iostream>
#include<vector>

#include "Tile.h"
#include "Wall.h"
#include "../characters/Bomberman.h"
#include "../items/Item.h"
#include "../characters/Enemy.h"

class Map {

    public :
        // constructeur
        Map(int lines = 5, int columns = 10);

        // destructeur
        ~Map();

        //getters
        int getLines() const;
        int getColumns() const;

        // affichage Map
        void showMap() const;

        // mouvement Character sur Map
        bool moveCharacter(utils::Direction direction);

    private :
        int m_nbLines;
        int m_nbColumns;
        std::vector<std::vector<Tile*>> m_board;
        std::vector<Enemy*> m_enemies;
        std::vector<Item*> m_items;
        Bomberman m_player;
        Tile m_goal;
        
};

#endif

 