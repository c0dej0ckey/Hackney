#include "stdafx.h"
#include "MovementComponent.h"
#include "IComponent.h"
#include "../Globals.h"

namespace Components
{

MovementComponent::MovementComponent(Entities::Entity* owner, double xPosition, double yPosition, double xDirection, double yDirection, double xSpeed, double ySpeed) : IComponent(owner), position(xPosition, yPosition) , direction(xDirection, yDirection),
	speed(xSpeed, ySpeed) 
{
}



MovementComponent::~MovementComponent(void)
{
}

double MovementComponent::getXPosition()
{
	return position.x;
}

double MovementComponent::getYPosition()
{
	return position.y;
}

double MovementComponent::getXDirection()
{
	return direction.x;
}

double MovementComponent::getYDirection()
{
	return direction.y;
}

void MovementComponent::setXDirection(double x)
{
	direction.x = x;
}

void MovementComponent::setYDirection(double y)
{
	direction.y = y;
}

void MovementComponent::setXPosition(double x)
{
	position.x = x;
}

void MovementComponent::setYPosition(double y)
{
	position.y = y;
}

void MovementComponent::update()
{
	position.x += direction.x * 300 * Globals::getGameTime().getElapsedTime().asSeconds();
	position.y += direction.y * 300 * Globals::getGameTime().getElapsedTime().asSeconds();
	
}

}