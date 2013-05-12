#include "stdafx.h"
#include "EntitySystem.h"
#include "Entity.h"

using namespace std;

EntitySystem::EntitySystem(void)
{
}

EntitySystem::~EntitySystem(void)
{
}

void EntitySystem::registerEntity(Entity entity)
{
	entities.push_back(entity);
}

void EntitySystem::unregisterEntity(Entity entity)
{
	
	for(vector<Entity>::iterator iter = entities.begin(); iter < entities.end(); iter++)
	{
		if(iter->getId() == entity.getId())
		{
			entities.erase(iter);
		}
	}
}

void EntitySystem::draw()
{
}

void EntitySystem::update()
{
}