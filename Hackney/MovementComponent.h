#pragma once

#include "SFML\System.hpp"

class MovementComponent
{
public:
	MovementComponent(void);
	~MovementComponent(void);
	void setPosition(sf::Vector2<double> position);
	sf::Vector2<double> getPosition();
	void setDirection(sf::Vector2<double> direction);
	sf::Vector2<double> setDirection();
	void setSpeed(sf::Vector2<double> speed);
	sf::Vector2<double> getSpeed();




private:
	sf::Vector2<double> position;
	sf::Vector2<double> speed;
	sf::Vector2<double> direction;
};

