#ifndef __ITEM__
#define __ITEM__

#include<iostream> 
#include<vector>

#include "../map/Position.h"
#include "../characters/Bomberman.h"

class Item
{		
	public:
		Item(int x = 0, int y = 0);
		~Item();

		Position getPosition() const;
		virtual bool activate(Bomberman& player, std::vector<Item*> &item, std::vector<std::vector<Tile*>> board) = 0;
		virtual void showItem() const = 0;

	protected:
		Position m_position;
};

#endif