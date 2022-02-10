#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Game.h"
#include "Helpers.h"
#include "Tail.h"
#include <Windows.h>

Game::Game()
{
}

void Game::run()
{
	system("cls");

	std::cout << "  *-*-*SNAKE*-*-*\nPRESS SPACE TO START\n";

	char ch = _getch();

	if (ch == ' ')			//if space is pressed
	{
		while (true)
		{
			system("cls");

			m_border.draw();
			m_snake.draw();
			m_fruit.draw();
			m_snake.update();

			Sleep(5);

			eatFruit();
			borderDeath();
			gameOver();
		}
	}
}

void Game::eatFruit()
{
	if (m_fruit.getX() == m_snake.m_head.getX() && m_fruit.getY() == m_snake.m_head.getY()) //if head touches a fruit
	{
		m_fruit.randomPos();

		m_snake.m_tail.growTail(m_fruit.m_value);		
	}

	for(int i = 0; i < 1; i++)		//Stops fruit from spawning inside the tail
	{
		if(m_fruit.getX() == m_snake.m_tail.m_elements[i].getX() && m_fruit.getY() == m_snake.m_tail.m_elements[i].getY())
		{
			m_fruit.randomPos();
		}
	}
}

void Game::borderDeath()
{
	if (m_snake.m_head.getX() >= m_border.getX() || m_snake.m_head.getX() <= 0)		//if head touches the border
	{
		m_snake.m_tail.~Tail();
		m_snake.alive = false;		//kill the snake
	}
	if (m_snake.m_head.getY() >= m_border.getY() || m_snake.m_head.getY() <= 0)		//if head touches the border
	{
		m_snake.m_tail.~Tail();
		m_snake.alive = false;		//kill the snake
	}
}

void Game::gameOver()
{
	if(m_snake.alive == false)
	{
		gotoXY(7, 9);
		std::cout << "***GAME OVER***\n";
		gotoXY(10, 10);
		std::cout << "SCORE:" << m_snake.m_tail.getScore();
	}
}


