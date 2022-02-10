#ifndef TAIL_H
#define TAIL_H

#include "Element.h"

class Tail 
{
private:

	int m_tailNum;

public:
	Element m_elements[100];
	
	Tail();

	Tail(int tailNum);

	~Tail();

	//-------------------------------------------------------
	// Function Name	: moveTail
	// Parameters		: none
	// Purpose			: Accessing the number of tail elements
	// Returns			: m_tailNum (length of tail)
	//-------------------------------------------------------
	int getScore();

	//-------------------------------------------------------
	// Function Name	: draw
	// Purpose			: drawing the tail
	//-------------------------------------------------------
	void draw();

	//-------------------------------------------------------
	// Function Name	: update
	// Purpose			: updating the tail
	//-------------------------------------------------------
	void update();

	//-------------------------------------------------------
	// Function Name	: moveTail
	// Parameters		: int prevx, int prevy int prev2x int prev2y
	// Purpose			: Making the tail follow after the head
	// See also			: growTail
	//-------------------------------------------------------
	void moveTail();

	//-------------------------------------------------------
	// Function Name	: growTail
	// Parameters		: int v (fruit value)
	// Purpose			: Increasing the length of the tail
	// See also			: moveTail, Game: eatFruit
	//-------------------------------------------------------
	void growTail(int v);
};

#endif 

