// Hackney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Box2D\Box2D.h>
#include <SFML\Graphics.hpp>
#include <cstdio>
#include "Entity.h"
#include "EntitySystem.h"
#include "RenderSystem.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	sf::RenderWindow *window = new sf::RenderWindow(sf::VideoMode(200,200), "SFML works!");

	EntitySystem entitySystem;
	RenderSystem renderSystem(*window);
	//RenderSystem renderSystem;
	Entity e;
	unsigned int id = e.getId();
//	entitySystem.registerEntity(e);


	
	while(window->isOpen())
	{
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

