#ifndef SNAKE_H
#define SNAKE_H

#include "Element.h"
#include "Tail.h"

class Snake 
{
private:
	int m_x;		//Snake head x coordinate
	int m_y;		//Snake head y coordinate
	
public:
	bool alive;		//Is the snake alive?

	char dir;		//Direction of the snake

	Snake();

	~Snake();

	Element m_head; //Head of the snake
	Tail	m_tail; //Tail of the snake

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing the snake
	//-------------------------------------------------------
	void draw();

	//-------------------------------------------------------
	// Function Name	: update
	// Purpose			: updating the snake
	//-------------------------------------------------------
	void update();

	//-------------------------------------------------------
	// Function Name	: movement
	// Parameters		: none
	// Purpose			: Moving the snake in four directions
	// See also			: Game: eatFruit, Tail: moveTail
	//-------------------------------------------------------
	void movement();

	//-------------------------------------------------------
	// Function Name	: tailDeath
	// Purpose			: cause death when the snake hits its tail
	// See also			: Tail: moveTail
	//-------------------------------------------------------
	void tailDeath();

};

#endif