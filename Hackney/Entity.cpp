#include "stdafx.h"
#include "Entity.h"
#include "EntityNumberGenerator.h"

using namespace std;

Entity::Entity(void)
{
	id = EntityNumberGenerator::getId();
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