#pragma once
#include <iostream>
#include <vector>
#include "IComponent.h"

using namespace std;

class Entity
{
public:
	Entity(void);
	~Entity(void);
	unsigned getId();
	void setId(unsigned int id);

private:
	
	vector<IComponent> components;
	unsigned int id;
};

