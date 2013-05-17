// Hackney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Box2D\Box2D.h>
#include <SFML\Graphics.hpp>
#include <cstdio>
#include "Entity.h"
#include "EntitySystem.h"
#include "RenderSystem.h"
#include "Player.h"
#include "Globals.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	sf::RenderWindow *window = new sf::RenderWindow(sf::VideoMode(800,600), "SFML works!");
	Globals global;
	EntitySystem entitySystem;
	RenderSystem renderSystem(*window);
	Player *p = new Player();
	

	
	while(window->isOpen())
	{
		Globals::restartGameTime();

		renderSystem.draw();

		sf::Event event;
		while(window->pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window->close();
		}
	}


	return 0;
}

