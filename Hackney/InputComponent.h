#pragma once

#include "IComponent.h"

class InputComponent : public IComponent
{
public:
	InputComponent(Entity* owner);
	~InputComponent(void);
	void update();
};

