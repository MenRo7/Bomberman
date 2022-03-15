#ifndef __ITEM__
#define __ITEM__

#include<iostream> 

#include "../Map/Position.h"

class Item
{
	protected:
		Position m_position;
		
	public:
		Item(int x = 0, int y = 0);
		~Item();

		Position getPosition() const;
		virtual void showItems() const = 0;
};


#endif