#include "stdafx.h"
#include "Globals.h"
#include "SFML\System.hpp"

using namespace std;

sf::Clock *Globals::gameTime = new sf::Clock();

Globals::Globals(void) 
{
}


Globals::~Globals(void)
{
	delete gameTime;
}

sf::Clock Globals::getGameTime()
{
	return (*gameTime);
}

void Globals::setGameTime(sf::Clock *clock)
{
	gameTime = clock;
}

void Globals::restartGameTime()
{
	gameTime->restart();
}