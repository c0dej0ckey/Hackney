#pragma once
#include "ISystem.h"


namespace Entities
{
	class Entity;
}

namespace Systems
{

class InputSystem : public ISystem
{
public:
	InputSystem(void);
	~InputSystem(void);
	void update();
};

}