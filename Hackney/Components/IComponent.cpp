#include "stdafx.h"
#include "IComponent.h"

namespace Components
{

	IComponent::IComponent(Entities::Entity* owner)
	{
		this->owner = owner;
	}


	IComponent::~IComponent(void)
	{
	}

	void IComponent::update()
	{

	}

}