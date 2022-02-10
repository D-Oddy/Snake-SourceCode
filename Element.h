#ifndef ELEMENT_H
#define ELEMENT_H

class Element 
{
private:
	char m_c;		//Character of the element
	int m_x;		//Element's x coordinate
	int m_y;		//Element's y coordinate
public:
	
	Element();

	//-------------------------------------------------------
	// Function Name	: getX
	// Returns			: m_x
	// Purpose			: Accessing the element's x value
	// See also			: getY, setY, setX
	//-------------------------------------------------------
	int getX();

	//-------------------------------------------------------
	// Function Name	: getY
	// Returns			: m_y
	// Purpose			: Accessing the element's y value
	// See also			: getX, setY, setX
	//-------------------------------------------------------
	int getY();

	//-------------------------------------------------------
	// Function Name	: setX
	// Parameters		: int X
	// Purpose			: Setting the element's x value
	// See also			: setY, getX, getY
	//-------------------------------------------------------
	void setX(int x);

	//-------------------------------------------------------
	// Function Name	: setY
	// Parameters		: int Y
	// Purpose			: Setting the element's y value
	// See also			: setX, getX, getY
	//-------------------------------------------------------
	void setY(int y);

	//-------------------------------------------------------
	// Function Name	: setC
	// Parameters		: char c
	// Purpose			: Setting the character of the element
	//-------------------------------------------------------
	void setC(char c);

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing elements
	//-------------------------------------------------------
	void draw();

	//-------------------------------------------------------
	// Function Name	: update
	// Purpose			: updating elements
	//-------------------------------------------------------
	void update();
};

#endif 

