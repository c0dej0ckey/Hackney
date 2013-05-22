#include "stdafx.h"
#include "MovementSystem.h"
#include "..\Entities\Entity.h"
#include "..\Systems\EntitySystem.h"
#include "..\Components\MovementComponent.h"

namespace Systems
{

MovementSystem::MovementSystem(void)
{
}


MovementSystem::~MovementSystem(void)
{
}

void MovementSystem::update()
{
	vector<Entities::Entity*> entities = EntitySystem::getEntities();

	for(vector<Entities::Entity*>::iterator iter = entities.begin(); iter < entities.end(); iter++)
	{
		Components::MovementComponent *movementComponent = (Components::MovementComponent *)(*iter)->getComponent("MOVEMENT");
		movementComponent->update();
	}

}

}