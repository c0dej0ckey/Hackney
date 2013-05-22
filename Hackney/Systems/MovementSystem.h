#pragma once
#include "ISystem.h"

namespace Entities
{
	class Entity;
}

namespace Components
{
	class MovementComponent;
}

namespace Systems
{

class MovementSystem : public ISystem
{
public:
	MovementSystem(void);
	~MovementSystem(void);
	void update();
};

}