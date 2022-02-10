#include <iostream>

#include "Border.h"
#include "Helpers.h"


Border::Border() 
{
	m_x = 27;
	m_y = 17;

	m_walls[0].setCorners(0, 0, m_x, 0);

	m_walls[1].setCorners(m_x, 0, m_x, m_y);

	m_walls[2].setCorners(m_x, m_y, 0, m_y);

	m_walls[3].setCorners(m_x, m_y, 0, 0);

}

int Border::getX() const { return m_x; }

int Border::getY() const { return m_y; }

void Border::setX(int x) { m_x = x; }
void Border::setY(int y) { m_y = y; }

void Border::draw()
{
	for (int i = 0; i < 4; i++)
	{
		m_walls[i].draw();
	}
	
}


