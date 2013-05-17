#pragma once
#include "SFML\System\Clock.hpp"

using namespace std;

class Globals

{
public:
	Globals(void);
	~Globals(void);
	 static sf::Clock  getGameTime();
	static void setGameTime(sf::Clock *clock);

private:
	 static sf::Clock *gameTime;

};

