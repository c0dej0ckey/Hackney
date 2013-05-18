#pragma once

#include "IComponent.h"

namespace Components
{

class InputComponent : public IComponent
{
public:
	InputComponent(Entities::Entity* owner);
	~InputComponent(void);
	void update();
};

}