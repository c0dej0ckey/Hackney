#include "stdafx.h"
#include "Globals.h"
#include "SFML\System.hpp"

using namespace std;

sf::Clock *Globals::gameTime;

Globals::Globals(void)
{
}


Globals::~Globals(void)
{
}

sf::Clock Globals::getGameTime()
{
	return (*gameTime);
}

void Globals::setGameTime(sf::Clock *clock)
{
	gameTime = clock;
}