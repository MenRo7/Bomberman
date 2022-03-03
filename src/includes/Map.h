#ifndef __MAP__
#define __MAP__

class Map {

    public :
        Map();
        Map(const Map& other) = delete;
        Map(Map&& deplace) = delete;
        void showMap() const;

    private :
        Tile* m_board[][];
        int m_column;
        int m_line;
        Enemy* m_enemies[];
        Item* m_items[];
        Tile m_goal;
        

#endif