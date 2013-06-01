#pragma once
#include "..\Entities\Entity.h"
#include "SFML\Graphics.hpp"

namespace Entities
{
class Entity;
};

namespace Components
{

	class IComponent
	{

	public:
		IComponent(Entities::Entity* owner);
		~IComponent(void);
		virtual void update();

	protected:
		Entities::Entity* owner;
	};

}