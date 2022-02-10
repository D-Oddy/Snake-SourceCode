#ifndef BORDER_H
#define BORDER_H

#include "Wall.h"
#include "Helpers.h"

class Border
{
private:

	Wall m_walls[4];//Array of four walls

	int m_x;		//Border max x value
	int m_y;		//Border max y value

public:
	Border();

	//-------------------------------------------------------
	// Function Name	: getX
	// Returns			: m_x
	// Purpose			: Accessing the border x limit
	// See also			: getY, setY, setX
	//-------------------------------------------------------
	int getX() const;

	//-------------------------------------------------------
	// Function Name	: getY
	// Returns			: m_y
	// Purpose			: Accessing the border y limit
	// See also			: getX, setY, setX
	//-------------------------------------------------------
	int getY() const;

	//-------------------------------------------------------
	// Function Name	: setX
	// Parameters		: int X
	// Purpose			: Setting the border x limit
	// See also			: setY, getX, getY
	//-------------------------------------------------------
	void setX(int x);

	//-------------------------------------------------------
	// Function Name	: setY
	// Parameters		: int Y
	// Purpose			: Setting the border x limit
	// See also			: setX, getX, getY
	//-------------------------------------------------------
	void setY(int y);

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing the border
	//-------------------------------------------------------
	void draw();

	

};

#endif
