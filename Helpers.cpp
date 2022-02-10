#include <Windows.h>
#include <iostream>

#include "Helpers.h"

void gotoXY(int x, int y)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { (SHORT)x, (SHORT)y };

	SetConsoleCursorPosition(hStdout, position);

}

void drawChar(char c, int x, int y)
{
	gotoXY(x, y);
	std::cout << c;

}