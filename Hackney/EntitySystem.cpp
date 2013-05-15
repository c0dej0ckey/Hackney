#include "stdafx.h"
#include "EntitySystem.h"
#include "Entity.h"
#include <vector>

using namespace std;

vector<Entity> EntitySystem::entities;

EntitySystem::EntitySystem(void)
{
}

EntitySystem::~EntitySystem(void)
{
}

void EntitySystem::registerEntity(Entity entity)
{
	//entities.push_back(entity);
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

vector<Entity> EntitySystem::getEntities()
{
	return entities;
}

void EntitySystem::draw()
{
}

void EntitySystem::update()
{
	

}