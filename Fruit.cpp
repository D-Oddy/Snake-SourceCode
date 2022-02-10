#include <iostream>
#include <time.h>

#include "Fruit.h"
#include "Helpers.h"
#include "Object.h"
#include "Game.h"

Fruit::Fruit() 
{
	srand((unsigned)time(0));

	m_c = '6';					//Character of the fruit
	m_x = rand() % 26 + 1;		//Set random x value
	m_y = rand() % 16 + 1;		//Set random y value

	m_value = 0;				//Amount of tail parts gained per fruit
}

int Fruit::getX() const {return m_x;}

int Fruit::getY() const { return m_y; }

void Fruit::setX(int x) { m_x = x; }

void Fruit::setY(int y) { m_y = y; }

void Fruit::setC(char c) { m_c = c; }

void Fruit::setValue(int v) { m_value = v; }

void Fruit::draw()
{
	drawChar(m_c, m_x, m_y);
}

void Fruit::randomPos()
{
	srand((unsigned)time(0));

	m_x = rand() % 26 + 1;
	m_y = rand() % 16 + 1;

	drawChar(m_c, m_x, m_y);
}

