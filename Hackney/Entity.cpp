#include "stdafx.h"
#include "Entity.h"
#include "IComponent.h"
#include "EntityNumberGenerator.h"
#include "EntitySystem.h"

using namespace std;

Entity::Entity(void)
{
	id = EntityNumberGenerator::getId();
	EntitySystem::registerEntity(this);
}


Entity::~Entity(void)
{
}

unsigned int Entity::getId()
{
	return id;
}

void Entity::setId(unsigned int id)
{
	this->id = id;
}

IComponent *Entity::getComponent(string componentName)
{
	return NULL;
}