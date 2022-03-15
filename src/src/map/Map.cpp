#include "../../includes/map/Map.h"
#include "../../includes/map/Wall.h"
#include "../../includes/map/Position.h"

using namespace std;

Map::Map(int lines, int columns) : m_nbLines(lines), m_nbColumns(columns)
{
   for(int i = 0 ; i < m_nbLines ; i++)
   {
       m_board.push_back(vector<Tile>(m_nbColumns));

       for(int j = 0 ; j < m_nbColumns ; j++)
       {
           if(i==0 && j==0)
           {
               Wall w(i, j, 2, true);
               m_board[i][j] = w;
           }else
            {
                Tile t(i ,j);
                m_board[i][j] = t;
            }
       }
   }
   m_player = Bomberman(1, 1, 1, 1, 1, 1);
   m_goal = Tile(7, 7);
   //m_enemies.push_back();
}

Map::~Map()
{
    for(int i = 0 ; i < m_enemies.size() ; i++)
    {
        delete m_enemies[i];
    }

    for(int i = 0 ; i < m_items.size() ; i++)
    {
        delete m_items[i];
    }
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
                        cout << "|";

                        if(m_player.getPosition() == m_board[i][j].getPosition())
                        {
                            m_player.showCharacter();
                        }

                        if(!m_enemies.empty())
                        {
                            int idx = 0;
                            while(idx < m_enemies.size() && m_items[idx]->getPosition() != m_board[i][j].getPosition())
                            {
                                idx++;
                            }

                            if(idx < m_items.size())
                            {
                                m_items[idx]->showItems();
                            }
                        }
                        else
                        {
                            m_board[i][j].showStructure();
                        }
                    break;

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
