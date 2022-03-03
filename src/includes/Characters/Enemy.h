#ifndef __ENEMY__
#define __ENEMY__

class Enemy : public Character {

    public :
        Enemy();
        Enemy(const Enemy& other) = delete;
        Enemy(Enemy&& deplace) = delete;
        
    protected :
        int m_damage();
        Tile* m_position;
};

#endif