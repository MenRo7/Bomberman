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
        Tile* m_board[][];
        int m_column;
        int m_line;
        Enemy* m_enemies[];
        Item* m_items[];
        Tile m_goal;
        

#endif

 