#pragma once
#include "ISystem.h"


namespace Entities
{
	class Entity;
}

namespace Systems
{

class InputSystem : ISystem
{
public:
	InputSystem(void);
	~InputSystem(void);
	void update();
};

}