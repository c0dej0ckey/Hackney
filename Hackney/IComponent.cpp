#include "stdafx.h"
#include "IComponent.h"


IComponent::IComponent(Entity* owner)
{
	this->owner = owner;
}


IComponent::~IComponent(void)
{
}

void IComponent::update()
{

}