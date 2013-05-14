#pragma once

#include "Entity.h"
#include "RenderComponent.h"

class Player : Entity
{
public:
	Player(void);
	~Player(void);

private:
	RenderComponent renderComponent;
};

