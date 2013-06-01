#include "stdafx.h"
#include "Player.h"

namespace Entities
{

Player::Player(void) :   renderComponent(this, "Content\\th_Mario.png"), movementComponent(this, 0, 520, 0 , 0, 160, 0), inputComponent(this)
{

}

Player::~Player(void)
{
}

Components::IComponent *Player::getComponent(string componentName)
{
	if(componentName == "RENDER")
		return &renderComponent;
	else if(componentName == "MOVEMENT")
		return &movementComponent;
	else if(componentName == "INPUT")
		return &inputComponent;
	else
		return NULL;
}

}