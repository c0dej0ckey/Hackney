#include "stdafx.h"
#include "MovementComponent.h"


MovementComponent::MovementComponent(double xPosition, double yPosition, double xDirection, double yDirection, double xSpeed, double ySpeed) : position(xPosition, yPosition) , direction(xDirection, yDirection),
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

