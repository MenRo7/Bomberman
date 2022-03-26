#include "../../includes/map/Map.h"
#include "../../includes/map/Wall.h"
#include "../../includes/map/Position.h"

#include "../../includes/characters/Ghost.h"

#include "../../includes/items/Item.h"

#include "../../includes/exceptions/BombermanException.h"

using namespace std;
using namespace utils;

Map::Map(int mapid)
{
    fstream fMap;
    string line;
    string tile;
    int i;
    
    int lMap = 0;
    int cMap = 0;

    cout << "MAP LOADING.." << endl << endl;

    if(!m_board.empty())
    {
        for(int i =0 ; i < m_nbLines ; i++)
        {
            for(int j = 0 ; j < m_nbColumns ; j++)
            {
                delete m_board[i][j];
            }
        }
    }
    fMap.open("res/" + to_string(mapid) + ".txt", fstream::in);

    if(fMap.is_open())
    {
        fMap >> m_nbLines;
        fMap >> m_nbColumns;

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
                        m_bomberman = Bomberman(lMap, cMap, 1, 1, 1, 1);
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
        cout <<"MAP LOADED" << endl << endl;
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
}

int Map::getLines() const
{
    return m_nbLines;
}

int Map::getColumns() const
{
    return m_nbColumns;
}

void Map::showMap() const
{
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
                        bool show = false;
                        cout << "|";

                        if(m_bomberman.getPosition() == m_board[i][j]->getPosition())
                        {
                            m_bomberman.showCharacter();
                            show = true;
                        }

                        if(!m_enemies.empty() && !show)
                        {
                            int idx = 0;
                            while(idx < m_enemies.size() && m_enemies[idx]->getPosition() != m_board[i][j]->getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_enemies.size())
                            {
                                m_enemies[idx]->showCharacter();
                                show = true;
                            }
                        }

                        if(!m_items.empty() && !show)
                        {
                            int idx = 0;
                            while(idx < m_items.size() && m_items[idx]->getPosition() != m_board[i][j]->getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_items.size())
                            {
                                m_items[idx]->showItems();
                                show = true;
                            }
                        }

                        if(!show)
                        {
                            m_board[i][j]->showStructure();
                        }
                        break;
                    }

                    case 2:
                        cout << "|        ";
                        break;

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
        throw BombermanException("Un mur sur votre route ! Contournez-le !\n");
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

