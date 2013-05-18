#pragma once
#include <iostream>
#include <vector>
#include "..\Components\IComponent.h"

using namespace std;

namespace Components
{
	class IComponent;
};
//class IComponent;

namespace Entities
{

class Entity
{
public:
	Entity(void);
	~Entity(void);
	unsigned getId();
	void setId(unsigned int id);
	virtual Components::IComponent *getComponent(string componentName);
private:
	
	vector<Components::IComponent> components;
	unsigned int id;
};

}