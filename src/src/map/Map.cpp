#include "../../includes/map/Map.h"

using namespace std;

Map::Map(): m_nbLines(5), m_nbColumns(10) 
{
    //
}

Map::Map(int lines, int columns) : m_nbLines(lines), m_nbColumns(columns)
{
   for(int i = 0 ; i < m_nbLines ; i++)
   {
       m_board.push_back(vector<Tile>(m_nbColumns));

       for(int j = 0 ; j < m_nbColumns ; j++)
       {
           Tile t(i ,j);
           m_board[i][j] = t;
       }
   }
}


void Map::showMap() const
{
    for(int i = 0 ; i < m_nbLines ; i++)
    {
        for(int j = 0 ; j < m_nbColumns ; j++)
        {
            cout << m_board[i][j];
        }
        cout << endl;
    }
}
