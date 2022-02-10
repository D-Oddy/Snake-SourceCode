#include "Element.h"
#include "Helpers.h"

Element::Element() 
{
	m_c = 'o';
	m_x = getX();
	m_y = getY();
}

int Element::getX(){return m_x;}

int Element::getY(){return m_y;}

void Element::setX(int x){m_x = x;}

void Element::setY(int y){m_y = y;}

void Element::setC(char c){m_c = c;}

void Element::draw()
{
	drawChar(m_c, m_x, m_y);
}

void Element::update()
{
}


