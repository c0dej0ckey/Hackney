// Hackney.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Box2D\Box2D.h>
#include <SFML\Graphics.hpp>
#include <cstdio>
#include "Entities\Entity.h"
#include "Systems\EntitySystem.h"
#include "Systems\RenderSystem.h"
#include "Entities\Player.h"
#include "Systems\InputSystem.h"
#include "Systems\MovementSystem.h"
#include "Systems\SystemsManager.h"
#include "Globals.h"

using namespace std;
using namespace Systems;

int _tmain(int argc, _TCHAR* argv[])
{
	//sf::RenderWindow *window = new sf::RenderWindow(sf::VideoMode(800,600), "SFML works!");
	RenderWindow *window = new RenderWindow(sf::VideoMode(800, 600), "SFML works");
	

	Globals global;

	SystemsManager systemsManager(*window);
	systemsManager.initializeSystems();

	//EntitySystem entitySystem;
	//RenderSystem renderSystem(*window);
	//InputSystem inputSystem;
	//MovementSystem movementSystem;
	Entities::Player *p = new Entities::Player();

	
	
	while(window->isOpen())
	{
		Globals::restartGameTime();

		//renderSystem.update();
		//movementSystem.update();
		//inputSystem.update();
		
		systemsManager.update();


		sf::Event event;
		while(window->pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window->close();
		}
	}


	return 0;
}

