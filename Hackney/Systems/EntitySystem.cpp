#include "stdafx.h"
#include "..\Systems\EntitySystem.h"
#include "..\Entities\Entity.h"
#include <vector>

using namespace std;

namespace Systems
{

vector<Entities::Entity*> EntitySystem::entities;

EntitySystem::EntitySystem(void)
{
}

EntitySystem::~EntitySystem(void)
{
}

void EntitySystem::registerEntity(Entities::Entity *entity)
{
	entities.push_back(entity);
	
}

void EntitySystem::unregisterEntity(Entities::Entity *entity)
{
	
	for(vector<Entities::Entity*>::iterator iter = entities.begin(); iter < entities.end(); iter++)
	{
		if((*iter)->getId() == entity->getId())
		{
			entities.erase(iter);
		}
	}
}

vector<Entities::Entity*> EntitySystem::getEntities()
{
	return entities;
}

void EntitySystem::draw()
{
}

void EntitySystem::update()
{
	

}

}