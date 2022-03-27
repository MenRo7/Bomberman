#ifndef __ITEM__
#define __ITEM__

#include<iostream> 

#include "../map/Position.h"

class Item
{		
	public:
		Item(int x = 0, int y = 0);
		~Item();

		Position getPosition() const;

		virtual void showItem() const = 0;

	protected:
		Position m_position;
};


#endif