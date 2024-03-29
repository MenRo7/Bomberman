#include "../../includes/map/Map.h"

#include "../../includes/characters/Monster.h"
#include "../../includes/characters/Ghost.h"

#include "../../includes/items/MoreLife.h"
#include "../../includes/items/SpeedUp.h"
#include "../../includes/items/MoreBomb.h"
#include "../../includes/items/ScaleUp.h"
#include "../../includes/items/PowerUp.h"

#include "../../includes/exceptions/BombermanException.h"

using namespace std;

Map::Map(int mapid, int lines, int columns) : m_nbLines(lines), m_nbColumns(columns)
{
    fstream fMap;
    string line;
    string tile;

    int lMap = 0;
    int cMap = 0;

    int i;

    cout << "MAP LOADING.." << endl << endl;

    fMap.open("res/" + to_string(mapid) + ".txt", fstream::in);

    if(fMap.is_open())
    {
        for(int i = 0 ; i < m_nbLines ; i++)
        {
            m_board.push_back(vector<Tile*>(m_nbColumns));
        }

        getline(fMap, line);
        while(getline(fMap, line))
        {
            cMap = 0;
            i = 0;

            while(i<line.length())
            {
                if(line[i] != ',')
                {
                    tile = "";
                    while(line[i] != ',' && i<line.length())
                    {
                        tile += line[i];
                        i++;
                    }
                    if(tile.compare("P") == 0)
                    {
                        m_board[lMap][cMap] = new Tile(lMap, cMap, false);
                        m_bomberman = Bomberman(lMap, cMap, 1, 1, 1);
                    }else
                        if(tile.compare("W") == 0)
                        {
                            m_board[lMap][cMap] = new Wall(lMap, cMap, false, 2, true);
                        }else
                            if(tile.compare("X") == 0)
                            {
                                m_goal = Tile(lMap, cMap, true);
                                m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                            }else
                                if(tile.compare("ML") == 0)
                                {
                                    m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                    m_items.push_back(new MoreLife(lMap, cMap));
                                }else
                                    if(tile.compare("SU") == 0)
                                    {
                                        m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                        m_items.push_back(new SpeedUp(lMap, cMap));
                                    }else
                                        if(tile.compare("MB") == 0)
                                        {
                                            m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                            m_items.push_back(new MoreBomb(lMap, cMap));
                                        }else
                                            if(tile.compare("SC") == 0)
                                            {
                                                m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                                m_items.push_back(new ScaleUp(lMap, cMap));
                                            }else
                                                if(tile.compare("PW") == 0)
                                                {
                                                    m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                                    m_items.push_back(new PowerUp(lMap, cMap));
                                                }else
                                                    if(tile.compare("M") == 0)
                                                    {
                                                        m_board[lMap][cMap] = new Tile(lMap, cMap, false);
                                                        m_enemies.push_back(new Monster(lMap, cMap, 1, 1, 1));
                                                    }else
                                                        if(tile.compare("G") == 0)
                                                        {
                                                            m_board[lMap][cMap] = new Tile(lMap, cMap, false);
                                                            m_enemies.push_back(new Ghost(lMap, cMap, 1, 1, 1));
                                                        }else
                                                            {
                                                                m_board[lMap][cMap] = new Tile(lMap, cMap, true);
                                                            }
                                                            cMap++;
                }
                i++;
            }
            lMap++;
        }
    }else
        {
            cout << endl << "Impossible de charger la map! surement qu'elle existe pas chacal" << endl << endl;
        }
        fMap.close();
        cout << endl <<"MAP LOADED" << endl << endl;
}

Map::~Map()
{
    for(int i=0; i<m_nbLines; i++)
	{
		for(int j=0; j<m_nbColumns; j++)
		{
			delete m_board[i][j];
		}
	}

    for(int i = 0 ; i < m_enemies.size() ; i++)
    {
        delete m_enemies[i];
    }

    for(int i = 0 ; i < m_items.size() ; i++)
    {
        delete m_items[i];
    }

    for(int i = 0 ; i < m_bomb.size() ; i++)
    {
        delete m_bomb[i];
    }
}

int Map::getLines() const
{
    return m_nbLines;
}

int Map::getColumns() const
{
    return m_nbColumns;
}

Bomberman Map::getBomberman() const
{
    return m_bomberman;
}

Tile Map::getGoal() const
{
    return m_goal;
}

vector<Enemy*> Map::getEnemies() const
{
    return m_enemies;
}

vector<Bomb*> Map::getBomb() const
{
    return m_bomb;
}

vector<Item*> Map::getItems() const
{
    return m_items;
}


void Map::showMap() const
{
    cout << endl << "\t============================================================================" << endl;
    cout << endl << "\t\tPoints de vie : " << m_bomberman.getHealth() << "\t\t\t" << "Nombre de bombes : " << m_bomberman.getBomb() << endl << endl;
    cout << "\t============================================================================" << endl;
    for(int i = 0 ; i < m_nbLines ; i++)
    {
        for(int j = 0 ; j < m_nbColumns ; j++)
        {
            cout << "+--------";
        }
        cout << "+" << endl;
    
        for(int k = 0 ; k < 4 ; k++)
        {
            for(int j = 0 ; j < m_nbColumns ; j++)
            {
                switch(k)
                {
                    case 0:
                        cout << "|        ";
                        break;

                    case 1:
                    {
                        bool display = false;
                        cout << "|";

                        if(m_bomberman.getPosition() == m_board[i][j]->getPosition())
                        {
                            m_bomberman.showCharacter();
                            display = true;
                        }

                        if(!display && !m_items.empty())
                        {
                            int idx = 0;
                            while(idx < m_items.size() && m_items[idx]->getPosition() != m_board[i][j]->getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_items.size())
                            {
                                m_items[idx]->showItem();
                                display= true;
                            }
                        }

                        if(!display && !m_enemies.empty())
                        {
                            int idx = 0;
                            while(idx < m_enemies.size() && m_enemies[idx]->getPosition() != m_board[i][j]->getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_enemies.size())
                            {
                                m_enemies[idx]->showCharacter();
                                display = true;
                            }
                        }

                        if(!display && !m_bomb.empty())
                        {
                            int idx = 0;
                            while(idx < m_bomb.size() && m_bomb[idx]->getPosition() != m_board[i][j]->getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_bomb.size())
                            {
                                m_bomb[idx]->showItem();
                                display = true;
                            }
                        }

                        if(!display)
                        {
                            m_board[i][j]->showStructure();
                        }
                        break;
                    }
 
                    default:
                        cout << "|        ";
                        break;
                }
            }
            cout << "|" << endl;
        }
    }
    for(int j = 0 ; j < m_nbColumns ; j++)
    {
        cout << "+--------";
    }
    cout << "+" << endl;
}

void Map::moveCharacter(int direction)
{   
    Bomberman cloneBomberman = m_bomberman;

    cloneBomberman.move(direction);
    
    if(cloneBomberman.getPosition().getX() >= m_nbLines || cloneBomberman.getPosition().getX() < 0  || cloneBomberman.getPosition().getY() >= m_nbColumns || cloneBomberman.getPosition().getY() < 0)
    {
        throw BombermanException("impossible de sortir de la Map !\n");
    }

    if(!m_board[cloneBomberman.getPosition().getX()][cloneBomberman.getPosition().getY()]->getCross())
    {
        throw BombermanException("Cette case est inaccessible ! Contournez-la !\n");
    }

    cloneBomberman = m_bomberman;

    if(m_bomberman.move(direction))
    {
        m_board[cloneBomberman.getPosition().getX()][cloneBomberman.getPosition().getY()]->setCross(true);
		m_board[m_bomberman.getPosition().getX()][m_bomberman.getPosition().getY()]->setCross(false);
    }else
        {
            throw BombermanException("Impossible de se deplacer\n");
        }
}

void Map::activateItem(int idx)
{
    if(idx >= 0 && m_items.size() > idx)
    {
        if(m_items[idx]->activate(m_bomberman))
        {
            m_items.erase(m_items.begin()+idx);
        }
    }
}

void Map::addBomb(Position p)
{
    if(m_bomberman.putBomb() == true)
    {
        m_bomb.push_back(new Bomb(p.getX(), p.getY(), 3));
    }
}

void Map::activateBomb(int idx)
{
    if(idx >= 0 && m_bomb.size() < idx)
    {
        if(m_bomb[idx]->activate(m_bomberman))
        {
            m_bomb.erase(m_bomb.begin()+idx);
        }
    }
}
