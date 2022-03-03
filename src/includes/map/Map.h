#ifndef __MAP__
#define __MAP__

class Map {

    public :
        //constructeurs
        Map();
        Map(const Map& other) = delete;
        Map(Map&& deplace) = delete;

        //affichage
        void showMap() const;

    private :
        int m_nbLines;
        int m_nbColumns;
        Tile* m_board[][];
        Enemy* m_enemies[];
        Item* m_items[];
        Bomberman* m_player;
        Tile* m_goal;
        

#endif

 