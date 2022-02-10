#include <iostream>

#include "Tail.h"
Tail::Tail()
{
	m_tailNum = 0;
}

Tail::Tail(int tailNum)
{
	m_tailNum = tailNum;
}

Tail::~Tail()
{
}

int Tail::getScore(){ return m_tailNum; }

void Tail::draw()
{
	for (int i = 0; i < m_tailNum; i++) 
	{
		m_elements[i].draw();		
	}
}

void Tail::update()
{
	
	m_elements[m_tailNum].update();
	moveTail();
}

void Tail::moveTail() 
{
	int _prevx = m_elements[m_tailNum].getX();
	int _prevy = m_elements[m_tailNum].getY();
	int _prev2x, _prev2y;
	
	draw();

	for (int i = 0; i < m_tailNum + 1; i++)
	{
		_prev2x = m_elements[i].getX();		//tail elements follow using previous positions
		_prev2y = m_elements[i].getY();
		m_elements[i].setX(_prevx);
		m_elements[i].setY(_prevy);
		_prevx = _prev2x;
		_prevy = _prev2y;
	}
}

void Tail::growTail(int v) 
{
	m_tailNum = m_tailNum + v;		//increase tail depending on value of fruit
}

