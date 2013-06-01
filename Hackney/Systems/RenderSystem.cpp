#include "stdafx.h"
#include "RenderSystem.h"
#include "EntitySystem.h"
#include "..\Entities\Entity.h"
#include "SFML\Graphics.hpp"
#include "..\Components\RenderComponent.h"
#include "..\Components\MovementComponent.h"
#include "..\Entities\Player.h"
#include "..\Globals.h"
#include <vector>


using namespace std;
using namespace Components;

namespace Entities
{
	class Entity;
};

namespace Systems
{

	RenderSystem::RenderSystem(void)
	{
	}

	RenderSystem::RenderSystem(RenderWindow &window)
	{
		this->window = &window;
	}

	RenderSystem::~RenderSystem(void)
	{
	}

	void RenderSystem::update()
	{
		window->clear();

		vector<Entities::Entity*> entities = EntitySystem::getEntities();
		vector<Entities::Entity*>::iterator iter = entities.begin();
		for(iter; iter < entities.end(); ++iter)
		{
		
			Components::RenderComponent *renderComponent = (Components::RenderComponent *)(*iter)->getComponent("RENDER");
			Components::MovementComponent *movementComponent = (Components::MovementComponent *)(*iter)->getComponent("MOVEMENT");

			renderComponent->update();
			
			
			window->draw(*iter);
		}
	
		window->display();
	}

}