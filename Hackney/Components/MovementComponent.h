#pragma once

#include "SFML\System.hpp"
#include "IComponent.h"

namespace Components
{

	class MovementComponent : public IComponent
	{
	public:
		MovementComponent(Entities::Entity* owner, double xPosition, double yPosition, double xDirection, double yDirection, double xSpeed, double ySpeed);
		~MovementComponent(void);
		void setPosition(sf::Vector2<double> position);
		sf::Vector2<double> getPosition();
		void setDirection(sf::Vector2<double> direction);
		sf::Vector2<double> setDirection();
		void setSpeed(sf::Vector2<double> speed);
		sf::Vector2<double> getSpeed();
		double getXPosition();
		double getYPosition();
		double getXDirection();
		double getYDirection();
		double getXSpeed();
		double getYSpeed();
		void setXDirection(double x);
		void setYDirection(double y);
		void setXPosition(double x);
		void setYPosition(double y);
		void update();



	private:
		sf::Vector2<double> position;
		sf::Vector2<double> speed;
		sf::Vector2<double> direction;
	};

}
