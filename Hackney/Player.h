#pragma once

#include "Entity.h"
#include "RenderComponent.h"
#include "MovementComponent.h"

class Player : public Entity
{
public:
	Player(void);
	~Player(void);
	IComponent *getComponent(string componentName);

private:
	RenderComponent renderComponent;
	MovementComponent movementComponent;
};

