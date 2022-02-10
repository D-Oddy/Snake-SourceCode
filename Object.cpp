#include "Helpers.h"
#include "Object.h"


Object::Object()
{
	m_x = 0;
	m_y = 0;
	m_c = ' ';
}

void Object::setPos(int x, int y)
{
	m_x = x;
	m_y = y;
}

int Object::getPos() const
{
	return m_x;
	return m_y;
}

void Object::update()
{
	
}

void Object::draw()
{
	drawChar(m_c, m_x, m_y);
}
