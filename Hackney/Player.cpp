#include "stdafx.h"
#include "Player.h"


Player::Player(void) : renderComponent(this, "D:\\Projects\\th_Mario.png"), movementComponent(this, 0, 520, 1, 0, 160, 0)
{
	
}


Player::~Player(void)
{
}

IComponent *Player::getComponent(string componentName)
{
	if(componentName == "RENDER")
		return &renderComponent;
	else if(componentName == "MOVEMENT")
		return &movementComponent;
	else
		return NULL;
}
