#include "../../includes/map/Map.h"

Map::Map() : m_nbLines(8), m_nbColumns(8)
{
    for(int i = 0 ; i < m_nbLines ; i++)
    {
        for(int j = 0 ; j < m_nbColumns ; j++)
        {
            m_board[i][j] = new Tile(i, j);
        }
    }
}