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
        Map(int mapid, int lines = 8, int columns = 10);

        // destructeur
        ~Map();

        //getters
        int getLines() const;
        int getColumns() const;
        Bomberman getPlayer() const;
        Tile getGoal() const;
        std::vector<Item*> getItems() const;
        std::vector<Enemy*> getEnemies()const;

        // affichage Map
        void showMap() const;

        // mouvement Character sur Map
        void moveCharacter(int direction);

        void activateItem(int idx);

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

 