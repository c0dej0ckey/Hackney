#include "stdafx.h"
#include "Entity.h"
#include "..\Components\IComponent.h"
#include "..\Utilities\EntityNumberGenerator.h"
#include "..\Systems\EntitySystem.h"

using namespace std;
using namespace Systems;

namespace Entities
{

Entity::Entity(void)
{
	id = Utilities::EntityNumberGenerator::getId();
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

Components::IComponent *Entity::getComponent(string componentName)
{
	return NULL;
}

}