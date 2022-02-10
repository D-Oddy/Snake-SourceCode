#ifndef GAME_H
#define GAME_H

#include "Border.h"
#include "Fruit.h"
#include "Snake.h"

class Game
{
private:
	
public:
	Border m_border;		
	Fruit m_fruit;
	Snake m_snake;
	
	Game();

	//-------------------------------------------------------
	// Function Name	: run
	// Purpose			: starting the game by calling functions
	//-------------------------------------------------------
	void run();

	//-------------------------------------------------------
	// Function Name	: eatFruit
	// Purpose			: Eat fruit when positions are the same, call growTail
	// See also			: Tail: growTail
	//-------------------------------------------------------
	void eatFruit();

	//-------------------------------------------------------
	// Function Name	: borderDeath
	// Purpose			: Cause death when the snake hits a wall
	// See also			: Border class, Wall class
	//-------------------------------------------------------
	void borderDeath();

	//-------------------------------------------------------
	// Function Name	: gameOver
	// Purpose			: End the game on death conditions, display score
	// See also			: borderDeath, tailDeath
	//-------------------------------------------------------
	void gameOver();
};


#endif //  GAME_H

