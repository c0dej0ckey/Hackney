#pragma once

#include "IComponent.h"

class InputComponent : IComponent
{
public:
	InputComponent(void);
	~InputComponent(void);
	virtual void update();
};

