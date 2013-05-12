#pragma once
#include "Entity.h"
#include "ISystem.h"

#include <vector>

using namespace std;

class EntitySystem : ISystem
{
public:
	EntitySystem(void);
	~EntitySystem(void);
	void registerEntity(Entity entity);
	void unregisterEntity(Entity entity);
	void getEntityById(unsigned int id);
	virtual void draw();
	virtual void update();
private:
	vector<Entity> entities;
};

