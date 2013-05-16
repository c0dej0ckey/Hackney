#pragma once
#include "Entity.h"

class Entity;

class IComponent
{

public:
	IComponent(Entity* owner);
	~IComponent(void);
	virtual void update();

protected:
	Entity* owner;
};

