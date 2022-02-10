#ifndef WALL_H
#define WALL_H

class Wall 
{
private:

	int startX;		//Wall start x coordinate
	int startY;		//Wall start y coordinate
	int endX;		//Wall end x coordinate
	int endY;		//Wall end y coordinate

public:
	Wall();

	//-------------------------------------------------------
	// Function Name	: getCorners
	// Parameters		: none
	// Returns			: int sX, int sY, int eX, int eY
	// Purpose			: Accessing the positions of the border corners
	// See also			: setCorners, Border constructor
	//-------------------------------------------------------
	int getCorners() const;

	//-------------------------------------------------------
	// Function Name	: setCorners
	// Parameters		: int sX, int sY, int eX, int eY
	// Returns			: none
	// Purpose			: Setting the positions of the border corners
	// See also			: getCorners, Border constructor
	//-------------------------------------------------------
	void setCorners(int sX, int sY, int eX, int eY);

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing the walls
	//-------------------------------------------------------
	void draw();

};

#endif // !WALL_H
