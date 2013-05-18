#pragma once

#include "..\Entities\Entity.h"
#include "..\Components\InputComponent.h"
#include "..\Components\MovementComponent.h"
#include "..\Components\RenderComponent.h"

namespace Entities
{

class Player : public Entity
{
	public:
		Player(void);
		~Player(void);
		Components::IComponent *getComponent(string componentName);

	private:
		Components::RenderComponent renderComponent;
		Components::MovementComponent movementComponent;
		Components::InputComponent inputComponent;
};

}