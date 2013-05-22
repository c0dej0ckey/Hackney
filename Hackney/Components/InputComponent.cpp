#include "stdafx.h"
#include "InputComponent.h"
#include "MovementComponent.h"
#include "IComponent.h"
#include "..\Entities\Entity.h"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"

namespace Components
{

InputComponent::InputComponent(Entities::Entity* owner) : IComponent(owner)
{
}


InputComponent::~InputComponent(void)
{
}

void InputComponent::update()
{
	
	MovementComponent *movementComponent = (MovementComponent *)owner->getComponent("MOVEMENT");
	movementComponent->setXDirection(0);
	movementComponent->setYDirection(0);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		movementComponent->setXDirection(-1);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		movementComponent->setXDirection(1);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		movementComponent->setYDirection(-1);
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		movementComponent->setYDirection(1);
	}

}

}