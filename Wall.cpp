#include <iostream>

#include "Helpers.h"
#include "Wall.h"

Wall::Wall()
{
	
}

int Wall::getCorners() const
{
	return startX;
	return startY;
	return endX;
	return endY;
}

void Wall::setCorners(int sX, int sY, int eX, int eY)
{
	startX = sX;
	startY = sY;
	endX = eX;
	endY = eY;
}

void Wall::draw()
{
	for (int i = 0; i < 28; ++i)
	{
		gotoXY(i, startY);
		std::cout << "#";
	}
	for (int i = 0; i < 17; ++i)
	{
		gotoXY(startX, i);
		std::cout << "#";
	}
}
