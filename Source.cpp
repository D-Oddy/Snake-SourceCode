#include <conio.h>
#include <iostream>
#include <string>
#include <Windows.h>

#include "Game.h"
#include "Helpers.h"

int main()
{	
	std::cout << "  *-*-*SNAKE*-*-*\nSELECT DIFFICULTY:\n 1:Easy\n 2:Normal\n 3:Hard\n";

	/*std::cout << "SELECT DIFFICULTY:\n 1:Easy\n 2:Normal\n 3:Hard ";*/
	
	Game game;

	switch (_getch())								//Set the game difficulty based on number key pressed
	{
	case '1': game.m_fruit.setValue(3), game.run(); 
		break;
	case '2': game.m_fruit.setValue(2), game.run();
		break;
	case '3': game.m_fruit.setValue(1), game.run();
		break;
	}
	
	return 0;

}