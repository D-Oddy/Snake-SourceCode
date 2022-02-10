#ifndef FRUIT_H
#define FRUIT_H

class Fruit 
{
private:
	char m_c;	//Character of the fruit
	int m_x;	//Fruit x coordinate
	int m_y;	//Fruit y coordinate

public:
	Fruit();

	int m_value;

	//-------------------------------------------------------
	// Function Name	: getX
	// Returns			: m_x
	// Purpose			: Accessing the fruit x value
	// See also			: getY, setY, setX
	//-------------------------------------------------------
	int getX() const;

	//-------------------------------------------------------
	// Function Name	: getY
	// Returns			: m_y
	// Purpose			: Accessing the fruit y value
	// See also			: getX, setY, setX
	//-------------------------------------------------------
	int getY() const;

	//-------------------------------------------------------
	// Function Name	: setX
	// Parameters		: int X
	// Purpose			: Setting the fruit x value
	// See also			: setY, getX, getY
	//-------------------------------------------------------
	void setX(int x);

	//-------------------------------------------------------
	// Function Name	: setY
	// Parameters		: int Y
	// Purpose			: Setting the fruit y value
	// See also			: setX, getX, getY
	//-------------------------------------------------------
	void setY(int y);

	//-------------------------------------------------------
	// Function Name	: setC
	// Parameters		: char c
	// Purpose			: Setting the fruit character
	//-------------------------------------------------------
	void setC(char c);

	//-------------------------------------------------------
	// Function Name	: setValue
	// Returns			: int v
	// Purpose			: Setting the fruit's value
	//-------------------------------------------------------
	void setValue(int v);

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing fruits
	//-------------------------------------------------------
	void draw();

	//-------------------------------------------------------
	// Function Name	: randomPos
	// Parameters		: none
	// Purpose			: Assigning the fruit a new random position
	// See also			: Game: eatFruit
	//-------------------------------------------------------
	void randomPos();

	
};

#endif 

