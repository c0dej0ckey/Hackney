#pragma once

#include "IComponent.h"

class InputComponent : public IComponent
{
public:
	InputComponent(void);
	~InputComponent(void);
	void update();
};

