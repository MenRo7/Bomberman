#ifndef __POSITION__
#define __POSITION__

class Position
{		
	public:
        //constructeur
		Position(int x = 0, int y = 0);

        // getters
		int getX() const;
		int getY() const;

        // setters
		void setX(int x);
		void setY(int y);

        bool operator==(const Position& other);
	    bool operator!=(const Position& other);

    private:
		int m_x; 
        int m_y;
};

#endif