#include "../../includes/map/Map.h"
#include "../../includes/map/Wall.h"
#include "../../includes/map/Position.h"
#include "../../includes/characters/Ghost.h"

using namespace std;

Map::Map(int lines, int columns) : m_nbLines(lines), m_nbColumns(columns)
{
   for(int i = 0 ; i < m_nbLines ; i++)
   {
       m_board.push_back(vector<Tile*>(m_nbColumns));

       for(int j = 0 ; j < m_nbColumns ; j++)
       {
           if(i%2 && j%2)
           {
               /*Wall w(i, j, 2, true);
               m_board[i][j] = w;*/
                m_board[i][j] = new Wall(i , j, false, true, 2);
           }else
            {
                /*Tile t(i ,j);
                m_board[i][j] = t;*/
                m_board[i][j] = new Tile(i, j, true);
            }
       }
   }
   m_player = Bomberman(0, 0, 1, 1, 1, 1);
   m_goal = Tile(7, 7, false);
   m_enemies.push_back(new Ghost(0, 1, 1, 1, 2));
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
            cout << "+-------";
        }
        cout << "+" << endl;
    
        for(int k = 0 ; k < 4 ; k++)
        {
            for(int j = 0 ; j < m_nbColumns ; j++)
            {
                switch(k)
                {
                    case 0:
                        cout << "|       ";
                        break;

                    case 1:
                    {
                        bool show = false;
                        cout << "|";

                        if(m_player.getPosition() == m_board[i][j]->getPosition())
                        {
                            m_player.showCharacter();
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
                        cout << "|       ";
                        break;

                    default:
                        cout << "|       ";
                        break;
                }
            }
            cout << "|" << endl;
        }
    }
    for(int j = 0 ; j < m_nbColumns ; j++)
    {
        cout << "+-------";
    }
    cout << "+" << endl;
}

bool Map::moveCharacter(utils::Direction direction)
{
    return m_player.move(direction);
}
