#include <conio.h>
#include <iostream>

#include "Helpers.h"
#include "Game.h"
#include "Tail.h"

Snake::Snake()
{
	m_head.setC('O');
	m_x = 2;
	m_y = 2;

	dir = 'R';
}

Snake::~Snake()
{
}

void Snake::draw()
{
	m_head.draw();

	m_tail.m_elements[0].setC('O');
	m_tail.m_elements[0].setX(m_x);		//position tail to follow head
	m_tail.m_elements[0].setY(m_y);
}

void Snake::update()
{	
	if (alive) 
	{
		m_tail.update();
		m_head.update();
		m_head.setX(m_x);
		m_head.setY(m_y);

		movement();
		tailDeath();

		switch (dir)		//move snake in current direction
		{
		case 'U': m_y--;
			break;
		case 'D': m_y++;
			break;
		case 'R': m_x++;
			break;
		case 'L': m_x--;
			break;
		}
	}
}

void Snake::movement()
{		
	if (_kbhit())
	{
		char ch = _getch();

		switch (ch)			//change direction using wasd keys
		{
		case 'w': dir = 'U';//up
			break;
		case 's': dir = 'D';//down
			break;
		case 'd': dir = 'R';//right
			break;
		case 'a': dir = 'L';//left
			break;
		}
	}		
}

void Snake::tailDeath()
{
	for (int i = 4; i < 500; i++)
	{
		if (m_head.getX() == m_tail.m_elements[i].getX() && m_head.getY() == m_tail.m_elements[i].getY())//If the head touches the tail
		{
			alive = false;		//kill the snake/game over
		}
	}
}


